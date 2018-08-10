#include<stdio.h>
int main()
{
  int i=12;
  for(--i;i--;i--)
  {
    printf("%d",--i);
    if(i<=-1)
    break;
  }
  return 0;
}

