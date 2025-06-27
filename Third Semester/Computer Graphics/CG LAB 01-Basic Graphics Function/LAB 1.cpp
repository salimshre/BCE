//simple test program to print line.
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
	
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "");
	line(100,100,500,500);
	getch();
	closegraph();
	return 0;
}
