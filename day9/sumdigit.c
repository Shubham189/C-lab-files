#include<stdio.h>
int sumdigit(int x)
{
   int sum=0,d;
   while(x>0)
   {
     d=x%10;
     sum+=d;
     x/=10;
   }  
   return sum;
}
int main()
{
   int x,b;
   printf("\nEnter 1 nos : ");
   scanf("%d",&x);
   b=sumdigit(x);  
   printf("\n%d",b);    
   return 0;
}
   
