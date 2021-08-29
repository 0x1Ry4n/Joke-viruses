#include <windows.h>
#include <winuser.h>
#include <ctime>

using namespace std;

typedef struct{
   int x;
   int y;
} Mouse;

typedef struct{
    int freq;
    int dur;
} Sound;

void Beeper(Sound &sound)
{
     sound.dur = 3000;
     sound.freq = rand()%8;
     Beep(sound.freq, sound.dur);
}
void JokeWindow()
{
     MessageBox(0,"Seu computador será desligado em 10 segundos...", "Sinto muito!", MB_ICONWARNING);
}

void CrazyMouse(Mouse &MouseCoord)
{
     MouseCoord.x = rand()%801;
     MouseCoord.y = rand()%601;
     SetCursorPos(MouseCoord.x, MouseCoord.y);
}

int main()
{
    Mouse mouse;
    Sound sound;
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    JokeWindow();
    Beeper(sound);
    while(1)
    {
            CrazyMouse(mouse);
            Sleep(1);
    }
}
