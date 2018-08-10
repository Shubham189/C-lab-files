#include<stdio.h>
int main()
{
  int a,b;
  printf("\nEnter 2 numbers : ");
  scanf("%d%d",&a,&b);
  if(a>b)
    printf("\n%d is the greater.\n",a);
  else if(b>a)
    printf("\n%d is the greater.\n",b);
  return 0;
}

