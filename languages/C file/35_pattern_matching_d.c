#include<stdio.h>

int main()
{
    int k, num;
    printf("Enter Number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
        k = i;
        for(int j=1; j<=i; j++, k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }
   return 0;
}