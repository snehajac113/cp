#include<stdio.h>
int main()
{
        float i=1,sum=0,factorial=1;
        while(i<=7)
                {
                 factorial=factorial*i;
                 sum=sum+(1/factorial);
                 i=i+1;
                }
        printf("sum of series is %f",sum);
}        
