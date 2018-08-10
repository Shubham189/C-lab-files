#include<stdio.h>
int main()
{
  int i,flag=0,a[20],n,x;
  printf("\nEtner the range : ");
  scanf("%d",&n);
  printf("\nThe values : ");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("\nEtner the no to be searched : ");
  scanf("%d",&x);
  for(i=0;i<n;i++)
  {
    if(a[i]==x)
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
    printf("\nThe number is at %d\n",i+1);
  else
    printf("\nThe element is absent\n");
  return 0;
}
         
    
