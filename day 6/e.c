#include<stdio.h>
int main()
{
  float x,n;
  float sum,numer,deno;
  printf("\nEnter the value of x and range : ");
  scanf("%f%f",&x,&n);
  
  sum=1;
  numer=1;
  deno=1;
  for(int i=1;i<n;i++)
  {
    numer=numer*x;
    deno=deno*i;
    sum+=numer/deno;
  }
  printf("\nAnswer = %f",sum);
  return 0;
}
