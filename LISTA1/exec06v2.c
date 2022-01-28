#include <stdio.h>

int main()
{

    int numero;
    int multiplicador;
    int resultado;

    printf("Escreva qual tabuada deseja. Ex: x\n");
    scanf("%i", &multiplicador);

    printf("Aqui vai a tabuada do: %i\n", multiplicador);

    /*
    SEGUNDA VERSÃO, ADICIOANDO +1 AUTOMATICAMENTE A VARIAVEL 'NUMERO'
    */

    numero = 0;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = numero + 1;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = numero + 1;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = numero + 1;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = numero + 1;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = numero + 1;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = numero + 1;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = numero + 1;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = numero + 1;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = numero + 1;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = numero + 1;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    return 0;
}