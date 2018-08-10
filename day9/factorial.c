#include<stdio.h>
int f=1;
int factorial(int x)
{  
   if(x>=1)
     return x*factorial(x-1);
   else
     return 0;
       
     
}
int main()
{
   int x,a;
   printf("\nEnter 1 nos : ");
   scanf("%d",&x);
   a=factorial(x);
   printf("\n%d",a);   
   return 0;
}
