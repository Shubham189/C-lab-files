#include<stdio.h>
int main()
{
  int i,j,a[10][10],b[10][10],r,c;
  printf("\nEnter the no of rows and coloumns : ");
  scanf("%d%d",&r,&c);
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
  }
   for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
      scanf("%d",&b[i][j]);
  }
  for(i=0;i<r;i++)
  { 
    printf("\n");
    for(j=0;j<c;j++)
      printf("%d",a[i][j]+b[i][j]           );
  }
 
  return 0;
}
      
  
