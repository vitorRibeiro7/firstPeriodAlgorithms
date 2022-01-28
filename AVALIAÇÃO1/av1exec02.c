#include <stdio.h>

int main()
{

    int nNumeros;
    int num = 1;
    int soma = 0;
    int media;

    printf("Escreva quantos numeros deseja\n");
    scanf("%i", &nNumeros);

    printf("\n\nNumeros: %i\n", nNumeros);
    printf("Numeros: ");

    while (num <= nNumeros)
    {

        if (num % 7 == 0)
        {
            if (num % 2 == 0)
            {
                printf("(");
                printf("%i", num);
                printf(") ");
            }
            else
            {
                printf("%i ", num);
            }
        }
        else if (num % 5 == 0)
        {
            if (num % 2 != 0)
            {
                printf("[");
                printf("%i", num);
                printf("] ");
            }
            else
            {
                printf("%i ", num);
            }
        }
        else
        {

            printf("%i ", num);
        }
        soma = soma + num;

        num++;
    }

    num = num - 1;

    media = soma / num;

    printf("\n\n");
    printf("Média = %i", media);

    return 0;
}
