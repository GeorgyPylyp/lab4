#include <stdio.h>
int main(void) {
 int i=-20;
 int is=0;
 int ie=10;
 do{
 if (i > 0) {
 is += i;
 }
 i++;
 }while (i <= ie);
 int sx=is*is;
 printf("Квадрат суми додатніх чисел у діапазоні [-20;10] дорівнює %d\n", sx);
 return 0;
}