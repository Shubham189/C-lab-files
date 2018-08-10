#include<stdio.h>
int main()
{
  float x,n;
  float sum,numer,deno;
  printf("\nEnter the value of x and range : ");
  scanf("%f%f",&x,&n);
  x=(x*3.14)/180;
  sum=x;
  numer=x;
  deno=1;
  for(int i=1;i<n;i++)
  {
    numer=numer*x*x;
    deno=deno*(2*i)*(2*i+1)*(-1);
    sum+=numer/deno;
  }
  printf("\nAnswer = %f",sum);
  return 0;
}

  
  
  
