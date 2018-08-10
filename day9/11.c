#include<stdio.h>
int sum(int x,int y)
{
   return x+y;
}
int main()
{
   int x,y,z;
   printf("\nEnter 2 nos : ");
   scanf("%d%d",&x,&y);
   z=sum(x,y);
   printf("%d",z);
   return 0;
}
