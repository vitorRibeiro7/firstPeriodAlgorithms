#include <stdio.h>

int main()
{

    int numero = 1;
    int numeroLimite;
    int soma = 0;
    int aoQuadrado;
    int somaDosNumerosAoQuadrado = 0;
    int quadradoDaSomaDosNumeros = 0;
    int i;
    int j;
    int diferenca = 0;

    printf("Escolha numero :)\n");
    scanf("%i", &numeroLimite);

    for (i = 0; i < numeroLimite; i++)
    {
        aoQuadrado = numero * numero;
        somaDosNumerosAoQuadrado = somaDosNumerosAoQuadrado + aoQuadrado;

        numero++;
    }

    numero = 1; //reset do valor de "numero".

    for (j = 0; j < numeroLimite; j++)
    {
        soma = soma + numero;
        quadradoDaSomaDosNumeros = soma * soma;

        numero++;
    }

    printf("\nSoma dos quadrados: %i\n", somaDosNumerosAoQuadrado);
    printf("\nQuadrado da soma: %i\n", quadradoDaSomaDosNumeros);

    diferenca = quadradoDaSomaDosNumeros - somaDosNumerosAoQuadrado;

    printf("\nE A DIFERENCA ENTRE ELES e DE: %i\n\n\n", diferenca);

    return 0;
}