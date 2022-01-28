#include <stdio.h>

int main()
{

    int numeroEscolhido;
    int aux;

    printf("Escolha um numero para ser desmontado:\n");
    scanf("%i", &numeroEscolhido);

    while (numeroEscolhido != 0)
    {
        aux = numeroEscolhido % 10;
        printf("%i ", aux);

        numeroEscolhido = numeroEscolhido / 10;
    }

    return 0;
}