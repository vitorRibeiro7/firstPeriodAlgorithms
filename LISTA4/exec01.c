#include <stdio.h>

int main()
{

    int numero = 0;
    int multiplicador = 0;
    int resultado;

    while (multiplicador <= 10)
    {
        while (numero <= 10)
        {
            resultado = numero * multiplicador;

            printf("%i x %i = %i\n", multiplicador, numero, resultado);

            numero++;
        }

        printf("\n");

        numero = 0;

        multiplicador++;
    }

    return 0;
}