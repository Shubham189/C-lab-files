#include<stdio.h>
#include<math.h>
int main()
{
  int c=0,n,d,sum=0,temp;
  printf("\nEnter a no : ");
  scanf("%d",&n);
  temp=n;
  while(n!=0)
  {
    c++;
    n=n/10;
  }
  n=temp;
  while(n!=0)
  {
    d=n%10;
    sum+=pow(d,c);
    n=n/10;
  }
  if(sum==temp)
    printf("\n%d is a armstrong no\n",temp);
  else
    printf("\n%d is not a armstrong no\n",temp);
  return 0;
}

