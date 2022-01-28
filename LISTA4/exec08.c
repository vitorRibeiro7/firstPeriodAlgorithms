#include <stdio.h>
int main()
{
    int rows;
    int k = 1;
    int number = 1;

    printf("Informe um numero inteiro e positivo de linhas desejadas do Triangulo de Floyd:\n");
    scanf("%d", &rows);

    if (rows < 0)
    {
        printf("Erro, necessario numero inteiro e positivo!!!");
    }
    else
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                printf("%d ", number);
                number++;
            }
            printf("\n");
            k++;
        }
    }

    return 0;
}