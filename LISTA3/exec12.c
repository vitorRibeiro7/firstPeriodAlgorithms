#include <stdio.h>

int main()
{
    int start = 1;
    int numero;
    int resposta = 1;

    printf("Qual numero quer multiplicar?\n");
    scanf("%i", &numero);

    while (start <= numero)
    {
        resposta = start * resposta;
        printf("%i", start);
        printf(" + ");
        ++start;
    }

    printf(" = %i", resposta);

    return 0;
}