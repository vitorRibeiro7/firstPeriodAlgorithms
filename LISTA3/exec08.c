#include <stdio.h>

int main()
{

    int numerador = 0;
    int multiplicador;
    int resultado;

    printf("\nQual tabuada deseja?\n\n");
    scanf("%i", &multiplicador);

    while (numerador <= 10)
    {
        resultado = numerador * multiplicador;
        printf("\n%i x %i = %i", multiplicador, numerador, resultado);
        numerador++;
    }

    printf("\n");

    return 0;
}