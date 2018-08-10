#include<stdio.h>
int main()
{
  int p,r,t;
  float si;
  printf("\nEnter the principle amount : ");
  scanf("%d",&p);
  printf("\nEnter the rate of intrest : ");
  scanf("%d",&r);
  printf("\nEnter the time : ");
  scanf("%d",&t);
  si=(p*r*t)/100;
  printf("\nThe simple intrest on the amount %d at the rate of %d in time %d years is %f\n",p,r,t,si);
  return 0;
}

