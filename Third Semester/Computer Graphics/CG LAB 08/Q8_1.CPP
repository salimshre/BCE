/* Program to implement 2D translation transformation in computer graphics using C/C++ */

#include <stdio.h>
#include <graphics.h>  // For graphics functions (Note: graphics.h is outdated)
#include <conio.h>      // For getch()

int main() {
    int gd = DETECT, gm;
    
    // Initialize graphics mode
    initgraph(&gd, &gm, ""); 
    
    int x1, y1, x2, y2, tx, ty;
    
    printf("Enter two end points of a line (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    // Draw original line
    setcolor(WHITE);
    line(x1, y1, x2, y2);
    
    printf("Enter translation factors (tx ty): ");
    scanf("%d %d", &tx, &ty);
    
    // Calculate translated coordinates
    int new_x1 = x1 + tx;
    int new_y1 = y1 + ty;
    int new_x2 = x2 + tx;
    int new_y2 = y2 + ty;
    
    // Draw translated line in a different color
    setcolor(RED);
    line(new_x1, new_y1, new_x2, new_y2);
    
    // Wait for user input before closing
    getch();
    
    // Close graphics mode
    closegraph();
    
    return 0;
}
