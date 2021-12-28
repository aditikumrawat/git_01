#include <stdio.h>

int main()
{
    int k, num;
    for (int i = 1; i <= 9 ; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}