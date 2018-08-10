#include<stdio.h>
struct time
{
   int sec,min,hr;
}t1,t2,t3;   
int main()
{
   scanf("%d%d%d",&t1.hr,&t1.min,&t1.sec);
   scanf("%d%d%d",&t2.hr,&t2.min,&t2.sec);
   t3.sec=t1.sec+t2.sec;
   t3.min=t1.min-t2.min;
   t3.hr=t1.hr-t2.hr;
   while(t3.sec<=0)
   {
      t3.min--;
      t3.sec+=60;
   }
   while(t3.min<=0)
   {
      t3.hr--;
      t3.min+=60;
   }
   printf("\n%d\t%d\t%d\n",t3.hr,t3.min,t3.sec);   
   return 0;
}
   
