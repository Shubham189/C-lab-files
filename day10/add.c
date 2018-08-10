#include<stdio.h>
int f=1;
int add(int x)
{  
   if(x>=1)
     return x+add(x-1);
   else
     return 0;
       
     
}
int main()
{
   int x,a;
   printf("\nEnter 1 nos : ");
   scanf("%d",&x);
   a=add(x);
   printf("\n%d",a);   
   return 0;
}
