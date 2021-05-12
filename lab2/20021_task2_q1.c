#include <stdio.h>

void main()
{
    float num1;
    double cube;


    printf("Enter the number: ");
    scanf("%f", &num1);

    cube = num1*num1*num1;

    printf("cube of number is: %lf \n", cube);
   
}