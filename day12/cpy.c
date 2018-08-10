#include<stdio.h>
int main()
{
   FILE *f1,*f2;
   char c;
   printf("\nData input :\n");
   f1=fopen("input2.txt","w");
   while((c=getchar())!=EOF)
      putc(c,f1);
   fclose(f1);
   
   
   f1=fopen("input2.txt","r");
   f2=fopen("input3.txt","w");
   printf("\nCopying...\n");
   while((c=getc(f1))!=EOF)
      putc(c,f2);
   fclose(f1);
   fclose(f2);
   
   
   printf("\nData output :\n");
   f2=fopen("input3.txt","r");
   while((c=getc(f1))!=EOF)
     printf("%c",c);
   fclose(f1);
}
        
