#include <stdio.h>
int main()
{
    printf("Programme to find area and volume of sphere...\n");
    float pi,r,area,vol;
    pi = 3.14;
    r = 2;
    printf("Value of pi and r %f,%f \n",pi,r);
    area = 4*pi*r*r;
    vol = (4/3)*pi*r*r*r;
    printf("Area of sphere of given radius %f,is %f \n",r,area);
    printf("Volume of sphere of given radius %f,is %f \n",r,vol);
    return 0;
}