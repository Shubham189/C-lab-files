#include<stdio.h>
int main()
{
  int i=0,a[20],n,temp;
  printf("\nEtner the range : ");
  scanf("%d",&n);
  printf("\nThe values : ");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n-1;i+=2)
  { 
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
  }
  for(i=0;i<n;i++)
    printf("%d ",a[i]);  
  return 0;
}

