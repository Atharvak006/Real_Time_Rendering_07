//Resource Compiler for win32 SDK name is rc.exe
// .c -> .exe and .rc -> .res
// Header Files
#include<windows.h>

// For File* gpFile (for file I/O)
#include<stdio.h> 

#include<stdlib.h> // For exit()

// OpenGL related Header Files
#include<gl/GL.h>

// This includes declaration of functions and not their defination.
#include "OGL.h"

// Link With OpenGl library

#pragma comment(lib,"opengl32.lib")

// MACROS

#define WIN_WIDTH 800
#define WIN_HEIGHT 600

LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);

// GLOBAL VARIABLE DECLARATIONS

FILE *gpFile = NULL;

HWND ghwnd = NULL;
HDC ghdc = NULL;
HGLRC ghrc = NULL;
BOOL bFullScreen = FALSE;
DWORD dwStyle;
WINDOWPLACEMENT wpPrev;

BOOL bActiveWindow = FALSE;
BOOL bEscapeKeyIsPressed = FALSE;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{
    // Protype (function declarations)

    int initialize(void);
    void render(void);
    void update(void);
    void Uninitialize(void);

    //Variable Declarations
    WNDCLASSEX wndclass;  // Newly added
    HWND hwnd = NULL;
    MSG msg;
    TCHAR szAppName[] = TEXT("RTR7_ARK");
    BOOL bDone = FALSE;

    // Create Log File
    gpFile = fopen("Log.txt","w");

    if(gpFile == NULL)
    {
        MessageBox(NULL,TEXT("Log Creation Failed"), TEXT("ERROR"), MB_OK);
        exit (0);
    }
    else
    {
        fprintf(gpFile,"Program Started Successfully\n");   
    }

    // Code
    // WNDCLASSEX structure initialization.
    wndclass.cbSize = sizeof(WNDCLASSEX);
    wndclass.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
    wndclass.cbClsExtra = 0;
    wndclass.cbWndExtra = 0;
    wndclass.lpfnWndProc = WndProc;
    wndclass.hInstance = hInstance;
    wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wndclass.hIcon = LoadIcon(hInstance,MAKEINTRESOURCE(MYICON));
    wndclass.hCursor = LoadCursor(NULL,IDC_ARROW);
    wndclass.lpszClassName = szAppName;
    wndclass.lpszMenuName = NULL; 
    wndclass.hIconSm = LoadIcon(hInstance,MAKEINTRESOURCE(MYICON)); 

    // Register Above WNDCLASS
    RegisterClassEx(&wndclass);

    // Centering
    // Count of x Screen(CXSCREEN)
    int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    // Create The window
    hwnd = CreateWindowEx(WS_EX_APPWINDOW,
                        szAppName,
                        TEXT("ATHARVA RAHUL KSHIRSAGAR"), // Name in the caption bar
                        WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN | WS_CLIPSIBLINGS | WS_VISIBLE, // Window style ()
                        screenWidth/2 - WIN_WIDTH/2,
                        screenHeight/2 - WIN_HEIGHT/2,
                        WIN_WIDTH,
                        WIN_HEIGHT,
                        NULL,
                        NULL,
                        hInstance,
                        NULL);

    // Set global Window handle

    ghwnd = hwnd;

    int iResult = initialize();

    if(iResult != 0)
    {
        fprintf(gpFile,"ARK: WinMain: Initialize function failed");
        DestroyWindow(hwnd);
        hwnd = NULL;
    }
    else
    {
        fprintf(gpFile,"ARK: WinMain: Initialize function Succeeded");
    }

    // Show Window
    ShowWindow(hwnd,iCmdShow);

    // Update the window to paint its background.
    UpdateWindow(hwnd);

    SetForegroundWindow(hwnd);
    SetFocus(hwnd);

    // Game loop
    while(bDone == FALSE)
    {
        if(PeekMessage(&msg,NULL,0,0,PM_REMOVE))
        {
            if(msg.message == WM_QUIT)
            {
                bDone = TRUE;
            }
            else
            {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        }
        else
        {
            if(bActiveWindow == TRUE)
            {
                if(bEscapeKeyIsPressed == TRUE)
                {
                    bDone = TRUE;
                }
                //render
                render();

                //update
                update();
            }
        }        
    }

    // unintitialize;

    Uninitialize();
    
    return ((int)msg.wParam);

}

LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
    // Function declarations
    void resize(int,int);
    void Uninitialize(void);
    void ToggleFullScreen(void);

    // Code
    switch(iMsg)
    {
        case WM_CREATE:
            memset(&wpPrev,0,sizeof(WINDOWPLACEMENT));
            wpPrev.length = sizeof(WINDOWPLACEMENT);
            break;

        case WM_SETFOCUS:
            bActiveWindow = TRUE;
            break;
            
        case WM_KILLFOCUS:
            bActiveWindow = FALSE;
            break;
            
        case WM_SIZE:
            resize(LOWORD(lParam), HIWORD(lParam));
            break;

        case WM_KEYDOWN:
            switch(wParam)
            {
                case VK_ESCAPE:
                    bEscapeKeyIsPressed = TRUE;
                    break;
                
                default:
                    break;
            }
            break;

        case WM_CHAR:
            switch(wParam)
            {
                case 'F':
                case 'f':
                    // Optimised way:
                    // ToggleFullScreen();
                    // bFullScreen = !bFullScreen;

                    // Our Way.
                    if(bFullScreen == FALSE)
                    {
                        ToggleFullScreen();
                        bFullScreen = TRUE;
                    }   
                    else 
                    {
                        ToggleFullScreen();
                        bFullScreen = FALSE;
                    }

                default:
                    break;
            }
            break;

        case WM_CLOSE:
            Uninitialize();
            break;

        case WM_DESTROY:
            PostQuitMessage(100);
            break;

        default:
            break;
    }

    return (DefWindowProc(hwnd,iMsg,wParam,lParam));
}


