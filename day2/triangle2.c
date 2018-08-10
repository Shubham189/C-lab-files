#include<stdio.h>
int main()
{
  int b,h;
  float area;
  printf("\nEnter the values of base and height : ");
  scanf("%d%d",&b,&h);
  area=(1/2.0)*h*b;
  printf("\nArea is %f\n",area);
  return 0;
}

