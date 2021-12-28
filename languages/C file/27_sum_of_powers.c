#include<stdio.h>
#include<math.h>

int main()
{
   printf("It's a programme to give the sum of powers...\n");
   int num;
   int power_num=0;
   int sum_of_power=0;
   printf("Enter a number : ");
   scanf("%d",&num);
   for (int i = 1; i <= num; i++)
   {
       power_num = pow(i,i);
       sum_of_power += power_num;
   }
   printf("Sum of power %d",sum_of_power);
   return 0;
}