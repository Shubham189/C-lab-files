#include<stdio.h>
 void xstrcpy(char *t,char *s)
 { //t l=0;
    while(*s!='\0')
    {
      *t=*s;
      t++;
      s++;
      //+;
    }
    *t='\0';
    //ile(l>=-1)
   //t--;
    
 }
 int main()
 {
    char b[1000];
    char*a="shubham";
    xstrcpy(b,a);
    printf("\nThe copied info is : %s\n",b);
    return 0;
 }
