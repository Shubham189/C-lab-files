#include<stdio.h>
struct student
{
   int roll;
   char name[100];
   float marks;
};
int main()
{
   struct student s;
   printf("\nEnter the info : ");
   scanf("%d%s%f",&s.roll,s.name,&s.marks);
   printf("\nThe info is : %d\t%s\t%f",s.roll,s.name,s.marks);
   return 0;
}
   
   
