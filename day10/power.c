#include<stdio.h>
int f=1;
int power(int x,int y)
{  
   if(y>0)
     return power(x,y-1)*x;
   else
     return 1;
       
     
}
int main()
{
   int x,y,a;
   printf("\nEnter 2 nos : ");
   scanf("%d%d",&x,&y);
   a=power(x,y);
   printf("\n%d",a);   
   return 0;
}
