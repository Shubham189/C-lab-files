#include<stdio.h>
#include<math.h>
int main()
{
  int n,q,w,temp,sum=0;
  float mean,var;
    int a[100];
  printf("Enter a no : ");
  scanf("%d",&n);

  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("\nEnter the index and no to be inserted : ");
  scanf("%d%d",&q,&w); 
  for(int i=n-1;i>=q;i--)
    a[i+1]=a[i];
  a[q]=w;
  printf("The new array is : ");
  for(int i=0;i<=n;i++) 
    printf("%d ",a[i]);
  return 0;
}
 
     
    
    
