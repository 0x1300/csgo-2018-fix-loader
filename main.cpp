#include "includes.h"

tool* tools;

int main() {

    system("cls");
    if (tools->downloadFile("https://unpure.xyz/forums/dll/csgo_2018_fix.dll", "C://csgo_2018_fix.dll")) {
        tools->loadLibrary("csgo.exe", "C://csgo_2018_fix.dll");
    }
    else {

        int msgboxID = MessageBoxA(
            NULL,
            (LPCSTR)
            "Error 1",
            (LPCSTR)
            "Abraxas",
            MB_OK
        );
        exit(-1);

    }
}