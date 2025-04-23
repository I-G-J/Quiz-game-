#include <windows.h>
#include <iostream>

// Global variables
HWND hButtonStart, hButtonExit;
HINSTANCE hInst;

// Window Procedure
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_CREATE:
            // Create "Start" button
            hButtonStart = CreateWindow(
                "BUTTON", "Start", 
                WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
                50, 100, 100, 50, hwnd, (HMENU)1, hInst, NULL);

            // Create "Exit" button
            hButtonExit = CreateWindow(
                "BUTTON", "Exit", 
                WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
                200, 100, 100, 50, hwnd, (HMENU)2, hInst, NULL);
            break;

        case WM_COMMAND:
            if (LOWORD(wParam) == 1) {
                MessageBox(hwnd, "You clicked 'Start'.", "Start", MB_OK);
            } else if (LOWORD(wParam) == 2) {
                PostQuitMessage(0);  // Exit the program
            }
            break;

        case WM_DESTROY:
            PostQuitMessage(0);
            break;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

int main() {
    // Register the window class
    WNDCLASS wc = {0};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = "MainWindowClass";
    wc.hbrBackground = CreateSolidBrush(RGB(0, 0, 255)); // Blue background

    if (!RegisterClass(&wc)) {
        std::cerr << "Window class registration failed!" << std::endl;
        return 1;
    }

    // Create the window
    HWND hwnd = CreateWindowEx(
        0, "MainWindowClass", "Start & Exit Menu",
        WS_OVERLAPPEDWINDOW | WS_VISIBLE,
        100, 100, 400, 300, NULL, NULL, hInst, NULL
    );

    if (!hwnd) {
        std::cerr << "Window creation failed!" << std::endl;
        return 1;
    }

    // Message loop
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
