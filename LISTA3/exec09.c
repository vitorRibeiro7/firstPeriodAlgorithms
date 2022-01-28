#include <stdio.h>

int main()
{

    int inicio = 0;
    int fim;
    int fim2;
    int numeroZerado = 0;

    printf("Quantos numros impares deseja?");
    scanf("%i", &fim);

    fim2 = fim * 2;

    while (inicio != fim2)
    {
        if (numeroZerado % 2 != 0)
        {
            printf("%i ", numeroZerado);
        }

        numeroZerado++;
        inicio++;
    }

    return 0;
}