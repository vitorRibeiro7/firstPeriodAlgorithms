// Escreva uma função que recebe um vetor vet de tamanho n e o modifica, invertendo as posições
// dos seus elementos. Note que a função deve trocar os valores no vetor e não apenas imprimi-lo ao
// contrário.
// void reverse(int n, int vet[n])
// Exemplo de chamada da função:
// int v[] = {1,4,6,7,3};
// reverse(5, v);
// print_vector(5, v); // saída: 3, 7, 6, 4, 1

#include <stdio.h>

int main()
{

    int v[] = {1, 4, 6, 7, 3};
    void reverse(int n, int vet[n]);

    reverse(5, v);

    return 0;
}

void reverse(int n, int vet[n])
{

    int i;
    int j;
    int k = 0;
    int l;
    int reserva[5] = {};

    for (i = 0; i < n; i++)
    {
        reserva[i] = vet[i];
    }

    for (j = 4; j >= 0; j--)
    {
        vet[k] = reserva[j];
        k++;
    }

    printf("[");
    for (l = 0; l < n; l++)
    {
        printf("%i", vet[l]);

        if (l < n - 1)
        {
            printf(", ");
        }
    }
    printf("]");
}