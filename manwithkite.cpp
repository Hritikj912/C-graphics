#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm;
 int i,j;
 initgraph(&gd,&gm,"c://TURBOC3//BGI");
for(i=0;i<4;i++)
{

for(j=0;j<30;j++)
{
setcolor(3);
    circle(245,200+63,37);
circle(230,190+63,5);circle(260,190+63,5);circle(245,285,5);
line(245,300,245,385);
line(245,310,200,330);
line(245,310,290,330);
line(245,385,200,440);
line(245,385,290,440);
line(290,330,440+j,165+j);
line(520+j,55+j,420+j,85+j);
line(520+j,55+j,540+j,120+j);circle(510+j,100+j,15);
line(420+j,85+j,440+j,165+j);circle(470+j,90+j,15);
line(440+j,165+j,540+j,120+j);line(440+j,165+j,520+j,55+j);
delay(200);
cleardevice();
}
for(j=0;j<30;j++)
{circle(245,200+63,37);
circle(230,190+63,5);circle(260,190+63,5);circle(245,278,5);
line(245,300,245,385);
line(245,310,200,330);
line(245,310,290,330);
line(245,385,200,440);
line(245,385,290,440);
line(290,330,440-j,165-j);
line(520-j,55-j,420-j,85-j);
line(520-j,55-j,540-j,120-j);circle(510-j,100-j,15);
line(420-j,85-j,440-j,165-j);circle(470-j,90-j,15);
line(440-j,165-j,540-j,120-j);line(440-j,165-j,520-j,55-j);
delay(200);
cleardevice();
}
}

delay(2000);
return 0;
}
