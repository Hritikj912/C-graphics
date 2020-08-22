#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{int i,j;
int gd=DETECT,gm;
int a[]={320,100,400,200,200,350,320,100};
initgraph(&gd,&gm," ");
line(150,50,200,300);
circle(500,150,50);
rectangle(300,300,400,400);
ellipse(525,50,0,360,90,50);
drawpoly(4,a);
getch();
closegraph();
return 0;
}
