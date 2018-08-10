#include<stdio.h>
int main()
{
  int a,b,c;
  printf("\nEnter 2 nos : ");
  scanf("%d%d",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("\nThe 2 nos are %d and %d\n",a,b);
  return 0;
}

