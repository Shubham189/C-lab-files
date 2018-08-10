#include<stdio.h>
int main()
{
  int sum=0,n,d;
  printf("\nEnter a no : ");
  scanf("%d",&n);
  while(n!=0)
  {
    d=n%10;
    sum+=d;
    n=n/10;
  }
  printf("sum of digits = %d\n",sum);
  return 0;
}

