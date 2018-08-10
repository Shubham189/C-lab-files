#include<stdio.h>
int main()
{
  char c;
  printf("\nEnter a letter : ");
  scanf("%c",&c);
  if(c>='a' && c<='z')
    c-=32;
  printf("\nThe changed letter is %c.\n",c);  
  return 0;
}

