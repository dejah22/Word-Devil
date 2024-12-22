void dev()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    for (int i = -350; i <= 300; i += 5)
    {
        delay(20);
        cleardevice();
        setcolor(15);
        setfillstyle(SOLID_FILL, 4);
        circle(270 + i, 210, 60);
        floodfill(270 + i, 215, 15);
        setfillstyle(SOLID_FILL, BLUE);
        ellipse(300 + i, 200, 0, 360, 5, 10);
        floodfill(300 + i, 205, 15);
        setfillstyle(SOLID_FILL, BLUE);
        ellipse(240 + i, 200, 0, 360, 5, 10);
        floodfill(240 + i, 200, 15);
        arc(270 + i, 170, 180, 0, 30);
        arc(270 + i, 220, 180, 0, 35);
    }
    settextstyle(1, HORIZ_DIR, 4);
    setcolor(WHITE);
    outtextxy(45, 90, "It's ME! SpOOky the DEVIL!!");
    delay(900);
}