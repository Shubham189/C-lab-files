#include<stdio.h>
struct dist
{
   int km;
   int m;
}d1,d2,d3;
struct dist add(struct dist a,struct dist b)
{
   struct dist temp;
   temp.km=a.km+b.km;
   temp.m=a.m+b.m;
   while(temp.m>=1000)
   {
     temp.km++;
	 ttemp.m-=1000;
   }
   return temp;
}
   
int main()
{
   scanf("\n%d%d",&d1.km,&d1.m);
   scanf("\n%d%d",&d2.km,&d2.m);
   d3=add(d1,d2);
   printf("\n%d km\t%d m",d3.km,d3.m);
   return 0;
}
   
   
