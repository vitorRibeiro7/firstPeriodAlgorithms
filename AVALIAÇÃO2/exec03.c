/* Escreva uma função que recebe um vetor, conta e imprime a quantidade de números positivos, negativos e zeros.

void count_pos_neg_zeros(int n, int vet[n]) */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//DECLARAR FUNÇÃO

void count_pos_neg_zeros(int n, int vet[n]);

//FUNÇÃO PRINCIPAL

int main()
{

    int size = 12;
    int vet1[] = {-2, -4, -5, 2, 0, 3, 23, 4, 54, 13, 17, 0};

    count_pos_neg_zeros(12, vet1);

    return 0;
}

//FUNÇÕES

void count_pos_neg_zeros(int n, int vet[n])
{

    int i;
    int j;
    int positivo = 0;
    int negativo = 0;
    int zeros = 0;

    for (i = 0; i < n; i++)
    {
        if (vet[i] == 0)
        {
            zeros++;
        }
        else if (vet[i] > 0)
        {
            positivo++;
        }
        else if (vet[i] < 0)
        {
            negativo++;
        }
    }

    printf("Negativos: %i / Positivos: %i / Zeros: %i ", negativo, positivo, zeros);
}