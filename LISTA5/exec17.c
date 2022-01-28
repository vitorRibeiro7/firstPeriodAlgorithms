// Escreva uma função que recebe um vetor vet de tamanho n. O vetor contém inteiros positivos e
// “posições livres”, marcadas com -1. A função deve modificar o vetor, colocando todos os outros
// valores à esquerda.
// void defrag(int n, int vet[n])
// Exemplo:
// int v[9] = {1, 6, -1, 9, 4, -1, -1, 2, -1} // vetor original
// defrag(9, v);
// print_vector(9, v); // saída: 1, 6, 9, 4, 2, -1, -1, -1, -1

#include <stdio.h>

int main()
{

    int v[9] = {1, 6, -1, 9, 4, -1, -1, 2, -1};

    defrag(9, v);

    return 0;
}

void defrag(int n, int vet[n])
{

    int i;
    int j;
    int k;
    int l;

    for (i = 0; i < n; i++)
    {
        if (vet[i] != -1)
        {
            vet[i] = vet[i];
        }
        else
        {
            vet[i] = vet[i + 1];
            vet[i + 1] = -1;
        }
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