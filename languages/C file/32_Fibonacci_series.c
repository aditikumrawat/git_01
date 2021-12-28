#include<stdio.h>

int main()
{
   printf("Programme to find Fibonacci of given number...\n");
   int num,new_term=0;
   int n1 = 0,n2=1;
   printf("Enter a number : ");
   scanf("%d",&num);
   for (int i = 0; i < num; i++)
   {
       if (i==0)
       {
           printf("%d ",i);
       }
       if(i==1)
       {
           printf("%d ",i);
       }
       new_term = n1 + n2;
       n1 = n2;
       n2 = new_term;
       printf("%d ",new_term);
   }
   return 0;
}