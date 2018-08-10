#include<stdio.h>
#include<math.h>
int main()
{
  int n,temp,sum=0;
  float mean,var,sd;
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
  
  for(int i=0;i<n;i++)
    sum+=a[i];
  mean=sum/n*1.0;
  sum=0;
  for(int i=0;i<n;i++)  
    sum+=(a[i]-mean)*(a[i]-mean);
  var=sum/n*1.0;
  sd=sqrt(var);
  printf("%f",sd);
  return 0;
}
    
