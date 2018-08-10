 #include<stdio.h>
 int xstrlen(char *s)
 {
    int l=0;
    while(*s!='\0')
    {
      l++;
      s++;
    }
    return l;
 }
 int main()
 {
    char *a="shubham";
    printf("\nThe length is : %d\n",xstrlen(a));
    return 0;
 }
    
         
