#include<stdio.h>
int main()
{
   int nc=0,nt=0,nn=0,ns=0;
   FILE *f1;
   char c;
   printf("\nData input :\n");
   f1=fopen("input4.txt","w");
   while((c=getchar())!=EOF)
      putc(c,f1);
   fclose(f1);
   
   
  f1=fopen("input4.txt","r"); 
  while((c=getc(f1))!=EOF)
  {
     nc++;
     if(c=='\n')
       nn++;
     else if(c=='\t')
       nt++;
     else if(c==' ')
       ns++;
   }
   fclose(f1); 
   
   
   printf("\nNumber of characters : %d ",nc);
   printf("\nNumber of tabs       : %d ",nt);
   printf("\nNumber of spaces     : %d ",ns);
   printf("\nNumber of new lines  : %d ",nn);
   return 0;
}   

     
