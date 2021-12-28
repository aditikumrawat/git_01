#include<stdio.h>

int main()
{
    printf("Programme of start pattern higher to lower..\n");
   //int num;
   for (int i = 5; i >= 1; i--)
   {
       for (int j = 1; j <= i; j--)
       {
         printf("*");   
       }
       printf("\n");
   }
   return 0;
}