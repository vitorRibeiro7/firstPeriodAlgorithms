#include <stdio.h>
#include <limits.h>

int main()
{

    int numero;
    int maior = INT_MAX;
    int menor = INT_MIN;

    printf("\nESCREVAR NUMEROS PARA VER QUAL É MAIOR E MENOR\n");
    printf("\nCOLOQUE 0 AO TERMINAR\n");
    printf("\nFORMATO 0 A 10\n");

    while (numero != 0)
    {

        printf("\nNUMERO :");
        scanf("%i", &numero);

        if (numero == 0)
        {
            break;
        }

        if (numero > maior)
        {
            maior = numero;
        }
        else if (numero < menor)
        {
            menor = numero;
        }
    }

    printf("\n\nMenor: %i\n", menor);
    printf("\n\nMaior: %i\n", maior);

    return 0;
}