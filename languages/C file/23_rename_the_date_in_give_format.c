#include <stdio.h>

int main()
{
    int date, month, year;
    printf("Formate : DD MM YYYY\n");
    printf("Enter the date month and year with a space  ");
    scanf("%d %d %d", &date, &month, &year);
    printf("Your input date %d:%d:%d\n", date, month, year);
    switch (month)
    {
    case 1:
        printf("Output date :- january %d,%d",date,year);
        break;
    case 2:
        printf("Output date :- february %d,%d",date,year);
        break;
    case 3:
        printf("Output date :- march %d,%d",date,year);
        break;
    case 4:
        printf("Output date :- april %d,%d",date,year);
        break;
    case 5:
        printf("Output date :- may %d,%d",date,year);
        break;
    case 6:
        printf("Output date :- june %d,%d",date,year);
        break;
    case 7:
        printf("Output date :- july %d,%d",date,year);
        break;
    case 8:
        printf("Output date august %d,%d",date,year);
        break;
    case 9:
        printf("Output date :- november %d,%d",date,year);
        break;
    case 10:
        printf("Output date :- november %d,%d",date,year);
        break;
    case 11:
        printf("Output date :- november %d,%d",date,year);
        break;
    case 12:
        printf("Output date : december %d,%d",date,year);
        break;
    default:
        printf("You entered wrong month....Plzz entered 0-12 number as month");
        break;
    }
   
    return 0;
}