#include <stdio.h>

void main()
{
    char input;

    printf("please enter a letter: \n");
    scanf("%c",&input);

    if (input =='a' || input =='o'|| input =='i'|| input =='e'|| input =='u')
    printf("wovel\n");

    else
    printf("consonant\n");
}