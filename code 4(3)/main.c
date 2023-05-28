#include <stdio.h>

int main() {
 int s=1, i, j; 
 int s0=0;
 int n, x;
 printf("\n Введіть значення n=");
 scanf("%d", &n);
 printf("\n Введіть значення x=");
 scanf("%d", &x);
  for (i = 1; i <= n; i++){
    for(s = 0, j = i;j<=n; j++ ) 
    s+=j/x;
   s0+=s; } 
  printf("\n сума=%d",s0);
  return 0;
}