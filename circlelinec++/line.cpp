#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void main()
{
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode, "C:/tc/bgi");
putpixel(100,100,WHITE); //x y axis 
setcolor(YELLOW); //setcolorchanges default color
ine(10,10,50,50); //size
setcolor(BLUE); //circle
circle(200,200,100); 
getch();
closegraph();
}

