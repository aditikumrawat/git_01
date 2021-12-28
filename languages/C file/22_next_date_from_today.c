#include <stdio.h>

int main()
{
    int date, month, year;
    printf("Formate : DD MM YYYY\n");
    printf("Enter the date month and year with a space  ");
    scanf("%d %d %d", &date, &month, &year);
    printf("Your input date %d:%d:%d\n", date, month, year);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (date == 31 && month == 12)
        {
            date = 1;
            month=1;
            year++;
        }
        else if (date == 31 && month <= 11)
        {
            date++;
            month++;
        }
        else
        {
            date++;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (date == 30)
        {
            date = 1;
            month++;
        }
        else
        {
            date++;
        }
    }
    else if (month == 2)
    {
        if (date == 28)
        {
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            {
                date++;
            }
            else
            {
                date = 1;
                month++;
            }
        }
        else
        {
            date++;
        }
    }
    else
    {
        printf("Space Error\n");
    }
    printf("Next date : %d:%d:%d\n", date, month, year);
    return 0;
}