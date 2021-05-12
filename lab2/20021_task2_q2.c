#include <stdio.h>

void main()
{
    float num1, num2;
    float sum;

    printf("enter first number: ");
    scanf("%f", &num1);

    printf("enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;

    printf("sum of the 2 numbers is : %f \n", sum);

}