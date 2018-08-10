#include<stdio.h>
int main()
{
int i,j,k,n;
printf("\n enter the value of n");
scanf("%d",& n);
for(i=1;i<=n;i++)
{
   printf("\n");
for(j=1;j<=n-i;j++)
{
   printf(" \t");
}   
for(k=1;k<=i;k++)

printf("*\t\t");

}

return 0;
}
