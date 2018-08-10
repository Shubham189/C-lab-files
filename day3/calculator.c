#include<stdio.h>
int main()
{
  char op;
  int a,b;
  printf("\nEnter 2 numbers : ");
  scanf("%d%d",&a,&b);
  printf("\nEnter the operator : ");
  scanf(" %c",&op);
  if(op=='+')
    printf("\nThe sum is %d.\n",a+b);
  else if(op=='-')
    printf("\nThe difference is %d.\n",a-b);
  else if(op=='*')
    printf("\nThe multiplication is %d.\n",a*b);
  else if(op=='/')
    printf("\nThe division is %d.\n",a/b);
  else
    printf("\nWrong input.\n");
  return 0;
}

