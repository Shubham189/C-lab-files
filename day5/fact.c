#include<stdio.h>
int main()
{
  int a,fact=1;
  printf("\nEnter the no : ");
  scanf("%d",&a);
  for(int i=1;i<=a;i++)
  fact*=i;
  printf("\nThe factorial is %d\n",fact);
  return 0;
}
  
