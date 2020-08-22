#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{int i,j,k;
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
for(k=-440;k<=440;k=k+3)
{
line(363-38.25,3-k,300.25,30.5-k);
line(387.5-38,30.5-k,300.25,30.5-k);
line(363-38.25,3-k,387.5-38,30.5-k);
rectangle(300.25,30.5-k,387.5-38,333-k);
rectangle(300.25,78-k,325,113-k);
rectangle(325,113-k,349.75,148-k);
line(300.25,168-k,292,223-k);
line(349.75,168-k,358,223-k);
line(325,168-k,313.5,223-k);
line(325,168-k,336.5,223-k);
rectangle(292,223-k,300.25,333-k);
rectangle(313.25,223-k,336.5,333-k);
rectangle(349.75,223-k,358,333-k);
floodfill(331,120-k,WHITE);
floodfill(301,80-k,WHITE);
floodfill(295,230-k,WHITE);
floodfill(315,280-k,WHITE);
floodfill(355,250-k,WHITE);
line(363-38.25,3-k,315.25,30.5-k);
line(363-38.25,3-k,335.25,30.5-k);
setlinestyle(3,1,2);
for(i=0,j=0;i<=232,j<=65;i=i+6,j=j+1)
line(292+j,333-k,136+i,708-k);
setlinestyle(0,1,1);
delay(10);
cleardevice();
if(k>=430)
    k=-440;
}
getch();
closegraph();
return 0;
}
