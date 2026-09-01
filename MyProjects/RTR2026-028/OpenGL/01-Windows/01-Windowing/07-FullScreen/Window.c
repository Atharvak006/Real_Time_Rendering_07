//Resource Compiler for win32 SDK name is rc.exe
// .c -> .exe and .rc -> .res
// Header Files
#include<windows.h>
// This includes declaration of functions and not their defination.
#include "Window.h"

// MACROS

#define WIN_WIDTH 800
#define WIN_HEIGHT 600

LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);

// GLOBAL VARIABLE DECLARATIONS

HWND ghwnd = NULL;
BOOL bFullScreen = FALSE;
DWORD dwStyle;
WINDOWPLACEMENT wpPrev;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{
    //                  Current Instance.    NULL
    //Variable Declarations
    WNDCLASSEX wndclass;  // Newly added
    HWND hwnd = NULL;
    MSG msg;
    TCHAR szAppName[] = TEXT("RTR7_ARK");

    // Code
    // WNDCLASSEX structure initialization.
    wndclass.cbSize = sizeof(WNDCLASSEX);
    wndclass.style = CS_HREDRAW | CS_VREDRAW;
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

    // Show Window
    ShowWindow(hwnd,iCmdShow);

    // Update the window to paint its background.
    UpdateWindow(hwnd);

    // Message loop
    while(GetMessage(&msg,NULL,0,0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return ((int)msg.wParam);

}

LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
    // Function declarations
    void ToggleFullScreen(void);

    // Code
    switch(iMsg)
    {
        case WM_CREATE:
            memset(&wpPrev,0,sizeof(WINDOWPLACEMENT));
            wpPrev.length = sizeof(WINDOWPLACEMENT);
            break;

        case WM_SETFOCUS:
            break;
            
        case WM_KILLFOCUS:
            break;
            
        case WM_SIZE:
            break;

        case WM_KEYDOWN:
            switch(wParam)
            {
                case VK_ESCAPE:
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