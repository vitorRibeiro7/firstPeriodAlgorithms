#include <stdio.h>

int main()
{

    int numero;
    int i;
    int contResto = 0;

    printf("Digite um numero:\n");
    scanf("%i", &numero);

    for (i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            contResto++;
        }
    }

    if (contResto == 2)
    {
        printf("Esse numero e primo.");
    }
    else
    {
        printf("Esse numero não e primo.");
    }

    return 0;
}