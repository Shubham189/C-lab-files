#include<stdio.h>
int sum(int x,int y)
{
   printf("%d",x+y);
}
int main()
{
   int x,y;
   printf("\nEnter 2 nos : ");
   scanf("%d%d",&x,&y);
   sum(x,y);
   return 0;
}   
