#include "aixia_glext.h"
#include <cstring>


namespace EglTest
{


// OpenGL extensions
#ifndef GL_VERSION_1_2
OPENGLEXT_API PFNGLTEXIMAGE3DPROC glTexImage3D = nullptr;
OPENGLEXT_API PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D = nullptr;
OPENGLEXT_API PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D = nullptr;
OPENGLEXT_API PFNGLBLENDEQUATIONPROC glBlendEquation = nullptr;
OPENGLEXT_API PFNGLCOLORTABLEPROC glColorTable = nullptr;
OPENGLEXT_API PFNGLCOLORTABLEPARAMETERFVPROC glColorTableParameterfv = nullptr;
OPENGLEXT_API PFNGLCOLORTABLEPARAMETERIVPROC glColorTableParameteriv = nullptr;
OPENGLEXT_API PFNGLCOPYCOLORTABLEPROC glCopyColorTable = nullptr;
OPENGLEXT_API PFNGLGETCOLORTABLEPROC glGetColorTable = nullptr;
OPENGLEXT_API PFNGLGETCOLORTABLEPARAMETERFVPROC glGetColorTableParameterfv = nullptr;
OPENGLEXT_API PFNGLGETCOLORTABLEPARAMETERIVPROC glGetColorTableParameteriv = nullptr;
OPENGLEXT_API PFNGLCOLORSUBTABLEPROC glColorSubTable = nullptr;
OPENGLEXT_API PFNGLCOPYCOLORSUBTABLEPROC glCopyColorSubTable = nullptr;
OPENGLEXT_API PFNGLCONVOLUTIONFILTER1DPROC glConvolutionFilter1D = nullptr;
OPENGLEXT_API PFNGLCONVOLUTIONFILTER2DPROC glConvolutionFilter2D = nullptr;
OPENGLEXT_API PFNGLCONVOLUTIONPARAMETERFPROC glConvolutionParameterf = nullptr;
OPENGLEXT_API PFNGLCONVOLUTIONPARAMETERFVPROC glConvolutionParameterfv = nullptr;
OPENGLEXT_API PFNGLCONVOLUTIONPARAMETERIPROC glConvolutionParameteri = nullptr;
OPENGLEXT_API PFNGLCONVOLUTIONPARAMETERIVPROC glConvolutionParameteriv = nullptr;
OPENGLEXT_API PFNGLCOPYCONVOLUTIONFILTER1DPROC glCopyConvolutionFilter1D = nullptr;
OPENGLEXT_API PFNGLCOPYCONVOLUTIONFILTER2DPROC glCopyConvolutionFilter2D = nullptr;
OPENGLEXT_API PFNGLGETCONVOLUTIONFILTERPROC glGetConvolutionFilter = nullptr;
OPENGLEXT_API PFNGLGETCONVOLUTIONPARAMETERFVPROC glGetConvolutionParameterfv = nullptr;
OPENGLEXT_API PFNGLGETCONVOLUTIONPARAMETERIVPROC glGetConvolutionParameteriv = nullptr;
OPENGLEXT_API PFNGLGETSEPARABLEFILTERPROC glGetSeparableFilter = nullptr;
OPENGLEXT_API PFNGLSEPARABLEFILTER2DPROC glSeparableFilter2D = nullptr;
OPENGLEXT_API PFNGLGETHISTOGRAMPROC glGetHistogram = nullptr;
OPENGLEXT_API PFNGLGETHISTOGRAMPARAMETERFVPROC glGetHistogramParameterfv = nullptr;
OPENGLEXT_API PFNGLGETHISTOGRAMPARAMETERIVPROC glGetHistogramParameteriv = nullptr;
OPENGLEXT_API PFNGLGETMINMAXPROC glGetMinmax = nullptr;
OPENGLEXT_API PFNGLGETMINMAXPARAMETERFVPROC glGetMinmaxParameterfv = nullptr;
OPENGLEXT_API PFNGLGETMINMAXPARAMETERIVPROC glGetMinmaxParameteriv = nullptr;
OPENGLEXT_API PFNGLHISTOGRAMPROC glHistogram = nullptr;
OPENGLEXT_API PFNGLMINMAXPROC glMinmax = nullptr;
OPENGLEXT_API PFNGLRESETHISTOGRAMPROC glResetHistogram = nullptr;
OPENGLEXT_API PFNGLRESETMINMAXPROC glResetMinmax = nullptr;
#endif

#ifndef GL_VERSION_1_3
OPENGLEXT_API PFNGLCLIENTACTIVETEXTUREPROC glClientActiveTexture = nullptr;
OPENGLEXT_API PFNGLACTIVETEXTUREPROC glActiveTexture = nullptr;
OPENGLEXT_API PFNGLMULTITEXCOORD3DVPROC glMultiTexCoord3dv = nullptr;
OPENGLEXT_API PFNGLMULTITEXCOORD3DPROC glMultiTexCoord3d = nullptr;
OPENGLEXT_API PFNGLMULTITEXCOORD3FVPROC glMultiTexCoord3fv = nullptr;
OPENGLEXT_API PFNGLMULTITEXCOORD3FPROC glMultiTexCoord3f = nullptr;
OPENGLEXT_API PFNGLMULTITEXCOORD2DVPROC glMultiTexCoord2dv = nullptr;
OPENGLEXT_API PFNGLMULTITEXCOORD2DPROC glMultiTexCoord2d = nullptr;
OPENGLEXT_API PFNGLMULTITEXCOORD2FVPROC glMultiTexCoord2fv = nullptr;
OPENGLEXT_API PFNGLMULTITEXCOORD2FPROC glMultiTexCoord2f = nullptr;
OPENGLEXT_API PFNGLMULTITEXCOORD1FPROC glMultiTexCoord1f = nullptr;
#endif

#ifndef GL_VERSION_1_4
OPENGLEXT_API PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate = nullptr;
OPENGLEXT_API PFNGLWINDOWPOS2FPROC glWindowPos2f = nullptr;
OPENGLEXT_API PFNGLWINDOWPOS2IPROC glWindowPos2i = nullptr;
#endif

#ifndef GL_VERSION_1_5
OPENGLEXT_API PFNGLBINDBUFFERPROC glBindBuffer = nullptr;
OPENGLEXT_API PFNGLDELETEBUFFERSPROC glDeleteBuffers = nullptr;
OPENGLEXT_API PFNGLGENBUFFERSPROC glGenBuffers = nullptr;
OPENGLEXT_API PFNGLISBUFFERPROC glIsBuffer = nullptr;
OPENGLEXT_API PFNGLBUFFERDATAPROC glBufferData = nullptr;
OPENGLEXT_API PFNGLBUFFERSUBDATAPROC glBufferSubData = nullptr;
OPENGLEXT_API PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData = nullptr;
OPENGLEXT_API PFNGLMAPBUFFERPROC glMapBuffer = nullptr;
OPENGLEXT_API PFNGLUNMAPBUFFERPROC glUnmapBuffer = nullptr;
OPENGLEXT_API PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv = nullptr;
OPENGLEXT_API PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv = nullptr;
#endif

#ifndef GL_VERSION_2_0
OPENGLEXT_API PFNGLCREATESHADERPROC glCreateShader = nullptr;
OPENGLEXT_API PFNGLSHADERSOURCEPROC glShaderSource = nullptr;
OPENGLEXT_API PFNGLCOMPILESHADERPROC glCompileShader = nullptr;
OPENGLEXT_API PFNGLGETSHADERIVPROC glGetShaderiv = nullptr;
OPENGLEXT_API PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog = nullptr;
OPENGLEXT_API PFNGLDELETESHADERPROC glDeleteShader = nullptr;
OPENGLEXT_API PFNGLCREATEPROGRAMPROC glCreateProgram = nullptr;
OPENGLEXT_API PFNGLATTACHSHADERPROC glAttachShader = nullptr;
OPENGLEXT_API PFNGLATTACHSHADERPROC glDetachShader = nullptr;
OPENGLEXT_API PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation = nullptr;
OPENGLEXT_API PFNGLLINKPROGRAMPROC glLinkProgram = nullptr;
OPENGLEXT_API PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders = nullptr;
OPENGLEXT_API PFNGLGETPROGRAMIVPROC glGetProgramiv = nullptr;
OPENGLEXT_API PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog = nullptr;
OPENGLEXT_API PFNGLDELETEPROGRAMPROC glDeleteProgram = nullptr;
OPENGLEXT_API PFNGLUSEPROGRAMPROC glUseProgram = nullptr;
OPENGLEXT_API PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer = nullptr;
OPENGLEXT_API PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray = nullptr;
OPENGLEXT_API PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray = nullptr;
OPENGLEXT_API PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation = nullptr;
OPENGLEXT_API PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation = nullptr;
OPENGLEXT_API PFNGLUNIFORM1IPROC glUniform1i = nullptr;
OPENGLEXT_API PFNGLUNIFORM1FPROC glUniform1f = nullptr;
OPENGLEXT_API PFNGLUNIFORM2IPROC glUniform2i = nullptr;
OPENGLEXT_API PFNGLUNIFORM2FPROC glUniform2f = nullptr;
OPENGLEXT_API PFNGLUNIFORM3FPROC glUniform3f = nullptr;
OPENGLEXT_API PFNGLUNIFORM3FVPROC glUniform3fv = nullptr;
OPENGLEXT_API PFNGLUNIFORM4IPROC glUniform4i = nullptr;
OPENGLEXT_API PFNGLUNIFORM4FPROC glUniform4f = nullptr;
OPENGLEXT_API PFNGLUNIFORM4FVPROC glUniform4fv = nullptr;
OPENGLEXT_API PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv = nullptr;
OPENGLEXT_API PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv = nullptr;
OPENGLEXT_API PFNGLDRAWBUFFERSPROC glDrawBuffers = nullptr;
OPENGLEXT_API PFNGLGENQUERIESPROC glGenQueries = nullptr;
OPENGLEXT_API PFNGLBEGINQUERYPROC glBeginQuery = nullptr;
OPENGLEXT_API PFNGLENDQUERYPROC glEndQuery = nullptr;
OPENGLEXT_API PFNGLDELETEQUERIESPROC glDeleteQueries = nullptr;
OPENGLEXT_API PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv = nullptr;
#endif

#ifndef GL_VERSION_3_0
OPENGLEXT_API PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers = nullptr;
OPENGLEXT_API PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers = nullptr;
OPENGLEXT_API PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer = nullptr;
OPENGLEXT_API PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D = nullptr;
OPENGLEXT_API PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus = nullptr;
OPENGLEXT_API PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer = nullptr;
#endif

#ifndef GL_VERSION_3_1
OPENGLEXT_API PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced = nullptr;
OPENGLEXT_API PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced = nullptr;
OPENGLEXT_API PFNGLTEXBUFFERPROC glTexBuffer = nullptr;
OPENGLEXT_API PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex = nullptr;
#endif

#ifndef GL_VERSION_3_3
OPENGLEXT_API PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor = nullptr;
#endif

#ifndef GL_VERSION_4_0
OPENGLEXT_API PFNGLMINSAMPLESHADINGPROC glMinSampleShading = nullptr;
OPENGLEXT_API PFNGLBLENDEQUATIONIPROC glBlendEquationi = nullptr;
OPENGLEXT_API PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei = nullptr;
OPENGLEXT_API PFNGLBLENDFUNCIPROC glBlendFunci = nullptr;
OPENGLEXT_API PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei = nullptr;
#endif

#ifdef _WIN32

// WGL_NV_gpu_affinity
OPENGLEXT_API PFNWGLENUMGPUSNVPROC wglEnumGpusNV = nullptr;
OPENGLEXT_API PFNWGLENUMGPUDEVICESNVPROC wglEnumGpuDevicesNV = nullptr;
OPENGLEXT_API PFNWGLCREATEAFFINITYDCNVPROC wglCreateAffinityDCNV = nullptr;
OPENGLEXT_API PFNWGLENUMGPUSFROMAFFINITYDCNVPROC wglEnumGpusFromAffinityDCNV = nullptr;
OPENGLEXT_API PFNWGLDELETEDCNVPROC wglDeleteDCNV = nullptr;
#endif


#if defined(__APPLE__)
#import <mach-o/dyld.h>
void* aglGetProcAddress(const char* name)
{
    std::string symbolName = std::string("_") + name;
    if (NSIsSymbolNameDefined(symbolName.c_str())) return nullptr;
    NSSymbol symbol = NSLookupAndBindSymbol(symbolName.c_str());
    return symbol ? NSAddressOfSymbol(symbol) : nullptr;
}
#endif


static bool initialized = false;
OPENGLEXT_API bool isGlextInitialized() {return initialized;}


OPENGLEXT_API void initGlext()
{
    // First pick the appropriate glGetProcAddress function
    #if defined(_WIN32)
    #define glGetProcAddress wglGetProcAddress
    #elif defined(_POSIX_)
    #define glGetProcAddress glXGetProcAddress
    #elif defined(__APPLE__)
    #define glGetProcAddress aglGetProcAddress
    #elif defined(BEOS)
    #define glGetProcAddress beosGetProcAddress
    #endif

    // If successful, find the OpenGL function entries
    #if defined glGetProcAddress
    #ifndef GL_VERSION_1_2
    glTexImage3D                = reinterpret_cast<PFNGLTEXIMAGE3DPROC>(glGetProcAddress("glTexImage3D"));
    glTexSubImage3D             = reinterpret_cast<PFNGLTEXSUBIMAGE3DPROC>(glGetProcAddress("glTexSubImage3D"));
    glCopyTexSubImage3D         = reinterpret_cast<PFNGLCOPYTEXSUBIMAGE3DPROC>(glGetProcAddress("glCopyTexSubImage3D"));
    glBlendEquation             = reinterpret_cast<PFNGLBLENDEQUATIONPROC>(glGetProcAddress("glBlendEquation"));
    glColorTable                = reinterpret_cast<PFNGLCOLORTABLEPROC>(glGetProcAddress("glColorTable"));
    glColorTableParameterfv     = reinterpret_cast<PFNGLCOLORTABLEPARAMETERFVPROC>(glGetProcAddress("glColorTableParameterfv"));
    glColorTableParameteriv     = reinterpret_cast<PFNGLCOLORTABLEPARAMETERIVPROC>(glGetProcAddress("glColorTableParameteriv"));
    glCopyColorTable            = reinterpret_cast<PFNGLCOPYCOLORTABLEPROC>(glGetProcAddress("glCopyColorTable"));
    glGetColorTable             = reinterpret_cast<PFNGLGETCOLORTABLEPROC>(glGetProcAddress("glGetColorTable"));
    glGetColorTableParameterfv  = reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERFVPROC>(glGetProcAddress("glGetColorTableParameterfv"));
    glGetColorTableParameteriv  = reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERIVPROC>(glGetProcAddress("glGetColorTableParameteriv"));
    glColorSubTable             = reinterpret_cast<PFNGLCOLORSUBTABLEPROC>(glGetProcAddress("glColorSubTable"));
    glCopyColorSubTable         = reinterpret_cast<PFNGLCOPYCOLORSUBTABLEPROC>(glGetProcAddress("glCopyColorSubTable"));
    glConvolutionFilter1D       = reinterpret_cast<PFNGLCONVOLUTIONFILTER1DPROC>(glGetProcAddress("glConvolutionFilter1D"));
    glConvolutionFilter2D       = reinterpret_cast<PFNGLCONVOLUTIONFILTER2DPROC>(glGetProcAddress("glConvolutionFilter2D"));
    glConvolutionParameterf     = reinterpret_cast<PFNGLCONVOLUTIONPARAMETERFPROC>(glGetProcAddress("glConvolutionParameterf"));
    glConvolutionParameterfv    = reinterpret_cast<PFNGLCONVOLUTIONPARAMETERFVPROC>(glGetProcAddress("glConvolutionParameterfv"));
    glConvolutionParameteri     = reinterpret_cast<PFNGLCONVOLUTIONPARAMETERIPROC>(glGetProcAddress("glConvolutionParameteri"));
    glConvolutionParameteriv    = reinterpret_cast<PFNGLCONVOLUTIONPARAMETERIVPROC>(glGetProcAddress("glConvolutionParameteriv"));
    glCopyConvolutionFilter1D   = reinterpret_cast<PFNGLCOPYCONVOLUTIONFILTER1DPROC>(glGetProcAddress("glCopyConvolutionFilter1D"));
    glCopyConvolutionFilter2D   = reinterpret_cast<PFNGLCOPYCONVOLUTIONFILTER2DPROC>(glGetProcAddress("glCopyConvolutionFilter2D"));
    glGetConvolutionFilter      = reinterpret_cast<PFNGLGETCONVOLUTIONFILTERPROC>(glGetProcAddress("glGetConvolutionFilter"));
    glGetConvolutionParameterfv = reinterpret_cast<PFNGLGETCONVOLUTIONPARAMETERFVPROC>(glGetProcAddress("glGetConvolutionParameterfv"));
    glGetConvolutionParameteriv = reinterpret_cast<PFNGLGETCONVOLUTIONPARAMETERIVPROC>(glGetProcAddress("glGetConvolutionParameteriv"));
    glGetSeparableFilter        = reinterpret_cast<PFNGLGETSEPARABLEFILTERPROC>(glGetProcAddress("glGetSeparableFilter"));
    glSeparableFilter2D         = reinterpret_cast<PFNGLSEPARABLEFILTER2DPROC>(glGetProcAddress("glSeparableFilter2D"));
    glGetHistogram              = reinterpret_cast<PFNGLGETHISTOGRAMPROC>(glGetProcAddress("glGetHistogram"));
    glGetHistogramParameterfv   = reinterpret_cast<PFNGLGETHISTOGRAMPARAMETERFVPROC>(glGetProcAddress("glGetHistogramParameterfv"));
    glGetHistogramParameteriv   = reinterpret_cast<PFNGLGETHISTOGRAMPARAMETERIVPROC>(glGetProcAddress("glGetHistogramParameteriv"));
    glGetMinmax                 = reinterpret_cast<PFNGLGETMINMAXPROC>(glGetProcAddress("glGetMinmax"));
    glGetMinmaxParameterfv      = reinterpret_cast<PFNGLGETMINMAXPARAMETERFVPROC>(glGetProcAddress("glGetMinmaxParameterfv"));
    glGetMinmaxParameteriv      = reinterpret_cast<PFNGLGETMINMAXPARAMETERIVPROC>(glGetProcAddress("glGetMinmaxParameteriv"));
    glHistogram                 = reinterpret_cast<PFNGLHISTOGRAMPROC>(glGetProcAddress("glHistogram"));
    glMinmax                    = reinterpret_cast<PFNGLMINMAXPROC>(glGetProcAddress("glMinmax"));
    glResetHistogram            = reinterpret_cast<PFNGLRESETHISTOGRAMPROC>(glGetProcAddress("glResetHistogram"));
    glResetMinmax               = reinterpret_cast<PFNGLRESETMINMAXPROC>(glGetProcAddress("glResetMinmax"));
    #endif

    #ifndef GL_VERSION_1_3
    glClientActiveTexture = reinterpret_cast<PFNGLCLIENTACTIVETEXTUREPROC>(glGetProcAddress("glClientActiveTexture"));
    glActiveTexture       = reinterpret_cast<PFNGLACTIVETEXTUREPROC>(glGetProcAddress("glActiveTexture"));
    glMultiTexCoord3dv    = reinterpret_cast<PFNGLMULTITEXCOORD3DVPROC>(glGetProcAddress("glMultiTexCoord3dv"));
    glMultiTexCoord3d     = reinterpret_cast<PFNGLMULTITEXCOORD3DPROC>(glGetProcAddress("glMultiTexCoord3d"));
    glMultiTexCoord3fv    = reinterpret_cast<PFNGLMULTITEXCOORD3FVPROC>(glGetProcAddress("glMultiTexCoord3fv"));
    glMultiTexCoord3f     = reinterpret_cast<PFNGLMULTITEXCOORD3FPROC>(glGetProcAddress("glMultiTexCoord3f"));
    glMultiTexCoord2dv    = reinterpret_cast<PFNGLMULTITEXCOORD2DVPROC>(glGetProcAddress("glMultiTexCoord2dv"));
    glMultiTexCoord2d     = reinterpret_cast<PFNGLMULTITEXCOORD2DPROC>(glGetProcAddress("glMultiTexCoord2d"));
    glMultiTexCoord2f     = reinterpret_cast<PFNGLMULTITEXCOORD2FPROC>(glGetProcAddress("glMultiTexCoord2f"));
    glMultiTexCoord2fv    = reinterpret_cast<PFNGLMULTITEXCOORD2FVPROC>(glGetProcAddress("glMultiTexCoord2fv"));
    glMultiTexCoord1f     = reinterpret_cast<PFNGLMULTITEXCOORD1FPROC>(glGetProcAddress("glMultiTexCoord1f"));
    #endif

    #ifndef GL_VERSION_1_4
    glBlendFuncSeparate = reinterpret_cast<PFNGLBLENDFUNCSEPARATEPROC>(glGetProcAddress("glBlendFuncSeparate"));
    glWindowPos2f       = reinterpret_cast<PFNGLWINDOWPOS2FPROC>(glGetProcAddress("glWindowPos2f"));
    glWindowPos2i       = reinterpret_cast<PFNGLWINDOWPOS2IPROC>(glGetProcAddress("glWindowPos2i"));
    #endif

    #ifndef GL_VERSION_1_5
    glBindBuffer           = reinterpret_cast<PFNGLBINDBUFFERPROC>(glGetProcAddress("glBindBuffer"));
    glDeleteBuffers        = reinterpret_cast<PFNGLDELETEBUFFERSPROC>(glGetProcAddress("glDeleteBuffers"));
    glGenBuffers           = reinterpret_cast<PFNGLGENBUFFERSPROC>(glGetProcAddress("glGenBuffers"));
    glIsBuffer             = reinterpret_cast<PFNGLISBUFFERPROC>(glGetProcAddress("glIsBuffer"));
    glBufferData           = reinterpret_cast<PFNGLBUFFERDATAPROC>(glGetProcAddress("glBufferData"));
    glBufferSubData        = reinterpret_cast<PFNGLBUFFERSUBDATAPROC>(glGetProcAddress("glBufferSubData"));
    glGetBufferSubData     = reinterpret_cast<PFNGLGETBUFFERSUBDATAPROC>(glGetProcAddress("glGetBufferSubData"));
    glMapBuffer            = reinterpret_cast<PFNGLMAPBUFFERPROC>(glGetProcAddress("glMapBuffer"));
    glUnmapBuffer          = reinterpret_cast<PFNGLUNMAPBUFFERPROC>(glGetProcAddress("glUnmapBuffer"));
    glGetBufferParameteriv = reinterpret_cast<PFNGLGETBUFFERPARAMETERIVPROC>(glGetProcAddress("glGetBufferParameteriv"));
    glGetBufferPointerv    = reinterpret_cast<PFNGLGETBUFFERPOINTERVPROC>(glGetProcAddress("glGetBufferPointerv"));
    #endif

    #ifndef GL_VERSION_2_0
    glCreateShader             = reinterpret_cast<PFNGLCREATESHADERPROC>(glGetProcAddress("glCreateShader"));
    glShaderSource             = reinterpret_cast<PFNGLSHADERSOURCEPROC>(glGetProcAddress("glShaderSource"));
    glCompileShader            = reinterpret_cast<PFNGLCOMPILESHADERPROC>(glGetProcAddress("glCompileShader"));
    glGetShaderiv              = reinterpret_cast<PFNGLGETSHADERIVPROC>(glGetProcAddress("glGetShaderiv"));
    glGetShaderInfoLog         = reinterpret_cast<PFNGLGETSHADERINFOLOGPROC>(glGetProcAddress("glGetShaderInfoLog"));
    glDeleteShader             = reinterpret_cast<PFNGLDELETESHADERPROC>(glGetProcAddress("glDeleteShader"));
    glCreateProgram            = reinterpret_cast<PFNGLCREATEPROGRAMPROC>(glGetProcAddress("glCreateProgram"));
    glAttachShader             = reinterpret_cast<PFNGLATTACHSHADERPROC>(glGetProcAddress("glAttachShader"));
    glDetachShader             = reinterpret_cast<PFNGLDETACHSHADERPROC>(glGetProcAddress("glDetachShader"));
    glBindAttribLocation       = reinterpret_cast<PFNGLBINDATTRIBLOCATIONPROC>(glGetProcAddress("glBindAttribLocation"));
    glLinkProgram              = reinterpret_cast<PFNGLLINKPROGRAMPROC>(glGetProcAddress("glLinkProgram"));
    glGetAttachedShaders       = reinterpret_cast<PFNGLGETATTACHEDSHADERSPROC>(glGetProcAddress("glGetAttachedShaders"));
    glGetProgramiv             = reinterpret_cast<PFNGLGETPROGRAMIVPROC>(glGetProcAddress("glGetProgramiv"));
    glGetProgramInfoLog        = reinterpret_cast<PFNGLGETPROGRAMINFOLOGPROC>(glGetProcAddress("glGetProgramInfoLog"));
    glDeleteProgram            = reinterpret_cast<PFNGLDELETEPROGRAMPROC>(glGetProcAddress("glDeleteProgram"));
    glUseProgram               = reinterpret_cast<PFNGLUSEPROGRAMPROC>(glGetProcAddress("glUseProgram"));
    glVertexAttribPointer      = reinterpret_cast<PFNGLVERTEXATTRIBPOINTERPROC>(glGetProcAddress("glVertexAttribPointer"));
    glDisableVertexAttribArray = reinterpret_cast<PFNGLDISABLEVERTEXATTRIBARRAYPROC>(glGetProcAddress("glDisableVertexAttribArray"));
    glEnableVertexAttribArray  = reinterpret_cast<PFNGLENABLEVERTEXATTRIBARRAYPROC>(glGetProcAddress("glEnableVertexAttribArray"));
    glGetAttribLocation        = reinterpret_cast<PFNGLGETATTRIBLOCATIONPROC>(glGetProcAddress("glGetAttribLocation"));
    glGetUniformLocation       = reinterpret_cast<PFNGLGETUNIFORMLOCATIONPROC>(glGetProcAddress("glGetUniformLocation"));
    glUniform1i                = reinterpret_cast<PFNGLUNIFORM1IPROC>(glGetProcAddress("glUniform1i"));
    glUniform1f                = reinterpret_cast<PFNGLUNIFORM1FPROC>(glGetProcAddress("glUniform1f"));
    glUniform2i                = reinterpret_cast<PFNGLUNIFORM2IPROC>(glGetProcAddress("glUniform2i"));
    glUniform2f                = reinterpret_cast<PFNGLUNIFORM2FPROC>(glGetProcAddress("glUniform2f"));
    glUniform3f                = reinterpret_cast<PFNGLUNIFORM3FPROC>(glGetProcAddress("glUniform3f"));
    glUniform3fv               = reinterpret_cast<PFNGLUNIFORM3FVPROC>(glGetProcAddress("glUniform3fv"));
    glUniform4i                = reinterpret_cast<PFNGLUNIFORM4IPROC>(glGetProcAddress("glUniform4i"));
    glUniform4f                = reinterpret_cast<PFNGLUNIFORM4FPROC>(glGetProcAddress("glUniform4f"));
    glUniform4fv               = reinterpret_cast<PFNGLUNIFORM4FVPROC>(glGetProcAddress("glUniform4fv"));
    glUniformMatrix3fv         = reinterpret_cast<PFNGLUNIFORMMATRIX3FVPROC>(glGetProcAddress("glUniformMatrix3fv"));
    glUniformMatrix4fv         = reinterpret_cast<PFNGLUNIFORMMATRIX4FVPROC>(glGetProcAddress("glUniformMatrix4fv"));
    glDrawBuffers              = reinterpret_cast<PFNGLDRAWBUFFERSPROC>(glGetProcAddress("glDrawBuffers"));
    glGenQueries               = reinterpret_cast<PFNGLGENQUERIESPROC>(glGetProcAddress("glGenQueries"));
    glBeginQuery               = reinterpret_cast<PFNGLBEGINQUERYPROC>(glGetProcAddress("glBeginQuery"));
    glEndQuery                 = reinterpret_cast<PFNGLENDQUERYPROC>(glGetProcAddress("glEndQuery"));
    glDeleteQueries            = reinterpret_cast<PFNGLDELETEQUERIESPROC>(glGetProcAddress("glDeleteQueries"));
    glGetQueryObjectuiv        = reinterpret_cast<PFNGLGETQUERYOBJECTUIVPROC>(glGetProcAddress("glGetQueryObjectuiv"));
    #endif

    #ifndef GL_VERSION_3_0
    glGenFramebuffers        = reinterpret_cast<PFNGLGENFRAMEBUFFERSPROC>(glGetProcAddress("glGenFramebuffers"));
    glDeleteFramebuffers     = reinterpret_cast<PFNGLDELETEFRAMEBUFFERSPROC>(glGetProcAddress("glDeleteFramebuffers"));
    glBindFramebuffer        = reinterpret_cast<PFNGLBINDFRAMEBUFFERPROC>(glGetProcAddress("glBindFramebuffer"));
    glFramebufferTexture2D   = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DPROC>(glGetProcAddress("glFramebufferTexture2D"));
    glCheckFramebufferStatus = reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSPROC>(glGetProcAddress("glCheckFramebufferStatus"));
    glBlitFramebuffer        = reinterpret_cast<PFNGLBLITFRAMEBUFFERPROC>(glGetProcAddress("glBlitFramebuffer"));
    #endif

    #ifndef GL_VERSION_3_1
    glDrawArraysInstanced   = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDPROC>(glGetProcAddress("glDrawArraysInstanced"));
    glDrawElementsInstanced = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDPROC>(glGetProcAddress("glDrawElementsInstanced"));
    glTexBuffer             = reinterpret_cast<PFNGLTEXBUFFERPROC>(glGetProcAddress("glTexBuffer"));
    glPrimitiveRestartIndex = reinterpret_cast<PFNGLPRIMITIVERESTARTINDEXPROC>(glGetProcAddress("glPrimitiveRestartIndex"));
    #endif

    #ifndef GL_VERSION_3_3
    glVertexAttribDivisor = reinterpret_cast<PFNGLVERTEXATTRIBDIVISORPROC>(glGetProcAddress("glVertexAttribDivisor"));
    #endif

    #ifndef GL_VERSION_4_0
    glMinSampleShading       = reinterpret_cast<PFNGLMINSAMPLESHADINGPROC>(glGetProcAddress("glMinSampleShading"));
    glBlendEquationi         = reinterpret_cast<PFNGLBLENDEQUATIONIPROC>(glGetProcAddress("glBlendEquationi"));
    glBlendEquationSeparatei = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEIPROC>(glGetProcAddress("glBlendEquationSeparatei"));
    glBlendFunci             = reinterpret_cast<PFNGLBLENDFUNCIPROC>(glGetProcAddress("glBlendFunci"));
    glBlendFuncSeparatei     = reinterpret_cast<PFNGLBLENDFUNCSEPARATEIPROC>(glGetProcAddress("glBlendFuncSeparatei"));
    #endif

    #if defined _WIN32
    //WGL_NV_gpu_affinity
    wglEnumGpusNV               = reinterpret_cast<PFNWGLENUMGPUSNVPROC>(glGetProcAddress("wglEnumGpusNV"));
    wglEnumGpuDevicesNV         = reinterpret_cast<PFNWGLENUMGPUDEVICESNVPROC>(glGetProcAddress("wglEnumGpuDevicesNV"));
    wglCreateAffinityDCNV       = reinterpret_cast<PFNWGLCREATEAFFINITYDCNVPROC>(glGetProcAddress("wglCreateAffinityDCNV"));
    wglEnumGpusFromAffinityDCNV = reinterpret_cast<PFNWGLENUMGPUSFROMAFFINITYDCNVPROC>(glGetProcAddress("wglEnumGpusFromAffinityDCNV"));
    wglDeleteDCNV               = reinterpret_cast<PFNWGLDELETEDCNVPROC>(glGetProcAddress("wglDeleteDCNV"));
    #endif // defined _WIN32

    initialized = glGetError() == GL_NO_ERROR;
    #else
    initialized = true; // glGetProcAddress is not defined, assume the extensions are there and need not to be queried.
    #endif // glGetProcAddress
    #undef glGetProcAddress
}


OPENGLEXT_API bool isGlextSupported(const char extension[])
{
    GLubyte *where, *terminator;

    // Extension names should not have spaces.
    where = (GLubyte*) strchr(extension, ' ');
    if (where || extension[0] == '\0') return false;

    const GLubyte* extensions = glGetString(GL_EXTENSIONS);
    if (!extensions) return false;  //glGetString did not return a string

    // It takes a bit of care to be fool-proof about parsing the
    // OpenGL extensions string. Don't be fooled by sub-strings, etc.
    const GLubyte* start = extensions;
    for (;;)
    {
        where = (GLubyte*)strstr((const char*)start, extension);
        if (!where) return false;
        terminator = where + strlen(extension);
        if ((where == start || *(where - 1) == ' ') && (*terminator == ' ' || *terminator == '\0'))
            return true;
        start = terminator;
    }
}

}  //namespace EglTest
