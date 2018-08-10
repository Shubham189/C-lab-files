#include<stdio.h>
int main()
{
  int i,a,p,s=0;
  printf("\nHow mant times do you want to add?\n");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  { 
    printf("\nEnter a no : ");
    scanf("%d",&p);
    s+=p;
  }
  printf("\nThe sum is %d\n",s);
  return 0;
}

