/* Escreva uma função que recebe dois vetores (vet1 e vet2) de mesmo tamanho (n).
A função deve copiar o conteúdo de vet1 em vet2, isto é, atribui todos os elementos de vet1 para vet2.
void vector_copy(int n, int vet1[n], int vet2[n]) */

#include <stdio.h>

void vector_copy(int n, int vet1[n], int vet2[n]);

int main()
{

    int size = 7;
    int vet1[7] = {1, 23, 4, 8, 38, 7, 3};
    int vet2[7] = {};

    vector_copy(7, vet1, vet2);

    return 0;
}

void vector_copy(int n, int vet1[n], int vet2[n])
{

    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        vet2[i] = vet1[i];
    }

    for (j = 0; j < n; j++)
    {
        printf("%i ", vet2[j]);
    }
}