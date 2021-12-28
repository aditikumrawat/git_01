#include <stdio.h>
int main()
{
    printf("Programme to find the number is negative,positive or zero....\n");
    int num, new_num1, new_num2;
    printf("Enter two digit number \n");
    scanf("%d", &num);
    new_num1 = num / 10;
    new_num2 = num % 10;
    if (new_num1 > new_num2)
    {
        printf("up");
    }
    else if (new_num2 > new_num1)
    {
        printf("down");
    }
    else if (new_num1 == new_num2)
    {
        printf("equal");
    }
    else
    {
        printf("word error");
    }
    return 0;
}