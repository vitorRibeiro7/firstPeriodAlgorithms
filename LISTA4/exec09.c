#include <stdio.h>

int main()
{

    int closer;
    int a = 0;
    int b = 0;
    int soma;
    int multiplicacao;

    printf("VAMOS CALCULAR DE FORMA TECNOLOGICA!!\n");

    while (closer != 6)
    {

        printf("\n\n--------------------------------------------------\n");
        printf("SUM SUPREME!                     A: %i B: %i\n", a, b);
        printf("--------------------------------------------------\n");
        printf("1 - Set A\n");
        printf("2 - Set b\n");
        printf("3 - Show A+B\n");
        printf("4 - Show AxB\n");
        printf("5 - exit\n\n\n");

        scanf("%i", &closer);

        if (closer == 1)
        {
            printf("\nSet valor A:\n");
            scanf("%i", &a);
        }
        if (closer == 2)
        {
            printf("\nSet valor B:\n");
            scanf("%i", &b);
        }
        if (closer == 3)
        {
            soma = a + b;
            printf("\nA + B =%i\n", soma);
        }
        if (closer == 4)
        {
            multiplicacao = a * b;
            printf("\nA x B =%i\n", multiplicacao);
        }
        if (closer == 5)
        {
            printf("\nParando...\n\n");
            break;
        }
    }

    return 0;
}