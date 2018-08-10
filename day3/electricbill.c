#include<stdio.h>
int main()
{
  float u,amt=0.0;
  printf("\nEnter the units consumed : ");
  scanf("%f",&u);
  if(u<=50)
    amt+=u*3;
  else if(u<=100)
    amt+=150+(u-50)*4.5;
  else
    amt+=225+150+(u-100)*7;
  printf("\nTotal bill is %f.\n",amt);
  return 0;
}

