#include<stdio.h>
int main()
{
  int sum=0,n,num;
  float avg;
  printf("\nhow many numbers you want to enter? ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    printf("\nEnter a no : ");
    scanf("%d",&num);
    sum+=num;
  }
  avg=sum/(n*1.0);
  printf("\nAverage = %f\n",avg);
  return 0;
}
 
