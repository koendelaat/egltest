
#pragma once
#if !defined(WINOPENGLBASE_H__INCLUDED_)
#define WINOPENGLBASE_H__INCLUDED_

#include "aixia_glext.h"
#include <EGL/egl.h>
#include <EGL/eglext.h>

#include <iostream>

namespace EglTest {
    class WinOpenGLBase {
    public:
        WinOpenGLBase();

        WinOpenGLBase(WinOpenGLBase &&other) noexcept;

        virtual ~WinOpenGLBase();

        WinOpenGLBase(const WinOpenGLBase &) = delete;  //prevents use of the copy constructor
        const WinOpenGLBase &operator=(const WinOpenGLBase &) = delete;  //prevents use of the = operator

        static bool GetAvailableVideoMemory(int &availableVideoMemory);

        static void InitGLExt();

        static EGLContext GetCurrentContext();

        EGLContext Init();

        void Free();

        bool IsInit() const { return m_hGLContext != nullptr; }

        bool IsCurrent() const;

        void MakeCurrent();

        void ReleaseCurrent();

        EGLContext GetRenderContext() const { return m_hGLContext; }

        static bool areRequiredGlExtensionsSupported();

    private:
        EGLContext m_hGLContext;
        EGLDisplay m_hDisplay;
        EGLSurface m_Surface;
        void *m_hDrawable;
    };

}  //namespace EglTest
#endif  //!defined(WINOPENGLBASE_H__INCLUDED_)

