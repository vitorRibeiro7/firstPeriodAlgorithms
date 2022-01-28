#include <stdio.h>

int main()
{

    int largura;
    int altura;
    int i;
    int j;

    printf("VAMOS CRIAR UM QUADRADO!!\n");

    printf("\nQUANTO DE ALTURA?\n");
    scanf("%i", &altura);

    printf("\nQUANTO DE LARGURA?\n");
    scanf("%i", &largura);

    printf("+");

    largura = largura;

    altura = altura;

    for (j = 1; j <= largura; j++)
    {
        printf("-");
    }

    printf("+");

    printf("\n");

    for (i = 1; i <= altura; i++)
    {

        printf("|");

        for (j = 1; j <= largura; j++)
        {
            printf(" ");
        }
        printf("|");

        printf("\n");
    }

    printf("+");

    for (j = 1; j <= largura; j++)
    {
        printf("-");
    }
    printf("+");

    printf("\n");

    return 0;
}