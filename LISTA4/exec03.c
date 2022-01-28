#include <stdio.h>

int main()
{

    int largura;
    int altura;
    int i;
    int j;

    printf("VAMOS CRIAR UM QUADRADO!!\n");

    printf("\nQUANTO DE LARGURA?\n");
    scanf("%i", &largura);

    printf("\nQUANTO DE ALTURA?\n");
    scanf("%i", &altura);

    for (i = 1; i <= altura; i++)
    {
        for (j = 1; j <= largura; j++)
        {
            printf("X ");
        }

        printf("\n");
    }

    return 0;
}