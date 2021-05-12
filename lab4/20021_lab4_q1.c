#include <stdio.h>


void main()
{
    float num1, num2;
    int choice;

    printf("to choose opertor type in the number next to it and press enter:\n+ : 1\n - : 2\n x (multiplication) : 3\n division : 4 \n");

    scanf("%d", &choice);


    printf("enter number 1");
    scanf("%f", &num1);

    if (choice ==4)
    {
        printf("enter number 2 (non-zero)");
        scanf("%f",&num2);
        printf("%f",num1/num2);
    }

    else
    {
        printf("enter number 2");
        scanf("%f",&num2);

        if (choice == 1)
        printf("%f",num1+num2);

        else if (choice ==2)
        printf("%f",num1-num2);

        else 
        printf("%f",num1*num2);
    }
}