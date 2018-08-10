#include<stdio.h>
int f=1;
int fibo(int x)
{ 
int f; 
   if(x==1)
     return 0;
   else if(x==2)
     return 1;
   else
     f=fibo(x-1)+fibo(x-2); 
   return f;  
}
int main()
{
   int i,x,a;
   printf("\nEnter 1 nos : ");
   scanf("%d",&x);
   for(i=1;i<=x;i++)
   {
   
      a=fibo(i);
      printf("%5d",a); 
   }     
   return 0;
}
