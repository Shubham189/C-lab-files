#include<stdio.h>
int main()
{
   FILE *f1;
   char c;
   printf("\nData input :\n");
   f1=fopen("input.txt","w");
   while((c=getchar())!=EOF)
      putc(c,f1);
   fclose(f1);
   printf("\nData output :\n");
   f1=fopen("input.txt","r");
   while((c=getc(f1))!=EOF)
     printf("%c",c);
   fclose(f1);
}
        
