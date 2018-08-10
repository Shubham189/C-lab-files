#include<stdio.h>
int main()
{
  int d,n,rev=0,temp;
  
  printf("\nEnter a no : ");
  scanf("%d",&n);
  temp=n;
  while(n!=0)
  {
    d=n%10;
    rev=rev*10+d;
    n=n/10;
  }
  if(rev==temp)
    printf("\n%d is a palindrome no\n",temp);
  else
    printf("\n%d is not a palindrome no\n",temp);    
  return 0;
}

