/*
4. Escreva uma função que verifica se o parâmetro é um número perfeito. Um número perfeito é um
inteiro positivo que é igual a soma de seus divisores positivos, excluindo o próprio número.
Exemplo: 6 tem os divisores 1, 2 e 3 (excluindo o próprio 6), e 1 + 2 + 3 = 6. Logo, 6 é um número
perfeito. A função deve devolver 1 (true) se número positivo ou 0 (false), caso contrário.
*/

#include <stdio.h>

int main()
{

    int numero;
    int is_perfect_number(int numero);

    printf("Escolha um numero\n Faremos a verificação se é um numero perfeito.\n");
    scanf("%i", &numero);

    numero = numero - 1;

    is_perfect_number(numero);

    return 0;
}

int is_perfect_number(int numero)
{

    if (numero < 0)
    {
        printf("Numeros perfeitos precisam ser negativos!");
        return 0;
    }

    int soma = 0;
    int i;
    int j;

    for (i = 0; i != numero; i++)
    {

        if (i % numero == 0)
        {
            soma = soma + i;
        }

        if (soma = numero)
        {
            printf("Eh um numero perfeito.");
            return 1;
        }
        else
        {
            printf("Não eh um numero perfeito.");
            return 0;
        }
    }
}
