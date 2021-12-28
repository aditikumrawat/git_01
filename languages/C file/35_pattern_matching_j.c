#include<stdio.h>

int main()
{
    printf("Program of start pattern higher to lower..\n");
    int n;
    scanf("%d",&n);
    char count;
   for (int i = n; i >= 1; i--)
   {
       if (i%2==0)
       {
           count='0';
       }
       else
       {
           count='*';
       }
       for (int j = 1; j <= i; j++)
       { 
        printf("%c",count);
       }
       printf("\n");
   }
   return 0;
}