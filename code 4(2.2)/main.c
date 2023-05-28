#include <stdio.h>
int main() {
 int i=-20;
 int is=0;
 int ie=10;
 while(i<=ie){
 if (i>0){
 is += i;}
 i++;}
 int sx=is*is;
 printf("Квадрат суми додатніх чисел у діапазоні [-20;10] дорівнює %d\n", sx);
  return 0;
}