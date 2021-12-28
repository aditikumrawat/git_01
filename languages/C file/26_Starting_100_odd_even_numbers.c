#include <stdio.h>

int main()
{
    printf("Here is the programme to give first 100 odd & even number and sum of odd & even number..\n");
    int count = 0;
    int even_sum = 0, odd_sum = 0, sum = 0;
    for (int i = 0; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            even_sum += i;
        }
    }
    printf("First 100 even numbers are %d\n", even_sum);
    for (int i = 0; i <= 200; i++)
    {
        if (i % 2 != 0)
        {
            odd_sum += i;
        }
    }
    printf("First 100 odd numbers are %d\n", odd_sum);
    sum = odd_sum + even_sum;
    printf("The sum of first 100 odd & even is %d", sum);
    return 0;
}