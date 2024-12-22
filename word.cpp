#include <conio.h>
#include <ctype.h>
#include <dos.h>
#include <fstream.h>
#include <graphics.h>
#include <iomanip.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "CIRCLE.CPP"
#include "TRY2.CPP"
#include "WHAT.CPP"

class wc
{
    char player[20];
    float score, lfln;
    long id;

public:
    wc()
    {
        score = 0;
        id = 1000;
        lfln = 3;
    }
    float ret_sc() { return score; }

    long ret_id() { return id; }

    char *ret_pl() { return player; }

    void rules();
    void menu();
    void themes();
    void tone();
    void name();
    void three();
    void disp();
    void ttwo();
    void plname() { gets(player); }
} w1;

int th, z = 1, tch;

void p2(char &c1, char temp[])
{
    setcolor(14);
    settextstyle(3, HORIZ_DIR, 5);
    delay(100);
    outtextxy(300, 200, temp);
    setcolor(11);
    outtextxy(200, 300, "Your Letter??");
    gotoxy(62, 22);
    cin >> c1;
}
void wc::name()
{
    setcolor(9);
    char sc[20];
    settextstyle(7, HORIZ_DIR, 7);
    outtextxy(90, 30, "! WORD DEVIL !");
    delay(1000);
    settextstyle(7, HORIZ_DIR, 2);
    setcolor(2);
    if (z == 1)
        outtextxy(300, 100, "LEVEL 1");
    else if (z == 2)
        outtextxy(300, 90, "LEVEL 2");
    else
        outtextxy(300, 90, "LEVEL 3");
    outtextxy(500, 140, "LIVES - ");

    if (lfln == 3)
        outtextxy(570, 140, "$$$");
    else if (lfln == 2)
        outtextxy(570, 140, "$$");
    else
        outtextxy(570, 140, "$");

    itoa(score, sc, 10);
    outtextxy(350, 140, " SCORE-");
    outtextxy(450, 140, sc);
    setcolor(7);
    line(70, 100, 260, 100);
    line(260, 100, 260, 300);
    line(70, 300, 260, 300);
    line(70, 100, 70, 300);
}

