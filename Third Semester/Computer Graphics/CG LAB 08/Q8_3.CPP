/* Program to implement 2D rotation transformation in computer graphics using C/C++ */
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>  // Added for trigonometric functions

#define M_PI 3.14159265358979323846  // Corrected PI definition

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");  // Add proper BGI path
    
    // Declare variables properly
    float x1, y1, x2, y2, angle;
    float r11, r12, r21, r22, xn, yn;
    
    // Input coordinates
    printf("Enter line endpoints (x1 y1 x2 y2): ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    
    // Draw original line
    setcolor(WHITE);
    outtextxy(x1, y2+10, "Original line");  // Fixed text position
    line(x1, y1, x2, y2);
    
    // Input rotation angle
    printf("Enter rotation angle (degrees): ");
    scanf("%f", &angle);
    
    // Calculate rotation matrix elements
    float rad = angle * (M_PI / 180.0);  // Convert to radians
    r11 = cos(rad);   // Corrected function name
    r12 = sin(rad);
    r21 = -sin(rad);
    r22 = cos(rad);
    
    // Calculate rotated coordinates
    float dx = x2 - x1;
    float dy = y2 - y1;
    xn = x1 + dx * r11 + dy * r12;
    yn = y1 + dx * r21 + dy * r22;
    
    // Draw rotated line
    setcolor(RED);
    outtextxy(xn-30, yn+10, "Rotated line");  // Informative text
    line(x1, y1, xn, yn);
    
    getch();
    closegraph();
    return 0;
}
