#include<stdio.h>
int main()
{
    int num1,num2,count;
    printf("enter the first number:- ");
    scanf("%d",&num1);
    printf("enter the last number:- ");
    scanf("%d",&num2);
    for (int  i = num1; i <=num2 ; i++)
    {
        count=0;
        for (int j = 2; j <= i/2; ++j)
        {
            if (i%j==0)
            {
                count=1;
                break;
            }
        }
        if (count == 0)
        {
            printf(" %d ",i);
        }   
    }
    return 0;
}