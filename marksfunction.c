#include<stdio.h>
float avg(int m1,int m2,int m3);
float per(int m1,int m2,int m3);
void main()
{
 int a,b,c;
 float avge,percent;
 printf("Enter the marks:",&a,&b,&c);
 scanf("%d%d%d",&a,&b,&c);
 avge=avg(a,b,c);
 percent=per(a,b,c);
 printf("average and percentage is %f and %f",avge,percent);
 }
float avg(int m1,int m2,int m3)
{
 int total;
 float average;
 total=m1+m2+m3;
 average=total/3;
 return average;
}
float per(int m1,int m2,int m3)
{
 float percentage,total;
 total=m1+m2+m3;
 percentage=(total/150)*100;
 return percentage;
} 
