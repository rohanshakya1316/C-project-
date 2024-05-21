// Draw a rectangle using graphic function. Also write BCA inside the rectangle.
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd = DETECT, gm;
    int left = 200, top = 150, right = 450, bottom = 250;
    initgraph(&gd, &gm, "");
    setcolor(RED);
    rectangle(left, top, right, bottom);
    setcolor(GREEN);
    outtextxy(310, 200, "BCA");
    setcolor(WHITE);
    outtextxy(170, 270, "A Rectangle where BCA is written inside");
    getch();
    closegraph();
}