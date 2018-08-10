#include<stdio.h>
struct emp
{
   int basic,id;
   float hra,da,allowance,gross;
   char name[40];
}e[1];
int main()
{
   for(int i=0;i<=1;i++)
   {
      scanf("\n%d%s%d",&e[i].id,e[i].name,&e[i].basic);
      e[i].hra=(5.0/100)*e[i].basic;
      e[i].da=(4.0/100)*e[i].basic;
      e[i].allowance=(3.0/100)*e[i].basic;
      e[i].gross=e[i].basic+e[i].hra+e[i].da+e[i].allowance;
      printf("\n%d\t%s\t%f",e[i].id,e[i].name,e[i].gross);
   }
   return 0;
}
     
