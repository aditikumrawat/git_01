#include <stdio.h>

int main()
{
    int n;
    float sum=0,avg ;
    printf("Enter the number: ");
    scanf("%d", &n);
    //n natural number
    int i = 1;
    while (i <= n)
    {
        printf("%d\n", i);
        sum = sum+i;
        i++;
    }
    printf("Sum of n natural number is %0.2f\n", sum);
    //average of n natural numbers
    avg = sum / n;
    printf("Average of n natural numbers is %0.2f\n", avg);
    return 0;
}