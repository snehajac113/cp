#include<stdio.h>
void main()
{
 int limit,i,j;
 printf("Enter the value of limit");
 scanf("%d",&limit);
 for(i=limit;i>0;i--)
  {
   for(j=1;j<=i;j++)
    {
     printf("*",j);
    }
   printf("\n");
  }
}
