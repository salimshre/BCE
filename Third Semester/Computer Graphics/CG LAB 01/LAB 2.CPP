#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int x = getmaxx();
    int y = getmaxy();

    // Draw outer rectangle border
    rectangle(20, 20, x - 20, y - 20);

    // Title
    settextstyle(9, 0, 3);
    outtextxy(x/2 - 150, 80, "Kantipur City College");
    settextstyle(9, 0, 2);
    outtextxy(x/2 - 100, 110, "Putalisadak, Kathmandu");

    // Vertical lines in the middle of the page
    line(x/2 - 40, 160, x/2 - 40, 240);
    line(x/2, 160, x/2, 240);
    line(x/2 + 40, 160, x/2 + 40, 240);

    // Lab report text
    settextstyle(9, 0, 1);
    outtextxy(x/2 - 30, 260, "Lab Report:");

    // Horizontal lines for "Submitted By" and "Submitted To"
    line(40, 300, x/2 - 20, 300);
    line(x/2 + 20, 300, x - 40, 300);

    // Submitted By section
    outtextxy(50, 310, "Submitted By:");
    outtextxy(50, 340, "Ashok Shrestha");
    outtextxy(50, 360, "Roll No: 5");

    // Submitted To section
    outtextxy(x/2 + 30, 310, "Submitted To:");
    outtextxy(x/2 + 30, 340, "Er. Ramesh Basaule");

    // Date
    outtextxy(x/2 - 50, y - 60, "Date: 2081/11/09");

    getch();
    closegraph();
}
