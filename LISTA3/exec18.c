#include <stdio.h>

int main()
{

    int numUm = 1;
    int numDois = 1;
    int numTres = 0;
    int numAux;
    int numeroEscolhido;
    int i;

    printf("Escolha qual numero quer:\n");
    scanf("%i", &numeroEscolhido);

    for (i = 2; i < numeroEscolhido; i++)
    {
        numTres = numUm + numDois;
        numUm = numDois;
        numDois = numTres;
    }

    printf("%i", numTres);

    return 0;
}