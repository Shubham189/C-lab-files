#include<stdio.h>
int main()
{
  int n,sum=0,a[20];
  float avg;
  printf("Enter a no : ");
  scanf("%d",&n);
  printf("\nThe values : ");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(int i=0;i<n;i++)
    sum+=a[i];
  printf("\nAvg= %f",sum/(n*1.0));
  return 0;
}
  
      
   
