#include<stdio.h>
int main()
{
char c;
int i,j;
for(i=1;i<=4;i++)
{
   printf("\n");
   c='A';
for(j=1;j<=i;j++)
{
   printf("%c\t",c);
c++;
}
}
return 0;
}
