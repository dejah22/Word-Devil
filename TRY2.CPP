#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <process.h>
#include <stdlib.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    int rx, ry;
    int h = 0;

    while (h++ < 30)
    {
        for (int i = 0; i < 350; i++)
        {
            rx = rand() % 639;
            ry = rand() % 439;
            setcolor(i / 9);
            rectangle(rx - 10, ry + 10, rx, ry);
        }
        delay(100);

        cleardevice();
    }

    getch();
}