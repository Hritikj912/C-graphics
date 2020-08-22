#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{int i,j;
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
for(j=0;j<=600;j=j+5)
{
line(40+j,105+30,50+j,150+30);
line(40+j,105+30,60+j,105+30);
line(80+j,150+30,60+j,105+30);
line(20+j,190+30,50+j,150+30);
line(20+j,190+30,30+j,190+30);
line(60+j,175+30,30+j,190+30);
line(225+j,150+30,50+j,150+30);
line(90+j,210+30,50+j,150+30);
line(225+j,210+30,90+j,210+30);
line(260+j,180+30,225+j,210+30);
line(225+j,150+30,260+j,180+30);
line(170+j,150+30,140+j,90+30);
line(190+j,150+30,145+j,90+30);
line(140+j,90+30,145+j,90+30);
line(160+j,240,100+j,260+30);
line(190+j,240,105+j,290);
circle(40-j,80,30);floodfill(40-j,80,WHITE);
circle(80-j,60,40);floodfill(80-j,60,WHITE);
circle(120-j,60,40);floodfill(120-j,60,WHITE);
circle(160-j,60,30);floodfill(160-j,60,WHITE);
circle(440-j,60,30);floodfill(440-j,60,WHITE);
circle(480-j,60,40);floodfill(480-j,60,WHITE);
circle(520-j,60,40);floodfill(520-j,60,WHITE);
circle(560-j,60,30);floodfill(560-j,60,WHITE);
circle(160-j,350,30);floodfill(160-j,350,WHITE);
circle(200-j,350,40);floodfill(200-j,350,WHITE);
circle(240-j,350,40);floodfill(240-j,350,WHITE);
circle(280-j,350,30);floodfill(280-j,350,WHITE);
circle(560-j,350,30);floodfill(560-j,350,WHITE);
circle(600-j,350,40);floodfill(600-j,350,WHITE);
circle(640-j,350,40);floodfill(640-j,350,WHITE);
circle(680-j,350,30);floodfill(680-j,350,WHITE);
for(i=0;i<=100;i=i+16)
{
rectangle(110+i+j,200,120+i+j,210);

}delay(80);
cleardevice();
if(j==600)
    j=0;
}

delay(10);
getch();
closegraph();
return 0;
}
