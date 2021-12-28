#include <stdio.h>

int main()
{
    printf("Progrmme to find your 1st number enterd is multiple of second or not...\n");
    int num1, num2;
    printf("Enter 1st number ");
    scanf("%d", &num1);
    printf("Enter 2nd number ");
    scanf("%d", &num2);
    if (num1 % num2 == 0)
    {
        printf("%d is a multiple of %d", num1, num2);
    }
    else
    {
        printf("%d is not a multiple of %d", num1, num2);
    }

    return 0;
}