#include <stdio.h>
int f(int a,int b,int c)
{
  a = 100;
  return a+b+c;
}
int main()
{
  printf("sum = %d\n",f(1,2,3));
}
