#include <stdio.h>

int main()
{

    int numberSelected;

    printf("\n\nEscolha um numero de 0 a 9 para ver por extenso.\n\n");
    scanf("%d", &numberSelected);

    if (numberSelected == 0)
    {
        printf("\n\nZero\n\n");
    }
    else if (numberSelected == 1)
    {
        printf("\n\nUm\n\n");
    }
    else if (numberSelected == 2)
    {
        printf("\n\nDois\n\n");
    }
    else if (numberSelected == 3)
    {
        printf("\n\nTrês\n\n");
    }
    else if (numberSelected == 4)
    {
        printf("\n\nQuatro\n\n");
    }
    else if (numberSelected == 5)
    {
        printf("\n\nCinco\n\n");
    }
    else if (numberSelected == 6)
    {
        printf("\n\nSeis\n\n");
    }
    else if (numberSelected == 7)
    {
        printf("\n\nSete\n\n");
    }
    else if (numberSelected == 8)
    {
        printf("\n\nOito\n\n");
    }
    else if (numberSelected == 9)
    {
        printf("\n\nNove\n\n");
    }

    return 0;
}