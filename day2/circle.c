#include<stdio.h>
int main()
{
  float radius,area;
  printf("\nEnter the radius : ");
  scanf("%f",&radius);
  area=3.14*radius*radius;
  printf("\nThe area of a circle with radius %f is %f\n",radius,area);
  return 0;
}

