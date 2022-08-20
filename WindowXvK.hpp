#ifndef WINDOW_LIN
#define WINDOW_LIN

#include <X11/Xlib.h>
#include <GL/gl.h>
#include <GL/glx.h>

namespace GLVM::Core
{    

    class CWindowX
    {
        Display* pDisp_;
        Window Win_;
        int iNum_Fbc_ = 0;
        GLXContext (*pGLXCreateContextAttribsARB_) (Display*, GLXFBConfig,
                                                  GLXContext, Bool, const int*) = 0;
        GLXContext Context_;
        XWindowAttributes GWindow_Attributes_;
        Window Root_Window_;
        XSetWindowAttributes Set_Window_Attributes_;
        Colormap Color_Map_;
        XVisualInfo* pVisual_;
        GLXFBConfig* pFbc_;
		GLXDrawable Drawable;
        
        //XWindowAttributes gwa_;
        

    public:
        
        CWindowX();
        ~CWindowX();

        Window GetWindow();
        Display* GetDisplay();
        
        void CursorLock(int _x_position, int _y_position, int* _x_offset, int* _y_offset);
        void SwapBuffers();
        void ClearDisplay();
//        bool HandleEvent(CEvent& _Event);
        void Close();
    };
}
    
#endif


