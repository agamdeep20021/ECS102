/*AGAMDEEP SINGH lab task 3 q3 */

#include <stdio.h>


void main()
{
    float x, y;
    printf("please enter x: ");
    scanf("%f",&x);

    printf("please enter y: ");
    scanf("%f", &y);

    if (x!=y)
    {
        if (x>y)
            printf("x > y\n");
        else
            printf("x < y\n");
    }

    else
        printf("the numbers are the same(x=y)\n");
}