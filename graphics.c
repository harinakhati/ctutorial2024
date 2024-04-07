#include<stdio.h>
#include<graphics.h>
int main()
{
  int gd,gm;
  gd=DETECT;
  initgraph(&gd,&gm,"C:\\TC\\Bgi");
  line(50,100,50,30);
  line(50,100,100,300);
  line(100,300,50,300);
  line(50,300,80,220);
  line(80,220,50,220);
  circle(90,120,20);
  arc(60,120,180,360,20);
  closegraph();
  return 0;
}