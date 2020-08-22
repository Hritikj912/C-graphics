#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm;
 int i,j;
 initgraph(&gd,&gm,"c://TURBOC3//BGI");
for(i=0;i<9;i++)
{
for(j=12-i;j>=0;j--)
{
if(j<8-i)
{circle((i+1)*30,(j+0.5)*30+70,30);floodfill((i+1)*30,(j+0.5)*30+70,WHITE);
}
else
{circle((i+1)*30,(12-j+0.5)*30+70,30);floodfill((i+1)*30,(12-j+0.5)*30+70,WHITE);
}
delay(2000);
cleardevice();
}
}
delay(2000);
 return 0;
 }
