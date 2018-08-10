#include<stdio.h>
int main()
{
  int i,j=0,n,a[20],b[20];
  float avg;
  printf("Enter a no : ");
  scanf("%d",&n);
  printf("\nThe values : ");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  int k=n-1;
  for(i=0;i<n;i++)
  {
    if(a[i]%2==1)
    {
      b[j]=a[i];
      j++;
    }
    else
    {
      b[k]=a[i];
      k--;
    }
  }
  for(i=0;i<n;i++)    
    a[i]=b[i];
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  return 0;
}
      
