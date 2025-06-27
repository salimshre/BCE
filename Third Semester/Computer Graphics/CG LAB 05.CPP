// Wap to implement BLA to draw a line in computer
// graphics using c/c++
// https://github.com/gaurab-arl/SFML_SET_UP
// https://www.youtube.com/watch?v=CHFyEnlMnxg

#include <graphics.h>
#include <iostream>
using namespace std;

void draw (int x0, int y0 , int x1 , int y1)
{
 int dx = abs(x1 - x0); 
 int dy = abs(y1 - y0); 
 
int sx = (x0 < x1)? 1 : -1;
 int sy = (y0 < y1)? 1 : -1;
 
 int p = 2* dy - dx;
 int x = x0;
 int y = y0;
 while(x != x1)
 {
 	putpixel(x,y , WHITE);
 	if(p>=0)
 	{
 		y += sy;
 		p -=2* dx;
	 }
 
 p += 2*dy;
 x += sx;
}
}

int main ()
{
	int x , y, y1 , x1;
	cout<<" enter the coordinates :";
		cin>>x>>y;
	cout<<" enter the coordinates :";
	cin>>x1>>y1;
	initwindow(1000,700," lab of graphcs ");
	draw(x , y , x1 , y1);
	
	getch();
	closegraph();
	return 0;
}




