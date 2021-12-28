#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = (int *)malloc(5*sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter : ");
        scanf("%d",&p[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d",p[i]);
        printf("\n");
    }
   return 0;
}