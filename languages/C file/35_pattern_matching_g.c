#include <stdio.h>

int main()
{
    printf("Programme of start pattern higher to lower..\n");
    //int num;
    for (int i = 1; i <= 9; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}