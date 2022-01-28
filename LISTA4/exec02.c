#include <stdio.h>

int main()
{

    int numUm = 0;
    int numDois = 1;
    int numTres = 0;
    int numAux;
    int numeroEscolhido;
    int i;
    int contador = 0;

    printf("Escolha qual numero quer:\n");
    scanf("%i", &numeroEscolhido);

    for (; contador < numeroEscolhido ;)
    {
        numTres = numUm + numDois;
        numUm = numDois;
        numDois = numTres;

        if (numTres % 2 == 0)
        {
            printf("%i, ", numTres);

            contador++;
        }
    }

    return 0;
}