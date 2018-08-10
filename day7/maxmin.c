#include<stdio.h>
int main()
{
  int i,n,a[20];
  float avg;
  printf("Enter a no : ");
  scanf("%d",&n);
  printf("\nThe values : ");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  int max=a[0],min=a[0];
  for(i=0;i<n;i++)
  {
    if(max<a[i])
      max=a[i];
    if(min>a[i])
      min=a[i];
  }
  printf("\nThe max and min are : %d and %d\n",max,min);
  return 0;
}
       
