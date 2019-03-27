#include<stdio.h>
void main()
{
 int reminder,octal=0,number,i=1;
 printf("Enter the number:");
 scanf("%d",&number);
 while(number>0)
 {
 reminder=number%8;
 number=number/8;
 octal=octal+(reminder*i);
 i=i*10;
 }
 printf("Octal equivalent is %d",octal);
}
