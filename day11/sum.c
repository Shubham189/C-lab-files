#include<stdio.h>
int main()
{
   int a[]={10,20,30,40,50};
   int *p;
   int i=0,sum=0;
   p=a;
   printf("\nElement\tvalue\taddr\n");
   while(i<5)
   {
      printf("\na[%d]\t%d\t%p",i,*p,p);
      sum+=*p;
      p++;
      i++;
   }
   printf("\n%d",sum);
   return 0;
}
      