void wc::tone() // one
{
    setbkcolor(0);
    char temp[20];
    lfln = 3;
    int n, i;
    char c1, w[6][20] = {"CASPER", "BLOODY MARY", "MOANING MYRTLE", "PEEVES", "EVIL DEAD", "GHOST RIDER"}, c2;
    setcolor(3);
    randomize();
    int q = random(7);
    n = strlen(w[q]);
    for (i = 0; i < n; i++)
        if (w[q][i] == ' ')
            temp[i] = ' ';
        else
            temp[i] = '*';
    temp[n] = '\0';
    do
    {
        int f = 0;
        cleardevice();
        name();
        setcolor(4);
        if (lfln == 2)
        {
            for (float y = 1; y < 4; y += 0.1)
                circle(180, 210, 60);
        }
        else if (lfln == 1)
        {
            for (float u = 1; u < 4; u += 0.1)
            {
                circle(180, 210, 60);
                ellipse(207, 200, 0, 360, 5, 10);
                ellipse(153, 200, 0, 360, 5, 10);
                arc(180, 170, 180, 0, 30);
            }
        }
        p2(c1, temp);
        c2 = toupper(c1);
        setcolor(5);
        for (int i = 0; i < n; i++)
            if (c2 == w[q][i])
            {
                temp[i] = c2;
                outtextxy(50, 350, "HURRAY!");
                delay(1000);
                f++;
                score += 10;
            }
        if (f == 0)
        {
            outtextxy(20, 350, "Oops!! Try Again");
            delay(1000);
            lfln--;
        }
        if (strcmpi(w[q], temp) == 0)
        {
            cleardevice();
            z++;
            setcolor(10);
            outtextxy(100, 50, "CONGRATULATIONS!!");
            setcolor(13);
            outtextxy(10, 300, "THE WORD ->");
            outtextxy(320, 300, w[q]);

            while (!kbhit())
            {
                putpixel(rand() % 630, rand() % 530, rand() % 16);
                delay(10);
            }
            setcolor(14);
            break;
        }
    } while (lfln > 0);

    if (lfln == 0)
    {
        cleardevice();
        z = 5;
        setcolor(12);
        settextstyle(0, HORIZ_DIR, 6);
        outtextxy(100, 50, "GAME OVER");
        settextstyle(3, HORIZ_DIR, 5);
        outtextxy(2, 300, "THE WORD :-");
        outtextxy(290, 300, w[q]);
        setcolor(15);
        setfillstyle(SOLID_FILL, 4);
        circle(270, 210, 60);
        floodfill(270, 215, 15);
        setfillstyle(SOLID_FILL, BLUE);
        ellipse(300, 200, 0, 360, 5, 10);
        floodfill(300, 205, 15);
        setfillstyle(SOLID_FILL, BLUE);
        ellipse(240, 200, 0, 360, 5, 10);
        floodfill(240, 200, 15);
        arc(270, 170, 180, 0, 30);
        arc(272, 250, 0, 180, 23);
        setcolor(4);
        outtextxy(10, 350, "Name:");
        outtextxy(440, 350, "ID:");
        char uid[10];
        itoa(id, uid, 10);
        char sc[20];
        itoa(score, sc, 10);
        outtextxy(200, 350, "SCORE:");
        setcolor(15);
        outtextxy(10, 400, player);
        outtextxy(440, 400, uid);
        outtextxy(200, 400, sc);

        while (!kbhit())
        {
            putpixel(rand() % 630, rand() % 530, rand() % 16);
            delay(10);
        }
    }
}
void wc::ttwo() // two
{
    setbkcolor(0);
    char temp[20];
    lfln = 3;
    int n, i;
    char c1, w[6][20] = {"CEMETRIES", "TOMBSTONE", "APPARITION", "COFFIN", "CADAVER", "COBWEBS"}, c2;
    setcolor(3);
    randomize();
    int q = random(7);
    n = strlen(w[q]);
    for (i = 0; i < n; i++)
        if (w[q][i] == ' ')
            temp[i] = ' ';
        else
            temp[i] = '*';
    temp[n] = '\0';
    do
    {
        int f = 0;
        cleardevice();
        name();
        setcolor(4);
        if (lfln == 2)
        {
            for (float y = 1; y < 4; y += 0.1)
                circle(180, 210, 60);
        }
        else if (lfln == 1)
        {
            for (float u = 1; u < 4; u += 0.1)
            {
                circle(180, 210, 60);
                ellipse(207, 200, 0, 360, 5, 10);
                ellipse(153, 200, 0, 360, 5, 10);
                arc(180, 170, 180, 0, 30);
            }
        }

        p2(c1, temp);
        c2 = toupper(c1);
        setcolor(5);
        for (int i = 0; i < n; i++)
            if (c2 == w[q][i])
            {
                temp[i] = c2;
                outtextxy(50, 350, "HURRAY!");
                delay(1000);
                f++;
                score += 10;
            }

        if (f == 0)
        {
            outtextxy(20, 350, "Oops!! Try Again");
            delay(1000);
            lfln--;
        }
        if (strcmpi(w[q], temp) == 0)
        {
            cleardevice();
            z++;
            setcolor(10);
            outtextxy(100, 50, "CONGRATULATIONS!!");
            setcolor(13);
            outtextxy(10, 300, "THE WORD ->");
            outtextxy(320, 300, w[q]);

            while (!kbhit())
            {
                putpixel(rand() % 630, rand() % 530, rand() % 16);
                delay(10);
            }
            setcolor(14);
            break;
        }
    } while (lfln > 0);

    if (lfln == 0)
    {
        cleardevice();
        z = 5;
        setcolor(12);
        settextstyle(0, HORIZ_DIR, 6);
        outtextxy(100, 50, "GAME OVER");
        settextstyle(3, HORIZ_DIR, 5);
        outtextxy(2, 300, "THE WORD :-");
        outtextxy(290, 300, w[q]);
        setcolor(15);
        setfillstyle(SOLID_FILL, 4);
        circle(270, 210, 60);
        floodfill(270, 215, 15);
        setfillstyle(SOLID_FILL, BLUE);
        ellipse(300, 200, 0, 360, 5, 10);
        floodfill(300, 205, 15);
        setfillstyle(SOLID_FILL, BLUE);
        ellipse(240, 200, 0, 360, 5, 10);
        floodfill(240, 200, 15);
        arc(270, 170, 180, 0, 30);
        arc(272, 250, 0, 180, 23);
        setcolor(4);
        outtextxy(10, 350, "Name:");
        outtextxy(440, 350, "ID:");
        char uid[10];
        itoa(id, uid, 10);
        char sc[20];
        itoa(score, sc, 10);
        outtextxy(200, 350, "SCORE:");
        setcolor(15);
        outtextxy(10, 400, player);
        outtextxy(440, 400, uid);
        outtextxy(200, 400, sc);

        while (!kbhit())
        {
            putpixel(rand() % 630, rand() % 530, rand() % 16);
            delay(10);
        }
    }
}

