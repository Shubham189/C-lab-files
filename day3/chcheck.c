#include<stdio.h>
int main()
{
  char ch;
  printf("\nEnter a character :");
  scanf("%c",&ch);
  if(ch>='0' && ch<='9')
    printf("\n%c is a digit.\n",ch);
  else if((ch>='A' && ch<='z') || (ch>='A' && ch<='Z'))
    printf("\n%c is a letter.\n",ch);
  else
    printf("\n%c is a special character.\n",ch);
  return 0;
}
  
