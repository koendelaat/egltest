
#include "WinOpenGLBase.h"
#include "aixia_glext.h"
#include <sstream>

namespace EglTest {

    WinOpenGLBase::~WinOpenGLBase() {
        Free();
    }

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
    WinOpenGLBase::WinOpenGLBase() :
            m_hGLContext(nullptr),
            m_hDisplay(nullptr),
            m_Surface(nullptr),
            m_hDrawable(nullptr) {
    }

    WinOpenGLBase::WinOpenGLBase(WinOpenGLBase &&other) noexcept:
            m_hGLContext(other.m_hGLContext),
            m_hDisplay(other.m_hDisplay),
            m_Surface(other.m_Surface),
            m_hDrawable(other.m_hDrawable) {
        other.m_hGLContext = nullptr;
        other.m_hDisplay = nullptr;
        other.m_Surface = nullptr;
        other.m_hDrawable = nullptr;
    }

// =======================================================================
// Initialize our OpenGL base
// =======================================================================
    EGLContext WinOpenGLBase::Init() {
        // 1. Initialize EGL
        // obtain display by specifying an appropriate device. This is the preferred method today.

        // load the function pointers for the device,platform extensions
        const PFNEGLQUERYDEVICESEXTPROC eglQueryDevicesEXT =
                reinterpret_cast<PFNEGLQUERYDEVICESEXTPROC>(eglGetProcAddress("eglQueryDevicesEXT"));
        if (!eglQueryDevicesEXT) {
            throw std::runtime_error("ERROR: extension eglQueryDevicesEXT not available");
        }

        const PFNEGLGETPLATFORMDISPLAYEXTPROC eglGetPlatformDisplayEXT =
                reinterpret_cast<PFNEGLGETPLATFORMDISPLAYEXTPROC>(eglGetProcAddress("eglGetPlatformDisplayEXT"));
        if (!eglGetPlatformDisplayEXT) {
            throw std::runtime_error("ERROR: extension eglGetPlatformDisplayEXT not available");
        }

        static const int MAX_DEVICES = 16;
        EGLDeviceEXT devices[MAX_DEVICES];
        EGLint numDevices;

        eglQueryDevicesEXT(MAX_DEVICES, devices, &numDevices);

        if (numDevices > 0) {
            m_hDisplay = eglGetPlatformDisplayEXT(EGL_PLATFORM_DEVICE_EXT, devices[0], nullptr);
        } else {
            std::cout << "eglQueryDevicesExt returns 0 devices" << std::endl;
            m_hDisplay = eglGetDisplay(EGL_DEFAULT_DISPLAY);
        }
        if (m_hDisplay == nullptr) {
            auto error = eglGetError();
            std::cout << "eglGetPlatformDisplayEXT returns null" << std::endl;
            std::cout << "eglGetError: " << std::to_string(error) << std::endl;
            throw std::runtime_error("eglGetPlatformDisplayEXT returns null");
        }

        static const EGLint configAttribs[] = {
                EGL_SURFACE_TYPE, EGL_PBUFFER_BIT,
                EGL_BLUE_SIZE, 8,
                EGL_GREEN_SIZE, 8,
                EGL_RED_SIZE, 8,
                EGL_DEPTH_SIZE, 8,
                EGL_RENDERABLE_TYPE, EGL_OPENGL_BIT,
                EGL_NONE
        };

        static const int pbufferWidth = 4096;
        static const int pbufferHeight = 2160;

        static const EGLint pbufferAttribs[] =
                {
                        EGL_WIDTH, pbufferWidth,
                        EGL_HEIGHT, pbufferHeight,
                        EGL_NONE,
                };

        EGLint major, minor;
        if (!eglInitialize(m_hDisplay, &major, &minor)) {
            auto error = eglGetError();
            std::cout << "eglInitialize returns false" << std::endl;
            std::cout << "eglGetError: " << std::to_string(error) << std::endl;
            throw std::runtime_error("eglInitialize returns false");
        }

        // 2. Select appropriate configuration
        EGLint numConfigs;
        EGLConfig eglCfg;

        eglChooseConfig(m_hDisplay, configAttribs, &eglCfg, 1, &numConfigs);

        // 3. Bind the API
        if (!eglBindAPI(EGL_OPENGL_API)) {
            auto error = eglGetError();
            std::cout << "eglBindAPI returns false" << std::endl;
            std::cout << "eglGetError: " << std::to_string(error) << std::endl;
            throw std::runtime_error("eglBindAPI returns false");
        }

        // 4. create the context
        m_hGLContext = eglCreateContext(m_hDisplay, eglCfg, EGL_NO_CONTEXT, nullptr);

        if (m_hGLContext == nullptr) {
            auto error = eglGetError();
            std::cout << "eglCreateContext returns null" << std::endl;
            std::cout << "eglGetError: " << std::to_string(error) << std::endl;
            throw std::runtime_error("eglCreateContext returns null");
        }

        // 5. create the surface and make the context current current
        m_Surface = eglCreatePbufferSurface(m_hDisplay, eglCfg, pbufferAttribs);
        eglMakeCurrent(m_hDisplay, m_Surface, m_Surface, m_hGLContext);

        return m_hGLContext;
    }

    void WinOpenGLBase::Free() {
        if (m_hDisplay != nullptr) {
            eglDestroyContext(m_hDisplay, m_hGLContext);
            eglTerminate(m_hDisplay);
        }
    }

    bool WinOpenGLBase::IsCurrent() const {
        return eglGetCurrentContext() == m_hGLContext;
    }

    void WinOpenGLBase::MakeCurrent() {
        eglMakeCurrent(m_hDisplay, m_Surface, m_Surface, m_hGLContext);
    }

    void WinOpenGLBase::ReleaseCurrent() {
        eglMakeCurrent(m_hDisplay, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    }

    EGLContext WinOpenGLBase::GetCurrentContext() {
        return eglGetCurrentContext();
    }

    void WinOpenGLBase::InitGLExt() {
        // initialize OpenGL extensions using dummy context
        if (!isGlextInitialized()) {
            WinOpenGLBase dummyContext;
            if (GetCurrentContext() == nullptr) {
                dummyContext.Init();
                dummyContext.MakeCurrent();
            }
            initGlext();
        }
    }

    bool WinOpenGLBase::GetAvailableVideoMemory(int &availableVideoMemory) {
        constexpr int GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX = 0x9048;

        // Reset the OpenGL error state.
        GLenum glErr = glGetError();
        if (glErr != GL_NO_ERROR) {
            // An error code was detected in OpenGL. No need to log this error, since we only wanted to clear this state.
        }

        int videoMemory[4] = {0, 0, 0, 0};
        glGetIntegerv(GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX, videoMemory);

        // Check that the GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX parameter was supported by the graphics hardware.
        glErr = glGetError();
        if (glErr == GL_INVALID_ENUM) {
            // Maybe AMD/ATI hardware is present
            const int TEXTURE_FREE_MEMORY_ATI = 0x87FC;
            glGetIntegerv(TEXTURE_FREE_MEMORY_ATI, videoMemory);
            if (glGetError() == GL_INVALID_ENUM) {
                // Unable to determine available video memory on this hardware
                return false;
            }
        }

        availableVideoMemory = videoMemory[0];
        return true;
    }

    bool WinOpenGLBase::areRequiredGlExtensionsSupported() {
        if (!isGlextInitialized()) {
            initGlext();  //initialize the OpenGL extensions
        }

        bool allSupported = true;

        return allSupported;
    }

}  //namespace EglTest