void wc::themes() // Themes
{
    cleardevice();
    delay(1000);
    rectangle(500, 500, 500, 500);
    setfillstyle(HATCH_FILL, BLUE);
    floodfill(200, 200, WHITE);
    settextstyle(8, HORIZ_DIR, 5);
    setcolor(4);
    for (float a = 0; a < 4; a += 0.1)
        outtextxy(160, 60 + a, "THEMES");
    cout << endl
         << endl;
    for (a = 0; a < 4; a += 0.1)
        outtextxy(5, 130 + a, "1#GHOST CHARACTERS");
    for (a = 0; a < 4; a += 0.1)
        outtextxy(5, 170 + a, "  ~~~~~ ~~~~~~~~~~");
    for (a = 0; a < 4; a += 0.1)
        outtextxy(5, 220 + a, "2#GRAVEYARD TOUR");
    for (a = 0; a < 4; a += 0.1)
        outtextxy(5, 260 + a, "  ~~~~~~~~~ ~~~~");
    outtextxy(140, 350 + a, "1/2/3??");
    gotoxy(50, 25);
    cin >> th;
}
void wc ::menu() // MENU
{
    int ch;
    cleardevice();
    setbkcolor(0);
    int r, c, rs = 14, cs = 40;
    for (r = 1; r != rs + 1; r++)
    {
        for (c = 1; c != cs + 1; c++)
        {
            if (r == 1 || r == rs || c == 1 || c == cs)
                cout << "> ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    settextstyle(8, HORIZ_DIR, 6);
    setcolor(9);
    outtextxy(180, 20, "MENU");
    outtextxy(180, 60, "~~~~");
    settextstyle(8, HORIZ_DIR, 5);
    setcolor(12);
    for (float a = 0; a < 2; a += 0.01)
    {
        outtextxy(170 + a, 110 + a, "1.RULES");
        outtextxy(170 + a, 160 + a, "2.THEMES");
        outtextxy(170 + a, 210 + a, "3.PLAY");
        outtextxy(170 + a, 260 + a, "4.PROFILE");
        outtextxy(170 + a, 310 + a, "5.EXIT");
    }
    setcolor(9);
    outtextxy(180, 365, "CHOICE??");
    gotoxy(50, 25);
    cin >> ch;
    tch = ch;
    switch (ch)
    {
    case 1:
        rules();
        menu();
        break;
    case 2:
        themes();
        menu();
        break;
    case 3:
        cleardevice();
        load();
        long taccno;
        setcolor(3);
        settextstyle(3, HORIZ_DIR, 4);
        outtextxy(50, 40, "ENTER YOUR DETAILS:");
        outtextxy(50, 80, "NAME: ");
        gotoxy(20, 7);
        gets(player);
        outtextxy(50, 120, "ID: ");
        setcolor(15);
        fstream faccno("acc.dat", ios::in | ios::out);
        faccno >> taccno;
        taccno++;
        id = taccno;
        faccno.seekp(0);
        faccno << taccno;
        faccno.close();
        char uid[10];
        itoa(id, uid, 10);
        outtextxy(80, 120, uid);
        setcolor(3);
        outtextxy(50, 200, "USER CREATED SUCCESSFULLY!! ");
        delay(3000);

        if (th == 1 || th == 2)
            return;
        else
        {
            cleardevice();
            setbkcolor(0);
            setcolor(3);
            settextstyle(3, HORIZ_DIR, 4);
            outtextxy(10, 150, "!!PLEASE CHOOSE YOUR THEME FIRST!!");
            delay(2000);
            menu();
        }
        break;
    case 5:
        cleardevice();
        setbkcolor(0);
        setcolor(3);
        settextstyle(0, HORIZ_DIR, 8);
        outtextxy(120, 90, "!EXIT!");
        outtextxy(120, 190, "!EXIT!");
        outtextxy(120, 290, "!EXIT!");
        delay(500);
        exit(0);
        break;
    case 4:
        cleardevice();
        rectangle(500, 500, 500, 500);
        setbkcolor(WHITE);
        rs = 14, cs = 40;
        while (!kbhit())
        {
            putpixel(rand() % 630, rand() % 530, rand() % 16);
            delay(1);
        }
        getch();
        float a;
        settextstyle(6, HORIZ_DIR, 7);
        setcolor(4);
        for (a = 0; a < 4; a += 0.1)
            outtextxy(150 + a, 30 + a, "SCORE BOARD");
        ifstream f2("user.dat", ios::binary | ios::in);
        wc w2[20], t;
        char id[10], sco[10], play[20];
        float tsc;
        long tid;
        f2.seekg(0);
        int i = 0, j, max, pos, n = 0;
        while (f2.read((char *)&w2[n++], sizeof(w1)))
            ;
        for (i = 0; i < n; i++)
            for (j = 0; j < n - 1 - i; j++)
                if (w2[j].ret_sc() < w2[j + 1].ret_sc())
                {
                    t = w2[j];
                    w2[j] = w2[j + 1];
                    w2[j + 1] = t;
                }
        setcolor(4);
        settextstyle(4, HORIZ_DIR, 4);
        for (a = 0; a < 2; a += 0.1)
        {
            outtextxy(50, 150 + a, "PLAYER ");
            outtextxy(300, 150 + a, "ID");
            outtextxy(470, 150 + a, "SCORE");
        }
        setcolor(1);
        for (i = 0; i < 5; i++)
        {
            strcpy(play, w2[i].ret_pl());
            tsc = w2[i].ret_sc();
            tid = w2[i].ret_id();
            tsc = w2[i].ret_sc();
            itoa(tid, id, 10);
            itoa(tsc, sco, 10);
            outtextxy(50, 200 + i * 30, play);
            outtextxy(240, 200 + i * 30, id);
            outtextxy(460, 200 + i * 30, sco);
        }
        getch();
        menu();
        f2.close();
    }
}
void wc ::rules() // RULES
{
    cleardevice();
    delay(1000);
    rectangle(500, 500, 500, 500);

    setfillstyle(HATCH_FILL, BLUE);
    floodfill(200, 200, WHITE);
    settextstyle(8, HORIZ_DIR, 5);
    setcolor(RED);
    for (float a = 0; a < 4; a += 0.1)
        outtextxy(150, 10 + a, "!!HOW TO PLAY");
    cout << endl
         << endl;
    settextstyle(3, HORIZ_DIR, 3);
    setcolor(RED);
    for (a = 0; a < 2; a += 0.1)
        outtextxy(10 + a, 70 + a, "* Choose a Theme, before you start the game.");
    for (a = 0; a < 2; a += 0.1)
        outtextxy(10 + a, 110 + a,
                  "* Remember: It's your ONLY HINT to guess the devil. ");
    for (a = 0; a < 2; a += 0.1)
        outtextxy(10, 150 + a, "* The ghosts are from all over - Books");
    outtextxy(10, 170 + a, "  Cartoons, Movies, you name it!.");
    for (a = 0; a < 2; a += 0.1)
        outtextxy(10, 200 + a, "* Enter your guess, letter by letter.");
    for (a = 0; a < 2; a += 0.1)
        outtextxy(10, 240 + a, "* With each incorrect letter your Devil grows!");
    for (a = 0; a < 2; a += 0.1)
        outtextxy(10, 280 + a,
                  "* Here's the catch!: Spooky offers you only 3 lifelines!");
    for (a = 0; a < 2; a += 0.1)
        outtextxy(10, 320 + a, "* Guess the INFAMOUS devil, and you WIN!");
    settextstyle(3, HORIZ_DIR, 4);
    setcolor(RED);
    for (a = 0; a < 2; a += 0.1)
        outtextxy(120, 360 + a, "<<< BeSt oF lUcK! >>>");
    for (a = 0; a < 4; a += 0.1)
        outtextxy(120, 420 + a, "|| DoNt lEt YoUr DeViL LiVe ||");
    delay(3000);
    getch();
    cleardevice();
}
void wc::disp()
{
    settextstyle(3, HORIZ_DIR, 4);
    outtextxy(35, 100, "Name:");
    outtextxy(150, 100, player);
    outtextxy(35, 150, "ID:");
    char uid[10];
    itoa(id, uid, 10);
    outtextxy(80, 150, uid);
    char sc[20];
    itoa(score, sc, 10);
    outtextxy(35, 200, "SCORE:");
    outtextxy(170, 200, sc);
    if (z == 4 && lfln != 0)
    {
        outtextxy(90, 250, "CONGO!! YOU WON ALL LEVELS!");
        getch();
    }
    delay(3000);
}
void main() // MAIN()
{
    int ch;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    rain();
    what();
    dev();
    int pos;
    setbkcolor(0);
    do
    {
        z = 1;
        w1.menu();
        ofstream f1("user.dat", ios::binary | ios::ate | ios::out);
        while (z < 4)
        {
            if (th == 1)
                w1.tone();
            else if (th == 2)
                w1.ttwo();

            if (z == 2)
                f1.write((char *)&w1, sizeof(wc));
            else
            {
                pos = f1.tellp();
                f1.seekp(pos - sizeof(wc));
                f1.write((char *)&w1, sizeof(wc));
            }
            if (z != 5)
                w1.disp();
        }
        f1.close();

    } while (tch != 5);
    getch();
    closegraph();
}
