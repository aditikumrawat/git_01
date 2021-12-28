#include <stdio.h>
int main()
{
    printf("Programme to swap the variable values....\n");
    int num1, num2, temp;
    printf("Enter the value of 1st number  ");
    scanf("%d", &num1);
    printf("Enter the value of 2nd number  ");
    scanf("%d", &num2);
    printf("Before swaping....\n");
    printf("Value of 1st no. is %d\n", num1);
    printf("Value of 2nd no. is %d\n", num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swaping...\n");
    printf("1st number is %d\n", num1);
    printf("2nd number is %d\n", num2);
    return 0;
}