void ToggleFullScreen(void)
{
    // Variable Declarations
    MONITORINFO mi;

    // code
    if(bFullScreen == FALSE)
    {
        dwStyle = GetWindowLong(ghwnd, GWL_STYLE);

        if(dwStyle & WS_OVERLAPPEDWINDOW)
        {
            memset(&mi,0,sizeof(MONITORINFO));
            mi.cbSize = sizeof(MONITORINFO);

            if(GetWindowPlacement(ghwnd,&wpPrev) && GetMonitorInfo(MonitorFromWindow(ghwnd,MONITORINFOF_PRIMARY), &mi))
            {
                SetWindowLong(ghwnd,GWL_STYLE, dwStyle & ~WS_OVERLAPPEDWINDOW);
                SetWindowPos(ghwnd,HWND_TOP, mi.rcMonitor.left, mi.rcMonitor.top, mi.rcMonitor.right - mi.rcMonitor.left, mi.rcMonitor.bottom - mi.rcMonitor.top, SWP_NOZORDER | SWP_FRAMECHANGED);
            }
        }

        ShowCursor(FALSE);
    }

    else
    {
        SetWindowLong(ghwnd,GWL_STYLE, dwStyle | WS_OVERLAPPEDWINDOW);
        SetWindowPlacement(ghwnd, &wpPrev);
        SetWindowPos(ghwnd, HWND_TOP, 0,0,0,0,SWP_NOMOVE | SWP_NOSIZE | SWP_NOOWNERZORDER | SWP_NOZORDER | SWP_FRAMECHANGED);
        ShowCursor(TRUE);
    }
}

int initialize(void)
{
    //Function declarations;
    void resize(int ,int);

    // variable declarations;
    PIXELFORMATDESCRIPTOR pfd;
    int iPixelFormatIndex;

    // In win32 similar to memset there is another function as:
    //    ZeroMemory(void *, size_t);

    //code
    memset(&pfd,0,sizeof(PIXELFORMATDESCRIPTOR));
    
    pfd.nSize = sizeof(PIXELFORMATDESCRIPTOR);
    pfd.nVersion = 1; // Convention
    pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cRedBits = 8;
    pfd.cGreenBits = 8;
    pfd.cBlueBits = 8;
    pfd.cAlphaBits = 0;

    ghdc = GetDC(ghwnd);

    if(ghdc == NULL)
    {
        return -1;
    }

    iPixelFormatIndex = ChoosePixelFormat(ghdc,&pfd); // Index is 1 based not 0 based

    if(iPixelFormatIndex == 0)
    {
        return -2;
    }

    if(SetPixelFormat(ghdc,iPixelFormatIndex,&pfd) == FALSE)
    {
        return -3;
    }

    ghrc = wglCreateContext(ghdc);

    if(ghrc == NULL)
    {
        return -4;
    }

    if(wglMakeCurrent(ghdc,ghrc) == FALSE)
    {
        return -5;
    }

    // Choose screen clearing color as blues
    glClearColor(0.0f,0.0f,0.0f,1.0f);

    // Warm Up Resize;
    resize(WIN_WIDTH,WIN_HEIGHT);

    return 0;
}

void resize(int Width, int Height)
{
    //code
    if (Height <= 0)
        Height = 1;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glViewport(0, 0, (GLsizei)Width, (GLsizei)Height);

}

void render(void)
{
    //code                       
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);

	glEnd();

    // Do double buffering
    SwapBuffers(ghdc);
}

void update(void)
{
    //code
}

void Uninitialize(void)
{
    //code

    // If exitingfrom full screen first restore;

    if(bFullScreen == TRUE)
    {
        ToggleFullScreen();
        bFullScreen = FALSE;
    }

    // first check the current context and if it then unmake it

    if(wglGetCurrentContext() == ghrc)
    {
        wglMakeCurrent(NULL,NULL);
    }

    // Now destroy the rendering context
    if(ghrc)
    {
        wglDeleteContext(ghrc);
        ghrc = NULL;
    }

    // Destroy/Release the device context

    if(ghdc)
    {
        ReleaseDC(ghwnd,ghdc);
        ghwnd = NULL;
    }
    
    //Destroy Window

    if(ghwnd)
    {
        DestroyWindow(ghwnd);
        ghwnd = NULL;
    }

    // Close Log File
    if(gpFile)
    {
        fprintf(gpFile,"Program Terminated Successfully\n");
        fclose(gpFile);
        gpFile = NULL;
    } 
}