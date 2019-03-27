#include<stdio.h>
void main()
{
 float time;
 printf("Enter time taken by worker:");
 scanf("%f",&time);
 if (time>=2&&time<3)
  printf("The worker is said to be highly efficient");
 if (time>=3&&time<4)
  printf("The worker is ordered to improve speed");
 if (time>=4&&time<5)
  printf("Worker is given training to speed");
 if (time>=5)
  printf("The worker is terminated");
}  
