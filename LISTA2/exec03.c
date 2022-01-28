#include <stdio.h>

int main()
{

    int numberOne;
    int numberTwo;

    printf("\n\nType two numbers...\n\n");
    printf("First number:");
    scanf("%i", &numberOne);

    printf("\nSecond number:");
    scanf("%i", &numberTwo);

    if (numberOne < 0 || numberTwo < 0)
    {
        printf("\nYou cant use negatives numbers\n");
        return 1;
    }

    if (numberOne == numberTwo)
    {
        printf("\nThese numbers are the same\n");
    }

    if (numberOne > numberTwo)
    {
        printf("\nThe higher number is %i\n", numberOne);
    }

    if (numberOne < numberTwo)
    {
        printf("\nThe higher number is %i\n", numberTwo);
    }

    return 0;
}