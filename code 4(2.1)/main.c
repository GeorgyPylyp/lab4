#include <stdio.h>

int main() {
 int i;
 int is=0;
 for(i=-20;i<=10;i++)
 if(i>0){
 is+=i;}
 int sx=is*is;
 printf("Квадрат суми додатніх чисел у діапазоні [-20;10] дорівнює %d\n",sx);


 
  return 0;
}