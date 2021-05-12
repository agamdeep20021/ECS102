#include <stdio.h>

void main()
{
    printf("please type a single character: ");
    
    char typed;
    scanf("%c", &typed);

    printf("the character you type is: %c \n", typed);
}