#include<stdio.h>
int main()
{
  float c,f;
  printf("\nEnter the temp in terms of fahrenheit : ");
  scanf("%f",&f);
  c=(f-32)*5/9;
  printf("\nThe tempereture %f fahrenheit in terms of celcius is %f\n",f,c);
  return 0;
}

