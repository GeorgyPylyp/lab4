#include <stdio.h>
#include <math.h>
int main() {
  float x=1.25, y=0;
printf("\n********************\n");
printf("x\t\ty\n");
printf("********************\n");
while (x<=6.75)
{
  y= 4*sqrt (x);
printf("%d\t%7.2lf\n", x, y);
x+=0.25;}
  return 0;
}