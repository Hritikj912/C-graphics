#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initwindow(800,600);
initgraph(&gd,&gm,"C:\Program Files (x86)\Dev-Cpp\MinGW64\bin");
line(10,20,100,200);
getch();
delay(1000);
closegraph();
return 0;
}
