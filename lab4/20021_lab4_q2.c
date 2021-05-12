#include <stdio.h>

void main()
{
    float c,f;
    int choice;

    printf("for celcius to faranheit, type 2, for the reverse, type 1: \n");
    scanf("%d",&choice);

    if (choice==1)
    {
        printf("please enter faranheit value: ");
        scanf("%f",&f);

        c = (f-32)/1.8 ;

        printf("celcius value is : %f \n ",c);

    }

    else
    {
        printf("please enter celcius value: ");
        scanf("%f",&c);

        f = (1.8 * c) + 32 ;

        printf("faranheit value is : %f \n ",f);

    }
}