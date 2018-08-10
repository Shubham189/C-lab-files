#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  float area,s,sq;
  printf("\nEnter 1st side : ");
  scanf("%d",&a);
  printf("\nEnter 2nd side : ");
  scanf("%d",&b);
  printf("\nEnter 3rd side : ");
  scanf("%d",&c);
  s=(a+b+c)/2;
  sq=s*(s-a)*(s-b)*(s-c);
  area=sqrt(sq);
  printf("\nThe area is %f ",area);
  return 0;
}

