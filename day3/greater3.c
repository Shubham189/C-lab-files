#include<stdio.h>
int main()
{
  int a,b,c;
  printf("\nEnter 3 numbers : ");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
    printf("\n%d is the greatest.",a);
  else if(b>a && b>c)
    printf("\n%d is the greatest.",b);
  else
    printf("\n%d is the greatest.",c);
  return 0;
}

