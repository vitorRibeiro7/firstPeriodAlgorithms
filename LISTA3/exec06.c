#include <stdio.h>

int main()
{

    int numeroDeLinhas = 0;
    int numeroDeLinhasFinal;

    printf("informe um numero de linhas:\n");
    scanf("%i", &numeroDeLinhasFinal);
    printf("\n");

    if (numeroDeLinhasFinal > 10000)
    {
        printf("Não coloque numeros tao grandes assim\n\n");

        return 1;
    }

    while (numeroDeLinhasFinal >= numeroDeLinhas)
    {
        printf("linha %i\n", numeroDeLinhas);
        numeroDeLinhas++;
    }

    return 0;
}