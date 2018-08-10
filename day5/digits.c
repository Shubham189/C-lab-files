#include<stdio.h>
int main()
{
  int c=0,n;
  printf("\nEnter a no : ");
  scanf("%d",&n);
  while(n!=0)
  {
    c++;
    n=n/10;
  }
  printf("No of digits = %d\n",c);
  return 0;
}

