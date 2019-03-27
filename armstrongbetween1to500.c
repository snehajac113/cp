#include<stdio.h>
void main()
{
 int reminder,armstrong=0,number,i;
 for(i=100;i<=500;i++)
 {
  armstrong=0;
  number=i;
  while(number>0)
      {
        reminder=number%10;
        armstrong=armstrong+(reminder*reminder*reminder);
        number=number/10;
      }
      if(armstrong==i)
        printf("%d is armstrong number \n",i);
 } 
}
