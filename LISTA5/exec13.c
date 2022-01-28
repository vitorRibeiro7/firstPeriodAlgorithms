// 13. Escreva uma função que recebe um vetor vet de tamanho n, bem como, um elemento elem a ser
// procurado. A função deve modificar o vetor, substituir todas as ocorrência de elem por -1.
// void replace_all(int n, int vet[n], int elem)

#include <stdio.h>

int main()
{

    int vet[] = {1, 23, 4, 8, 38, 7, 3};
    int n = 7;
    int elem;
    void replace_all(int n, int vet[], int elem);
    void print_vector(int n, int v[]);

    printf("Escolha um numero a ser modificado:\n");
    scanf("%i", &elem);

    replace_all(n, vet, elem);
    print_vector(n, vet);

    return 0;
}

void replace_all(int n, int vet[], int elem)
{

    int i;
    int ver = 0;

    for (i = 0; i < n; i++)
    {
        if (vet[i] == elem)
        {
            vet[i] = -1;
        }
        else
        {
            ver++;
        }
    }

    if (ver == n)
    {
        printf("numero não encontrado.");
        return -1;
    }
}

void print_vector(int n, int v[])
{

    int i;

    for (i = 0; i < n; i++)
    {
        printf("%i", v[i]);
        printf(" ");
    }
}