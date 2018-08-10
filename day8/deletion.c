#include<stdio.h>
int main()
{
  int n,q,temp,sum=0;
  float mean,var;
    int a[100];
  printf("Enter a no : ");
  scanf("%d",&n);

  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("\nEnter the index to be deleted : ");
  scanf("%d",&q);
  for(int i=q-1;i<n-1;i++)
    a[i]=a[i+1];
  n--;
  printf("\nThe new array is : ");
  for(int i=0;i<n;i++)
    printf("%d ",a[i]);  
  return 0;
}
    
  
