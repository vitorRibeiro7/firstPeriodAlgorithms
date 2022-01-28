// Escreva uma função que recebe um vetor vet de tamanho n e devolve a média aritmética simples
// dos valores contidos.
// float vector_avg(int n, int vet[n])
// Exemplo de uso da função:
// int v[] = {1, 23, 4, 8, 38, 7, 3};
// float res = vector_avg(7, v);
// printf(“Media: %.2f\n”, res); // Media: 12.00

#include <stdio.h>

int main()
{

    int v[] = {1, 23, 4, 8, 38, 7, 3};
    int n = 7;
    float vector_avg(int v[], int n);
    int res;

    res = vector_avg(v, n);

    printf("Media: %i", res);

    return 0;
}

float vector_avg(int v[], int n)
{

    int i;
    int somaNum = 0;
    int res;

    for (i = 0; i < n; i++)
    {
        somaNum = somaNum + v[i];
    }

    res = somaNum / n;

    return res;
}
