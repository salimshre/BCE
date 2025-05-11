/* Program to implement windows to viewport in computer graphics using C/C++ */

#include <stdio.h>
#include <graphics.h>  // For graphics functions (Note: graphics.h is outdated)
#include <conio.h>     // For getch()

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    int xvmin, yvmin, xvmax, yvmax, xw, yw, xv, yv;
    int xwmin, xwmax, ywmin, ywmax, xv1, yv1;

    

    printf("enter windows coordinates xwmin, xwmax, ywmin, ywmax:\n");
    scanf("%d %d %d %d", &xwmin, &ywmin, &xwmax, &ywmax);

    line(xwmin - 25, xwmin - 25, xwmin - 25, ywmax + 50);
    line(xwmin - 40, ywmax + 25, xwmax + 50, ywmax + 25);

    outtextxy(xwmin + 5, ywmax + 5, "window");

    line(xwmin, ywmin, xwmin, ywmax);
    line(xwmin, ywmax, xwmax, ywmax);
    line(xwmax, ywmax, xwmax, ywmin);
    line(xwmax, ywmin, xwmin, ywmin);

    xvmax = xwmax / 2;
    xvmin = xwmin / 2;
    yvmin = ywmin / 2;
    yvmax = ywmax / 2;

    line(xvmin + 275, yvmin + 275, xvmin + 275, yvmax + 325);
    line(xvmin + 255, yvmax + 315, xvmax + 325, yvmax + 315);
    outtextxy(xvmin + 305, yvmax + 305, "viewport");

    line(xvmin + 300, yvmin + 300, xvmin + 300, yvmax + 300);
    line(xvmin + 300, yvmax + 300, xvmax + 300, yvmax + 300);
    line(xvmax + 300, yvmax + 300, xvmax + 300, yvmin + 300);
    line(xvmax + 300, yvmin + 300, xvmin + 300, yvmin + 300);

    xw = xwmin + 50;
    yw = ywmin + 50;
    putpixel(xw, yw, 4);

    xv1 = ((xvmax - xvmin) / (xwmax - xwmin)) * (xw - xwmin);
    xv = xv1 + xvmin;
    yv1 = ((yvmax - yvmin) / (ywmax - ywmin)) * (yw - ywmin);
    yv = yv1 + yvmin;
    putpixel(xv + 325, yv + 325, 2);

    // Wait for user input before closing
    getch();

    // Close graphics mode
    closegraph();

    return 0;
}

