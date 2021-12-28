#include <stdio.h>
int main()
{
    printf("Programme to find the largest amoung three numbers....\n");
    int num1, num2, num3;
    printf("Enter 1st number ");
    scanf("%d", &num1);
    printf("Enter 2nd number ");
    scanf("%d", &num2);
    printf("Enter 3rd number ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("1st number is largest amoung all.\n");
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("2nd number is largest amoung all.\n");
    }
    else
    {
        printf("3rd number is largest amoung all.\n");
    }
    return 0;
}