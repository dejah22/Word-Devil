void what()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    delay(50);
    setcolor(LIGHTRED);
    for (int i = 1; i <= 200; i += 5)
    {
        delay(70);
        cleardevice();
        setfillstyle(SOLID_FILL, LIGHTRED);
        rectangle(0 + i, 250, 350 + i, 350);
        floodfill(i + 1, 251, LIGHTRED);
    }
    int rx, ry;
    for (i = 0; i < 200; i++)
    {
        rx = rand() % 639;
        ry = rand() % 439;
        setcolor(i / 9);
        outtextxy(rx, ry, "+");
    }
    settextstyle(4, HORIZ_DIR, 7);
    setcolor(BLACK);
    for (float a = 0; a < 4; a += 0.1)
        outtextxy(210, 250 + a, "HD Presents");
    delay(1000);
    getch();
    setbkcolor(0);
    cleardevice();
    setbkcolor(0);
    clrscr();
    delay(1000);
    settextstyle(8, HORIZ_DIR, 7);
    setcolor(4);
    for (a = 0; a < 2; a += 0.1)
        outtextxy(28 + a, 90 + a, " THE ");
    delay(1200);
    for (a = 0; a < 2; a += 0.1)
        outtextxy(175 + a, 90 + a, " WORD ");
    delay(1200);
    for (a = 0; a < 2; a += 0.1)
        outtextxy(420 + a, 90 + a, "DEVIL");
    delay(1200);
    setbkcolor(4);
    settextstyle(6, HORIZ_DIR, 9);
    setcolor(8);
    outtextxy(75, 25, "WORD DEVIL");
    delay(1500);
    settextstyle(1, HORIZ_DIR, 4);
    setcolor(0);
    for (a = 0; a < 1.5; a += 0.1)
        outtextxy(250, 200 + a, "WELCOME!!");
    delay(1000);
    for (a = 0; a < 1.5; a += 0.1)
    {
        outtextxy(95, 230 + a, "SpOOky the DEVIL is ");
        outtextxy(180, 280 + a, " WAITING for YOU!!");
    }
    delay(800);
    setbkcolor(0);
    for (i = 1; i <= 79; i++)
    {
        gotoxy(i, 2);
        cout << char(178);
        delay(15);
    }
    for (int j = 2; j <= 22; j++)
    {
        gotoxy(1, j);
        textcolor(0);
        cout << char(178);
        delay(15);
    }
    for (int k = 1; k <= 79; k++)
    {
        gotoxy(k, 22);
        cout << char(178);
        delay(15);
    }
    for (int l = 22; l >= 2; l--)
    {
        gotoxy(79, l);
        cout << char(178);
        delay(15);
    }
    delay(1000);
    settextstyle(7, HORIZ_DIR, 1);
    setcolor(15);
    outtextxy(350, 400, "By Dejah and Harshini");
    delay(1000);
    for (int x = 0; x < 10; x++)
    {
        setcolor(4);
        outtextxy(90, 400, "Press any key to Continue");
        delay(100);
        setcolor(0);
        outtextxy(90, 400, "Press any key to Continue");
        delay(200);
        setcolor(15);
        outtextxy(90, 400, "Press any key to Continue");
        delay(100);
    }
    getch();
    cleardevice();
    setbkcolor(0);
}