#include<stdio.h>
int main()
{
  int d,n,rev=0;
  printf("\nEnter a no : ");
  scanf("%d",&n);
  while(n!=0)
  {
    d=n%10;
    rev=rev*10+d;
    n=n/10;
  }
  printf("the reverse no is = %d\n",rev);
  return 0;
}

