#include <stdio.h>

int main()
{

    int largura;
    int altura;
    int i;
    int j;
    int k = j - 1;

    printf("VAMOS CRIAR UM QUADRADO!!\n");

    printf("\nQUANTO DE LARGURA?\n");
    scanf("%i", &largura);

    printf("\nQUANTO DE ALTURA?\n");
    scanf("%i", &altura);
    printf("\n");

    for (i = 0; i < altura; i++)
    {

        printf("[");

        for (j = 0; j < largura - 1; j++)
        {
            printf("X");
            printf("-");
        }

        printf("X]\n");
    }

    return 0;
}