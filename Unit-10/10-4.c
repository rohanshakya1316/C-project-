// Draw two concentric circle with center (60, 50) and radii 70 and 120.
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd = DETECT, gm;
    int x = 250, y = 150;
    int radius1 = 70;
    int radius2 = 120;
    initgraph(&gd, &gm, "");
    setcolor(RED);
    circle(x, y, radius1);
    setcolor(GREEN);
    circle(x, y, radius2);
    setcolor(WHITE);
    outtextxy(170, 290, "Two Concentric Circle");
    getch();
    closegraph();
}