#include <stdio.h>
int main()
{
    printf("Programme to find area of circle.....\n");
    float pi = 3.14,r,area;
    r = 10;
    printf("Value or pi and r is %f,%f \n",pi, r);
    printf("Formula used is Area = pi*r*r \n");
    area = pi*r*r;
    printf("The area of given circle = %f \n",area);
    return 0;
}