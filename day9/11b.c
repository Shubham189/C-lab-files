#include<stdio.h>
int sum(int x,int y)
{
   return &x+&y;
}
int main()
{
   int a,b,z;
   printf("\nEnter 2 nos : ");
   scanf("%d%d",&a,&b);
   z=sum(&a,&b);
   printf("%d",z);
   return 0;
}
