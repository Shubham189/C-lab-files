#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c;
  float r2,r1, d;
  printf("\nEnter the co-efficients of the quadratic equation : ");
  scanf("%f%f%f",&a,&b,&c);
  if(a==0&&b==0&&c==0)
    printf("\nThe equation is not valid.");
  else if(a==0)
    printf("\nThe equation is a linear equation.\nThe root is %f\n",-(c/b));
  else 
  {
    d=b*b-4*a*c;
    if(d==0)
      printf("\nIt has equal roots.\nThe root is %f\n",-b/(2*a));
    else if (d<0)
      printf("\nThe roots are imaginary.\n");
    else
      {
         r1=(-b+sqrt(d))/(2*a);
         r2=(-b-sqrt(d))/(2*a);
         printf("\nThe roots are %f and %f\n",r1,r2);
       }
   }
   return 0;
}

