// Draw circle using graphic function.
##include<conio.h>
#include<graphics.h>
void main()
{
    int gd = DETECT, gm;
    int x = 250, y = 200, radius = 150;
    initgraph(&gd, &gm, "");
    circle(x, y, radius);
    outtextxy(210, 370, "A Circle");
    getch();
    closegraph();
}