#include<stdio.h>
void main()
{
        int number,i=1,product;
        printf("Enter the number:");
        scanf("%d",&number);
        for(i=1;i<=10;i++)
         {
                product=number*i;
                printf("%d*%d=%d\n",number,i,product);
         }
}
