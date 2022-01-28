#include <stdio.h>
#include <stdlib.h>

int isPrime(int numero)
{

    int i;
    int contResto = 0;

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
        return 1;
    }
    else
    {
        printf("Esse numero não e primo.");
        return 0;
    }
}

int main()
{

    int numero;
    int isPrime(int numero);

    printf("Digite um numero:\n");
    scanf("%i", &numero);

    isPrime(numero);

    return 0;
}