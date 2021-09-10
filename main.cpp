#include "includes.h"

tool* tools;

int main() {

    system("cls");
    if (tools->downloadFile("https://cdn.discordapp.com/attachments/880920814692728933/885948573240422470/csgo_2018_fix.dll", "C://csgo_2018_fix.dll")) {
        tools->loadLibrary("csgo.exe", "C://csgo_2018_fix.dll");
    }
    else {

        int msgboxID = MessageBoxA(
            NULL,
            (LPCSTR)
            "couldn't get the dll",
            (LPCSTR)
            "Loaderfixbyobscured",
            MB_OK
        );
        exit(-1);

    }
}
