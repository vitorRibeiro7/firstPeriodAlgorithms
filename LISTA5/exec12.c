// Escreva uma função que recebe um vetor vet de tamanho n. A função deve imprimir o maior e o
// menor valores contidos no vetor.
// void find_min_max(int n, int vet[n])

#include <stdio.h>
#include <math.h>

int main(void)
{

    int vet[] = {1, 23, 4, 8, 38, 7, 3};
    int n = 7;
    void find_min_max(int n, int vet[n]);

    find_min_max(n, vet);

    return 0;
}

void find_min_max(int n, int vet[n])
{

    int max = 0;
    int min = 999;
    int i;

    for (i = 0; i < n; i++)
    {
        if (vet[i] > max)
        {
            max = vet[i];
        }

        if (vet[i] < min)
        {
            min = vet[i];
        }
    }

    printf("Menor = %i e Maior = %i\n", min, max);
}