#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;
    printf("Enter the 1st no.  ");
    scanf("%d",&num1);
    printf("Enter the 2nd no.  ");
    scanf("%d",&num2);
    printf("Enter the 3rd no.  ");
    scanf("%d",&num3);
    printf("Enter the 4th no.  ");
    scanf("%d",&num4);
    printf("Enter the 5th no.  ");
    scanf("%d",&num5);
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
    {
        printf("%d is the largest amoung the group.\n", num1);
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
    {
        printf("%d is the largest amoung the group.\n", num2);
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
    {
        printf("%d is the largest amoung the group.\n", num3);
    }
    else if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
    {
        printf("%d is the largest amoung the group.\n", num4);
    }
    else
    {
        printf("%d is the largest amoung the group.\n", num5);
    }
    //smallest number finding
    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
    {
        printf("%d is the smallest amoung the group.\n", num1);
    }
    else if (num2 < num1 && num2 < num3 && num2 < num4 && num2 <  num5)
    {
        printf("%d is the smallest amoung the group.\n", num2);
    }
    else if (num3 < num1 && num3 < num2 && num3 < num4 && num3 <  num5)
    {
        printf("%d is the smallest amoung the group.\n", num3);
    }
    else if (num4 < num1 && num4 < num2 && num4 < num3 && num4 <  num5)
    {
        printf("%d is the smallest amoung the group.\n", num4);
    }
    else
    {
        printf("%d is the smallest amoung the group.\n", num5);
    }
    return 0;
}