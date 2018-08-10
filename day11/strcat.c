#include<stdio.h>
 void xstrcat(char *t,char *s)
 { int l=0;
    while(*t!='\0')
    {
      t++;
      l++;
    }
     
    while(*s!='\0')
    {
      *t=*s;
      t++;
      l++;
      s++;
    }
    *t='\0';
    
    while(l>=0)
    {
      t--;
      l--;
    }  
  t++;  
  t++; 
 }
 int main()
 {
    char *b="great ";
    char *a="shubham";
    xstrcat(b,a);
    
    printf("\nThe new string is : ");
    puts(b);
    return 0;
 } 
