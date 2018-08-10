#include<stdio.h>
int main()
{
int i,x,n,numerator,denominator;
float sum;
printf("\n enter the value of x");
scanf("%d",& x);
x=(3.14*x)/180;
sum=1;
numerator=1;
denominator=1;
printf("\n enter the value of n");
scanf("%d",& n);
for(i=1;i<=n;i++)
{
      numerator=numerator*x*x;
      denominator=2*i*(2*i-1)*(-1);
      sum=sum+numerator/denominator;
}
printf("the sum of the series is %f",sum);
return 0;
}
