#include<stdio.h>
int main()
{
  int n,c=0;
  
  for(n=1;n<=1000;n++)
  {
    c=0;
    for(int i=2;i<n;i++)
    {
      if(n%i==0)
        c=1;
    }
    if(c==0)
      printf("%d\t",n);
  }
  return 0;
}
          
      
