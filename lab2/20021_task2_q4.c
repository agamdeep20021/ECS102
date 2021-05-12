#include <stdio.h>

void main()
{
    float radius;
    double pi=3.414, area, circumference;
    
    printf("enter radius of circle: ");
    scanf("%f", &radius);

    area = pi*radius*radius;

    circumference = 2*pi*radius;

    printf("area is : %lf \ncircumference is: %lf \n",area, circumference);
}

