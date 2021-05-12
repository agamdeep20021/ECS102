/*AGAMDEEP SINGH lab task 3 q1 */

#include <stdio.h>

void main()
{
    int age;

    printf("please enter your age: ");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("you are eligible to vote \n");
    
    }

    else
        printf("you are ineligible to vote \n");
    
}