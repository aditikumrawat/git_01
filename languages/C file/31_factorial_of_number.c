#include <stdio.h>

int main()
{
    printf("Programme to find the factorial of the given number..\n");
    int num, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("Factorial of a number is %d", fact);
    return 0;
}