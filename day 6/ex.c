#include<stdio.h>
int main()
{
int i,n,x,numerator,denominator;
float sum;
printf("\n enter the value of x");
scanf("%d",& x);
sum=1;
numerator=1;
denominator=1;
printf("\n enter the value of n");
scanf("%d",& n);
for(i=1;i<=n;i++)
{
      numerator=numerator*x;
      denominator=denominator*i;
      sum=sum+numerator/denominator;
}
printf("\n the sum of the series is %f",sum);
return 0;
}
