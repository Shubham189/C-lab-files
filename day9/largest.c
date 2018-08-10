#include<stdio.h>
int largest(int a[],int n)
{
   int i;
   
   
   int max=a[0];
   for(i=0;i<n;i++)
   {
     if(max<a[i])
       max=a[i];
   }
   return max;
}
int main()
{
   int n,i,l;
   
   printf("\nEnter a no : ");
   scanf("%d",&n);
   int a[n];
   printf("\nThe values : ");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   l=largest(a,n);
   printf("\nLargest=%d\n",l);
   return 0;
}     
   
   
