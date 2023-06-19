#include "ExampleMod.h"
#include "libs/Utilities/MinHook.h"

#include <Windows.h>
#include <string>

extern "C" __declspec(dllexport) void LaunchISZModMenu()
{
    // Get the current directory
    char buffer[MAX_PATH];
    GetCurrentDirectory(MAX_PATH, buffer);

    std::string currentDir(buffer);

    // Path to the ISZ-ModMenu.exe file
    std::string exePath = currentDir + "\\ISZ-ModMenu.exe";

    // Launch the ISZ-ModMenu.exe application
    ShellExecute(NULL, "open", exePath.c_str(), NULL, NULL, SW_SHOWNORMAL);
}
