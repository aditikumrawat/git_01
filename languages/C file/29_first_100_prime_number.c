#include <stdio.h>

int main()
{
    int n, count = 0;
    for (int j = 1; j <= 100; j++)
    {
        for (int i = 2; i <= j / 2; i++)
        {
            if (n % i == 0 || i == 2)
            {
               // printf("%d is a prime number.\n", i);
                count++;
                break ;
            }
        }
        if(count==0 && j!=1)
            printf("%d is a prime number.\n", j);
    }
    return 0;
}