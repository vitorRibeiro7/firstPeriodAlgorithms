#include <stdio.h>

int main()
{

    int lines;
    int spaces;
    int xis = 1;

    printf("VAMOS CRIAR UMA PIRAMIDE!!\n");

    printf("\nQUANTO DE ALTURA?\n");
    scanf("%i", &lines);

    spaces = lines - 1;

    printf("\n");

    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < xis; k++)
        {
            printf("X");
        }

        xis = xis + 2;
        spaces--;

        printf("\n");
    }

    return 0;
}