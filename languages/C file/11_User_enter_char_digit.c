#include <stdio.h>
int main()
{
    printf("Programme to check the entered value is character or digit.....\n");
    char input;
    printf("Enter a character ");
    scanf("%c", &input);
    if (input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z')
    {
        printf("%c is a character", input);
    }
    else
    {
        printf("%c is not a character", input);
    }
    return 0;
}