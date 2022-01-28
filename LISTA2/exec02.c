#include <stdio.h>

int main()
{

    int numberSelected;

    printf("Digite um numero...\n\n");
    scanf("%i", &numberSelected);

    if (numberSelected == 0)
    {
        printf("Zero é Zero.");
        return 1;
    }
    if (numberSelected % 2 == 0)
    {
        printf("\nSeu numero e par\n");
    }
    if (numberSelected % 2 != 0)
    {
        printf("\nSeu numero e impar\n");
    }

    return 0;
}