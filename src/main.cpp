#include <iostream>
#include <string_view>
#include "WinOpenGLBase.h"
#include <unistd.h>

int main(int /*argc*/, const char *const argv[]) {
    try {

        {
            EglTest::WinOpenGLBase openGLBase;
            openGLBase.Init();
            openGLBase.MakeCurrent();

            const GLubyte *vendor = glGetString(GL_VENDOR);
            const GLubyte *renderer = glGetString(GL_RENDERER);
            const GLubyte *version = glGetString(GL_VERSION);
            const GLubyte *glslversion = glGetString(GL_SHADING_LANGUAGE_VERSION);
            std::cout << "OpenGL: vendor: " << vendor << ", renderer: " << renderer << ", version: " << version
                      << ", shading language version: " << glslversion << std::endl;

            std::string_view vendorStrView(reinterpret_cast<const char*>(vendor));
            const bool isNvidia = vendorStrView.starts_with("NVIDIA");

            int availableVideoMemory;
            const bool successGetVideoMemory = EglTest::WinOpenGLBase::GetAvailableVideoMemory(availableVideoMemory);
            if (!successGetVideoMemory)
                std::cout
                        << "Unable to determine amount of available video memory; hardware incapable of backprojection on the GPU!"
                        << std::endl;

            const bool openglExtensionsSupported = EglTest::WinOpenGLBase::areRequiredGlExtensionsSupported();
            if (!openglExtensionsSupported)
                std::cout
                        << "Some required OpenGL extensions are not supported; hardware incapable of backprojection on the GPU!"
                        << std::endl;

            if (successGetVideoMemory && openglExtensionsSupported && isNvidia) {
                while (true){
                    std::cout << "Hardware allows GPU backprojection" << std::endl;
                    sleep(5);
                }
            }
            else
            {
                while (true) {
                    std::cout << "WARNING: No GPU HW acceleration" << std::endl;
                    sleep(5);
                }
            }
        }
        return 0;
    }
    catch (const std::exception &e) {
        std::cerr << "Unhandled exception: " << e.what() << std::endl;

        return 1;
    }
    catch (...) {
        std::cerr << "Unhandled exception" << std::endl;

        return 1;
    }
}
