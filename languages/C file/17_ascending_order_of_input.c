#include <stdio.h>
int main()
{
    printf("Programme to arrange the input of three number in ascending order....\n");
    int num, hundred_place, num1, tens_place, unit_place;
    printf("Enter the three digit number = ");
    scanf("%d", &num);
    hundred_place = num / 100; // we get hundred place value number
    num1 = num % 100;          // remender of the three digit number
    tens_place = num1 / 10;    // get tens place value number
    unit_place = num1 % 10;    // get the one or unit place number

    if (hundred_place < tens_place && hundred_place < unit_place)
    {
        printf("%d", hundred_place);
        if (tens_place < unit_place)
        {
            printf("%d", tens_place);
            printf("%d", unit_place);
        }
        else
        {
            printf("%d", unit_place);
            printf("%d", tens_place);
        }
    }
    else if (tens_place < hundred_place && tens_place < unit_place)
    {
        printf("%d", tens_place);
        if (hundred_place < unit_place)
        {
            printf("%d", hundred_place);
            printf("%d", unit_place);
        }
        else
        {
            printf("%d", unit_place);
            printf("%d", hundred_place);
        }
    }
    else
    {
        printf("%d", unit_place);
        if (hundred_place < tens_place)
        {
            printf("%d", hundred_place);
            printf("%d", tens_place);
        }
        else
        {
            printf("%d", tens_place);
            printf("%d", hundred_place);
        }
    }
    return 0;
}