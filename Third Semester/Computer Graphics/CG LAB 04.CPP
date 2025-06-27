// to implement dda algorithm to generate any line
// whose end points are given in computer graphics
// using c/c++

#include<graphics.h>
#include<conio.h>

void main()
{
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "c:\\TURBOC3\\BGI");


 if(abs(dx)>abs(dy))
 {
 steps=abs(dx);

 }else
 {
 steps=abs(dy);
 }

 dx=dx/steps;
 dy=dy/steps;

 x=x1;
 y=y1;

 for (i=1; i<=steps, i++)
 {
 x=x+dx;
 y=y+dy;
 putpixel(x,y, 15);
 }





 getch();
 closegraph();



}
