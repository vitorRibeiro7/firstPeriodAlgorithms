#include <stdio.h>

int main()
{

    int numeroUm;
    int numeroDois;
    int resultado;
    char operador;

    printf("Crie uma operação atraves de caracteres...\n");

    printf("\nOperador:\n");
    scanf("%c", &operador);

    printf("\nPrimeiro numero:\n");
    scanf("%i", &numeroUm);

    printf("\nSegundo numero:\n");
    scanf("%i", &numeroDois);

    if (operador == '+')
    {
        resultado = numeroUm + numeroDois;

        printf("\n\n\n[ CALCULADORA SIMPLEX ]\n\n");
        printf("Operador => %c\n", operador);
        printf("Numero01 => %i\n", numeroUm);
        printf("Numero02 => %i\n", numeroDois);
        printf("Expressao : %i %c %i = %i\n\n", numeroUm, operador, numeroDois, resultado);
    }
    if (operador == '-')
    {
        resultado = numeroUm - numeroDois;

        printf("\n\n\n[ CALCULADORA SIMPLEX ]\n\n");
        printf("Operador => %c\n", operador);
        printf("Numero01 => %i\n", numeroUm);
        printf("Numero02 => %i\n", numeroDois);
        printf("Expressao : %i %c %i = %i\n\n", numeroUm, operador, numeroDois, resultado);
    }
    if (operador == '*')
    {
        resultado = numeroUm * numeroDois;

        printf("\n\n\n[ CALCULADORA SIMPLEX ]\n\n");
        printf("Operador => %c\n", operador);
        printf("Numero01 => %i\n", numeroUm);
        printf("Numero02 => %i\n", numeroDois);
        printf("Expressao : %i %c %i = %i\n\n", numeroUm, operador, numeroDois, resultado);
    }
    if (operador == '/')
    {
        resultado = numeroUm / numeroDois;

        printf("\n\n\n[ CALCULADORA SIMPLEX ]\n\n");
        printf("Operador => %c\n", operador);
        printf("Numero01 => %i\n", numeroUm);
        printf("Numero02 => %i\n", numeroDois);
        printf("Expressao : %i %c %i = %i\n\n", numeroUm, operador, numeroDois, resultado);
    }
    if (operador == '%')
    {
        resultado = numeroUm % numeroDois;

        printf("\n\n\n[ CALCULADORA SIMPLEX ]\n\n");
        printf("Operador => %c\n", operador);
        printf("Numero01 => %i\n", numeroUm);
        printf("Numero02 => %i\n", numeroDois);
        printf("Expressao : %i %c %i = %i\n\n", numeroUm, operador, numeroDois, resultado);
    }

    return 0;
}
