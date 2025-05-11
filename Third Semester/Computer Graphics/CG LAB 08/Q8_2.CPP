/* Program to implement 2D scaling transformation in computer graphics using C/C++ */

#include <stdio.h>
#include <graphics.h>  // For graphics functions
#include <conio.h>     // For getch()

int main() {
    int gd = DETECT, gm;
    
    // Initialize graphics mode
    // Note: You may need to provide the correct path to BGI files
    initgraph(&gd, &gm, "");
    
    int x1, y1, x2, y2;
    float sx, sy;  // Scaling factors (changed from tx,ty to sx,sy)
    
    printf("Enter coordinates of rectangle (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    // Draw original rectangle
    setcolor(WHITE);
    rectangle(x1, y1, x2, y2);
    
    printf("Enter scaling factors (sx sy): ");
    scanf("%f %f", &sx, &sy);  // Changed to %f for float input
    
    // Calculate scaled coordinates
    int new_x1 = x1 * sx;
    int new_y1 = y1 * sy;
    int new_x2 = x2 * sx;
    int new_y2 = y2 * sy;
    
    // Draw scaled rectangle in a different color
    setcolor(RED);
    rectangle(new_x1, new_y1, new_x2, new_y2);
    
    // Wait for user input before closing
    getch();
    
    // Close graphics mode
    closegraph();
    
    return 0;
}
