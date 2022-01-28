#include <stdio.h>

int main()
{

    int numeroDeLinhas;

    printf("informe um numero de linhas:\n");
    scanf("%i", &numeroDeLinhas);
    printf("\n");

    if (numeroDeLinhas > 10000)
    {
        printf("Não coloque numeros tao grandes assim\n\n");

        return 1;
    }

    while (numeroDeLinhas >= 0)
    {
        printf("linha %i\n", numeroDeLinhas);
        numeroDeLinhas--;
    }

    return 0;
}