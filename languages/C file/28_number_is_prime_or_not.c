#include <stdio.h>

int main()
{
    printf("Here is programme to find the given number is prime or not....\n");
    int n, i, count = 0;
    printf("Enter number to check prime number or not: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i)
    {
        // check for non prime number
        if (n % i == 0)
        {
            count = 1;
            break;
        }
    }
    if (count == 0)
    {
        printf("%d is a prime number.", n);
    }
    else if(n==2)
    {
        printf("%d is a prime number.", n);
    }
    else
    {
        printf("%d is not a prime number.", n);
    }
    return 0;
}