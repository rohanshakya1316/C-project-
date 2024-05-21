// Draw a rectangle using graphic function.
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd = DETECT, gm;
    int left = 100, top = 100, right = 500, bottom = 200;
    initgraph(&gd, &gm, "");
    rectangle(left, top, right, bottom);
    outtextxy(250, 210, "A Rectangle");
    getch();
    closegraph();
}