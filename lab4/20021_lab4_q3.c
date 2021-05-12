#include <stdio.h>

void main()
{
    int daynum;

    printf("enter the number of the day of the week(1-7)");
    scanf("%d",&daynum);


    if (daynum == 1)
    printf("monday");

    else if (daynum == 2)
    printf("tuesday");

    else if (daynum == 3)
    printf("wednesday");


    else if (daynum == 4)
    printf("thrusday");

    else if (daynum == 5)
    printf("friday");

    else if (daynum == 6)
    printf("saturday");

    else if (daynum == 7)
    printf("sunday");

}