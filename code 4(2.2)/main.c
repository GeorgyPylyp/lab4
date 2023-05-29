#include <stdio.h>
int main() {
 int is=0;
 int a, b;
  printf("\n задайте значення a=");
 scanf("%d",&a);
  printf("\n задайте значення b=");
 scanf("%d",&b);
 while(a<=b){
 if (a>0){
 is += a;}
 a++;}
 int sx=is*is;
 printf("Квадрат суми додатніх чисел у діапазоні [-20;10] дорівнює %d\n", sx);
  return 0;
}
