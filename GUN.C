#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm;
 int i;
 initgraph(&gd,&gm,"c://TURBOC3//BGI");

 for(i=0;i<=450;i=i+15)
 { circle(100,250,30);
 line(100,280,100,350);
 line(100,350,130,380);
 line(100,350,70,380);
 line(100,300,120,320);
 line(100,300,120,310);
 line(150,275,120,320);
 line(150,275,120,310);
 rectangle(140,260,190,270);
 rectangle(140,270,150,280);
 circle(150+i,265,5);
  circle(550,250,30);
  line(550,280,550,350);
 line(550,350,580,380);
 line(550,350,520,380);
  line(550,280,530,320); line(500,275,530,310);
 line(550,280,530,310); line(500,275,530,320);
 delay(200);
 cleardevice();
 }

 for(i=0;i<70;i=i+2)
 {
 circle(100,250,30);
 line(100,280,100,350);
 line(100,350,130,380);
 line(100,350,70,380);
 line(100,300,120,320);
 line(100,300,120,310);
 line(150,275,120,320);
 line(150,275,120,310);
 rectangle(140,260,190,270);
 rectangle(140,270,150,280);
 circle(550+i,250+i,30);
  line(550+i,280+i,550,350);
 line(550,350,580-i,380);
 line(550,350,520,380-i);
  line(550+i,280+i,530+i,320); line(500+i,275,530+i,310);
 line(550+i,280+i,530+i,310); line(500+i,275,530+i,320);
 delay(300);
 cleardevice();
 }
 getch();
 closegraph();
}

