#include <stdio.h>
int main()
{
    printf("Programme to find the number is negative,positive or zero....\n");
    int num;
    printf("Enter your number ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Your number is positive.");
    }
    else if(num==0)
    {
       printf("Your number is zero.");
    }
    else
    {
        printf("Your number is negative.");
    }
    return 0;
}