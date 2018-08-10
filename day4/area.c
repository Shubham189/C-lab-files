#include<stdio.h>
#include<math.h>
int main()
{
  int k,a,b,c;
  float area,s,sq,radius;
  printf("\n enter a no to find the corresponding area\n1 : triangle\n2 : circle\n3 : rectangle\n4 : square\nEnter a key : ");
  scanf("%d",&k);
  switch(k)
  {
    case 1 : 
             printf("\nEnter 1st side : ");
             scanf("%d",&a);
             printf("\nEnter 2nd side : ");
             scanf("%d",&b);
             printf("\nEnter 3rd side : ");
             scanf("%d",&c);
             s=(a+b+c)/2;
             sq=s*(s-a)*(s-b)*(s-c);
             area=sqrt(sq);
             printf("\nThe area is %f ",area);
             break;
    case 2 : 
             printf("\nEnter the radius : ");
             scanf("%f",&radius);
             area=3.14*radius*radius;
             printf("\nThe area of a circle with radius %f is %f\n",radius,area);
             break;
    case 3 : 
             printf("\nEnter the length and breadth : ");
             scanf("%d%d",&a,&b);
             printf("The area is : %d\n",a*b);
             break;
    case 4 : 
             printf("\nEnter the length : ");             
             scanf("%d",&a);  
             printf("The area is : %d\n",a*a); 
             break;
    default : 
             printf("\nWrong key\n"); 
  }
  return 0;
}
             
  
