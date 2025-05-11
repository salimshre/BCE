// wap to implement midpoint circle generation algorithm
// in computer graphcs usng c/c++

#include <graphics.h>
#include <iostream>
#include <conio.h>

using namespace std;

void drawcircle(int x, int y, int xc, int yc);

int main() {
    int radius, pk, x, y, xc, yc;
    int gd = DETECT, gm;

    cout << "Enter the center coordinates (xc yc): ";
    cin >> xc >> yc;
    cout << "Enter the radius: ";
    cin >> radius;

     initgraph(&gd, &gm, "");

    x = 0;
    y = radius;
    pk = 1 - radius;

    do {
        drawcircle(x, y, xc, yc);
        if (pk <= 0) {
            pk += 2 * x + 1;
        } else {
            pk += 2 * (x - y) + 1;
            y--;
        }
        x++;
    } while (x < y);

    getch();
    closegraph();
    return 0;
}

void drawcircle(int x, int y, int xc, int yc) {
    putpixel(x + xc, y + yc, WHITE);
    putpixel(-x + xc, y + yc, WHITE);
    putpixel(x + xc, -y + yc, WHITE);
    putpixel(-x + xc, -y + yc, WHITE);
    putpixel(y + xc, x + yc, WHITE);
    putpixel(-y + xc, x + yc, WHITE);
    putpixel(y + xc, -x + yc, WHITE);
    putpixel(-y + xc, -x + yc, WHITE);
}
