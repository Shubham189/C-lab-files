#include<stdio.h>
int main()
{
  int a,b,c,d,e;
  float m;
  printf("\nEnter your marks in 5 subjects : ");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  m=(a+b+c+d+e)/5;
  if(m>=90)
    printf("\nGrade : O\n");
  else if(m>=80)
    printf("\nGrade : E\n");
  else if(m>=70)
    printf("\nGrade : A\n");
  else if(m>=60)
    printf("\nGrade : B\n");
  else if(m>=50)
    printf("\nGrade : C\n");
  else if(m>=40)
    printf("\nGrade : D\n");
  else
    printf("\nGrade : Fail\n");
  return 0;
}


   
