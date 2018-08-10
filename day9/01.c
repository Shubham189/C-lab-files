#include<stdio.h>
int sum()
{
   int x,y;
   printf("\nEnter 2 nos : ");
   scanf("%d%d",&x,&y);
   return x+y;
}
int main()
{
   printf("%d",sum());
   return 0;
}
   
