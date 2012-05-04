#include <stdio.h>
int sum (int num3, int num2)
{ 
  return num3+num2;
}
int main(int num3, int num2)
{ 
  int x; 
  x=sum(num3,num2); 
  printf("%d\n", x); return 0;
}