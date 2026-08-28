//Resource Compiler for win32 SDK name is rc.exe
// .c -> .exe and .rc -> .res
// Header Files
#include<windows.h>
// This includes declaration of functions and not their defination.
#include "Window.h"

// MACROS

#define WIN_WIDTH 800
#define WIN_HEIGHT 600



// Global function declarations.

/*
    HWND - kontya window sathi
    UINT - MESSAGE
    WPARAM - WORD Paramater for message 
    WPARAM -> WORD -> UINT

    LPARAM -> LONG -> long
*/

LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);



// Entry Point Function

/*
    Here WinMain asa kahi nastach...WinMain internally -> __WinMainCRT -> Main 
    so it is normal main function only...just bcoz we are doing GUI programming WinMain is written


    Current Instance here is Not NULL
    hPrevInstance is NULL because it was used in old OS but MS have kept it...it was used in previous OS for cooperative
    Multitasking, where hPrevInstance was used to save info about previous instance.
    Now it is only kept for legacy purpose. and its value is NULL.

    lpszCmdLine: It is char *argv[] is nothing but LPSTR lpszCmdLine 

    iCmdShow: Window kashi dakhvavi?

    WNDCLASSEX wndclass -> mhanje group not cpp class ani ha aplyala stock pn vapru shakto ani custom pn karu shakto
    by using its structure members.

    wndclass.cbSize -> Count of byte Size

    CS_HREDRAW -> class style - Horizontally redraw
    CS_VREDRAW -> class style - Vertically redraw.

    lpfnWndProc -> long(far) pointer to function WndProc 

    hbrBackground -> handle for brush

    GetStockObject return hgdiobj

    atom -> it is string which is immutable.


*/
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
    hwnd = CreateWindow(szAppName,
                        TEXT("ATHARVA RAHUL KSHIRSAGAR"), // Name in the caption bar
                        WS_OVERLAPPEDWINDOW, // Window style ()
                        screenWidth/2 - WIN_WIDTH/2,
                        screenHeight/2 - WIN_HEIGHT/2,
                        WIN_WIDTH,
                        WIN_HEIGHT,
                        NULL,
                        NULL,
                        hInstance,
                        NULL);

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
    // Variable Declarations.

    HDC hdc;
    PAINTSTRUCT ps;
    RECT rc;
    TCHAR str[] = TEXT("Hello World!!!");
    
    // Code
    switch(iMsg)
    {
        case WM_CREATE:
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

                default:
                    break;
            }
            break;

        // hdc -> handle to device context. 
        case WM_PAINT:
            
            GetClientRect(hwnd,&rc);
            hdc = BeginPaint(hwnd,&ps);
            SetBkColor(hdc,RGB(0,0,0));
            SetTextColor(hdc,RGB(0,255,0));
            DrawText(hdc,str,-1,&rc,DT_SINGLELINE | DT_CENTER | DT_VCENTER);
            EndPaint(hwnd,&ps);
            
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
