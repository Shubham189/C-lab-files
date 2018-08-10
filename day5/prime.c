#include<stdio.h>

int main()
{
  int n,c=0;
  printf("\nEnter a no : ");
  scanf("%d",&n);
  int j=sqrt(n);
  for(int i=2;i<=j;i++)
  {
    if(n%i==0)
      c=1;
      exit(0);
  }
  if(c==0)
    printf("\n%d is a prime no : ",n);
  else
    printf("\n%d is not a prime no\n",n);  
  return 0;
}
          
      
