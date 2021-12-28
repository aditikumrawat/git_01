#include <stdio.h>
int main()
{
    for (char i = 'F'; i > 'A'; i--)
    {
        for (char j = 'A'; j < i; j++)
        {
            printf(" %c ", j);
        }
        printf("\n");
    }
    return 0;
}