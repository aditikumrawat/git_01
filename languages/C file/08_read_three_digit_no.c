#include <stdio.h>
int main()
{
    printf("Progrmme to read the the three digit number by there places....\n");
    int num,hundred,tens,ones,two_digit;
    printf("Enter the three digit number\n");
    scanf("%d",&num);
    hundred = num/100;
    two_digit = num%100;
    tens = two_digit/10;
    ones = two_digit%10;
    printf("%d hundreds, %d tens, %d ones",hundred,tens,ones);
    return 0;
}