#include <stdio.h>
int main()
{
    printf("Programme to convert the celsius value into fahrenheit value...\n");
    float celsius_value,fahrenheit_value;
    printf("Enter Celsius value for conversion = ");
    scanf("%f",&celsius_value);
    fahrenheit_value = celsius_value*1.8 + 32;
    printf("Fahrenheit value of your given celsius value = %f",fahrenheit_value);
    return 0;
}