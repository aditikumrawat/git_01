#include <stdio.h>
int main()
{
    printf("Programme to calculate simple interest.....\n");
    int principal, rate, Time_period;
    printf("What is the principal value to find simpleInterest \n");
    scanf("%d", &principal);
    printf("What is the rate of Interest \n");
    scanf("%d", &rate);
    printf("Time period \n");
    scanf("%d", &Time_period);
    int simpleInterest = principal * rate * Time_period;
    printf("Simple interest by the given value is %d \n", simpleInterest);
    return 0;
}