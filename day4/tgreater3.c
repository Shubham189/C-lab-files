#include<stdio.h>
int main()
{
  int a,b,c;
  printf("\nEnter 3 nos : ");
  scanf("%d%d%d",&a,&b,&c);
  (a>b&&a>c)?printf("\n%d is greater \n",a):(b>a&&b>c)?printf("\n%d is greater \n",b):printf("\n%d is greater \n",c);
  return 0;
}

