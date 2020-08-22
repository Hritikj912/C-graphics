#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{int i,j;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
/*line(30,0,30,460);
line(30,10,40,30);
line(20,30,40,30);
line(0,10,640,10);
line(40,30,80,30);
*/for(int k=5;k<30;k=k+10)
{circle(105,140,k);
}
line(535,60,630,200);
line(105,60,535,60);
line(105,60,200,200);
for(i=115,j=210;i<545;i=i+20,j=j+20)
{
    line(i,60,j,200);
}
line(10,200,105,60);
line(200,200,200,450);
line(210,200,210,450);
rectangle(10,200,630,450);
rectangle(60,300,150,450);
rectangle(310,260,520,390);
rectangle(310,260,410,320);
rectangle(420,330,520,390);
rectangle(310,330,410,390);
rectangle(420,260,520,320);
getch();
delay(1000);
closegraph();
return 0;
}
