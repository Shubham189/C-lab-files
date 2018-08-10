#include<stdio.h>
int main()
{
  int a,b,c;
  char ch;
  printf("Enter 2 nos : ");
  scanf("%d%d",&a,&b);
  printf("\nEnter the operator : ");
  scanf(" %c",&ch);
  switch(ch)
  {
    case '+' : c=a+b;
               break;
    case '-' : c=a-b;
               break;
    case '*' : c=a*b;
               break;
    case '/' : c=a/b;
               break;
    default : printf("\nInvalid operator\n");
  }
  printf("\nThe output is : %d \n",c);
  return 0;
}
                                 
