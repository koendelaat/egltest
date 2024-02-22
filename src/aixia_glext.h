
#pragma once

#if !defined(AIXIA_GLEXT_H__INCLUDED_)
#define AIXIA_GLEXT_H__INCLUDED_


#define GL_GLEXT_PROTOTYPES
#define __glext_h_  //only include our own glext3.h

#include <GL/gl.h>

#include "glext3.h"

namespace EglTest {


#define OPENGLEXT_API  //don't export OpenGL extension api's


    extern OPENGLEXT_API void initGlext();

    extern OPENGLEXT_API bool isGlextInitialized();

    extern OPENGLEXT_API bool isGlextSupported(const char extension[]);


}  //namespace EglTest

#endif // !defined(AIXIA_GLEXT_H__INCLUDED_)
