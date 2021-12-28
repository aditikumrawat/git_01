#include <stdio.h>
int main()
{
    printf("Programme to get the percentage to two numbers.....\n");
    int num1,num2;
    float percent;
    char percent_sign = '%';
    num1=20;
    num2=40;
    percent = (float)20/40*100;
    printf("%d is %0.2f%c of %d",num1,percent,percent_sign,num2);
    return 0;
}