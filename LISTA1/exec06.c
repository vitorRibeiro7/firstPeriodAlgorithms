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
    PRIMEIRA VERSÃO, SETANDO MANUALMENTE CADA NUMERO A VARIAVEL 'NUMERO'
    */

    numero = 0;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = 1;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = 2;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = 3;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = 4;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = 5;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = 6;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = 7;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = 8;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = 9;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    numero = 10;
    resultado = numero * multiplicador;
    printf("%i x %i = %i\n", multiplicador, numero, resultado);

    return 0;
}