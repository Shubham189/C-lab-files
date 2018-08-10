#include<stdio.h>
int main()
{
  int a=500,b=501,c;
  printf("\nThe fibbonaci series : %d\t%d\t",a,b);
 do
  {
    c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;
  }while(c<=1000)
  return 0;
}
   
    
