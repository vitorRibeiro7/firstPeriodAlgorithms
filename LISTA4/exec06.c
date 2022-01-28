#include <stdio.h>

int main()
{

    int lines;
    int spaces = 0;
    int stop;

    printf("Escolha um tamanho:\n");
    scanf("%i", &lines);

    stop = lines;

    for (int k = 0; k < stop; k++)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int i = 0; i < lines; i++)
        {
            printf("X");
        }

        lines--;
        spaces++;
        printf("\n");
    }

    return 0;
}