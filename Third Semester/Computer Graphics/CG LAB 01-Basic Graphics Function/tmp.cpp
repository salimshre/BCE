#include <graphics.h>
#include <stdio.h>

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, NULL);
	rectangle(100, 100, 200, 200);
	circle(150, 150, 50);
	
	getch();
	closegraph();
	return 0;
	
}
