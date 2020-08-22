#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int gd=DETECT ,gm;
initgraph(&gd,&gm,"");
circle(220,200,60);
circle(185,170,10);
circle(250,170,10);
circle(218,210,10);
line(220,260,220,360);
line(220,260,140,300);
line(220,260,300,300);
line(220,360,300,440);
line(220,360,140,440);
getch();
}
