#include<stdio.h>
float product(int number1,float number2);
void main()
{
 int number1;
 float number2,prdt;
 printf("Enter the integer number and float number");
 scanf("%d%f",&number1,&number2);
 prdt=product(number1,number2);
 printf("product=%f\n",prdt);
}
float product(int number1,float number2)
{
 float product;
 product=number1*number2;
 return product;
}
