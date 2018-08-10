#include<stdio.h>
int main()
{
  int i=0,j,a[20],n,temp;
  printf("\nEtner the range : ");
  scanf("%d",&n);
  printf("\nThe values : ");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  j=n-1;
  i=0;
  while(i<j)
  {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
  }
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  return 0;
}
    
  
