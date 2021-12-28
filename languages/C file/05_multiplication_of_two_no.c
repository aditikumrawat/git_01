#include <stdio.h>
int main()
{
    printf("Programme is to multiply to numbers....\n");
    float first_no,second_no,result;
    printf("Enter your first number \n");
    scanf("%f",&first_no);
    printf("Enter your second number \n");
    scanf("%f",&second_no);
    result = first_no*second_no;
    printf("The multiplication of two numbers are :- %f \n",result);
    return 0;
}