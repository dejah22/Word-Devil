void load()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    int x = 317, y = 236;
    int v1 = 0, v2 = 0, v3 = 0, num = 0, n = 0;
    while (1)
    {
        cleardevice();
        gotoxy(40, 5);
        settextstyle(7, HORIZ_DIR, 5);
        outtextxy(240, 40, "LOADING");
        setlinestyle(0, 0, 3);
        setcolor(RED);
        arc(x, y, 270 + v2, 90 + v2, 40);
        setcolor(LIGHTRED);
        arc(x, y, 320 - v2, 120 - v2, 70);
        arc(x, y, 320 - v2, 120 - v2, 72);
        setcolor(CYAN);
        arc(x, y, 300 + v1, 160 + v1, 92);
        setcolor(BLUE);
        arc(x, y, 300 - v1, 40 - v1, 111);
        setcolor(LIGHTRED);
        arc(x, y, 300 + v3, 140 + v3, 131);
        arc(x, y, 300 + v3, 140 + v3, 133);
        if (num >= 70)
        {
            num += 0;
            delay(500);
            cleardevice();
            getch();
            break;
        }
        v1 += 4 + rand() % 8;
        v2 += 6 + rand() % 8;
        v3 += 3 + rand() % 8;
        randomize();
        num = num + n;
        n = rand() % 2;
        delay(30);
    }
}