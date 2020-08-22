#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{int i,j,k;
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
for(j=0;j<=600;j=j+1)
{line(10+j,160,130+j,160);
line(130+j,160,130+j,200);
line(10+j,200,210+j,200);
line(10+j,160,10+j,240);
line(50+j,240,10+j,240);
line(90+j,240,150+j,240);
line(210+j,240,190+j,240);
line(210+j,200,210+j,240);
line(70+j,160,70+j,200);
line(10+j,160,130+j,160);
arc(70+j,240,0,180,20);
arc(170+j,240,0,180,20);
circle(70+j,240,14);
circle(170+j,240,14);
rectangle(100-j,40,110-j,90);
circle(100-j,40,10);
circle(110-j,40,10);
circle(105-j,32,10);
rectangle(260-j,40,270-j,90);
circle(260-j,40,10);
circle(270-j,40,10);
circle(265-j,32,10);
rectangle(400-j,40,410-j,90);
circle(400-j,40,10);
circle(410-j,40,10);
circle(405-j,32,10);
rectangle(180-j,360,190-j,410);
circle(180-j,360,10);
circle(190-j,360,10);
circle(185-j,352,10);
rectangle(500-j,360,510-j,410);
circle(500-j,360,10);
circle(510-j,360,10);
circle(505-j,352,10);
line(-660,90,660,90);setlinestyle(1,1,1);
line(-660,100,660,100);
line(-660,320,660,320);setlinestyle(0,1,1);
line(-660,330,660,330);
for(k=-630;k<660;k=k+9)
arc(-30+k,440,0,80,30);
delay(10);
cleardevice();
if(j==600)
    j=0;
}
delay(10);
getch();
closegraph();
return 0;
}
