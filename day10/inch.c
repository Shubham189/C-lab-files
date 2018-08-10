#include<stdio.h>
struct distance
{
   int feet,inch;
}d1,d2,d3;   
int main()
{
   scanf("%d%d",&d1.feet,&d1.inch);
   scanf("%d%d",&d2.feet,&d2.inch);   
   d3.feet=d1.feet+d2.feet;
   d3.inch=d1.inch+d2.inch;
   while(d3.inch>=12)
   {
      d3.feet++;
      d3.inch-=12;
   }
   printf("\n%d\t%d\n",d3.feet,d3.inch);   
   return 0;
}
   
