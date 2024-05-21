// Draw a line and an arc using graphic function.
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd = DETECT, gm;
    int x1 = 100, y1 = 50, x2 = 500, y2 = 50;
    int x = 300, y = 100, st_angle = 180, end_angle = 360, radius = 150;
    
    initgraph(&gd, &gm, "");
    line(x1, y1, x2, y2);
    outtextxy(250, 60, "Straight line");

    arc(x, y, st_angle, end_angle, radius);
    outtextxy(270, 260, "An Arc");
    getch();
    closegraph();
}