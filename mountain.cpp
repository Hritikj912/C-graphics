#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{int i,j;
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
for(j=0;j<=600;j=j+5)
{
circle(40-j,80,30);floodfill(40-j,80,WHITE);
circle(80-j,80,40);floodfill(80-j,80,WHITE);
circle(120-j,80,40);floodfill(120-j,80,WHITE);
circle(160-j,80,30);floodfill(160-j,80,WHITE);
circle(440-j,80,30);floodfill(440-j,80,WHITE);
circle(480-j,80,40);floodfill(480-j,80,WHITE);
circle(520-j,80,40);floodfill(520-j,80,WHITE);
circle(560-j,80,30);floodfill(560-j,80,WHITE);
line(0,264,170,132);
line(310,288,170,132);
line(292,286,470,150);
line(660,250,470,150);
rectangle(100+j,346,110+j,280);
line(100+j,280,105+j,280);
line(120+j,386,180+j,386);
line(88+j,346,210+j,346);
line(120+j,386,88+j,346);
line(180+j,386,210+j,346);
setlinestyle(1,1,1);
line(-660+j,396,660+j,396);setlinestyle(1,1,1);
line(-660+j,406,660+j,406);setlinestyle(1,1,1);
line(-660+j,416,660+j,416);setlinestyle(1,1,1);
line(-660+j,426,660+j,426);setlinestyle(1,1,1);
line(-660+j,436,660+j,436);setlinestyle(1,1,1);
line(-660+j,386,660+j,386);setlinestyle(1,1,1);
line(-660+j,456,660+j,456);setlinestyle(1,1,1);
line(-660+j,466,660+j,466);setlinestyle(1,1,1);
line(-660+j,476,660+j,476);setlinestyle(1,1,1);
line(-660+j,486,660+j,486);setlinestyle(1,1,1);
line(-660+j,446,660+j,446);setlinestyle(0,1,1);
delay(80);
cleardevice();
if(j==600)
    j=0;
}

delay(10);
getch();
closegraph();
return 0;
}
