#include<stdio.h>
int main()
{
  int n,temp;
  float med;
  printf("Enter a no : ");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(int i=1;i<n-1;i++)
  {
    for(int j=0;j<n-i;j++)
    {
      if(a[j]>a[j+1])  
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  if(n%2==0)
    med=(a[n/2]+a[n/2+1])/2.0;
  else
    med=a[n/2];
  printf("%f",med);
  return 0;
}
            

