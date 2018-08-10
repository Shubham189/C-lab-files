#include<stdio.h>
int main()
{
  int a,b;
  printf("\nEnter 2 nos : ");
  scanf("%d%d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\nThe 2 nos are %d and %d\n",a,b);
  return 0;
}

