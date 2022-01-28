// 11. Escreva uma função que recebe um vetor vet de tamanho n, bem como, um elemento elem a ser
// procurado. A função deve retornar a posição (índice) do elemento ou -1 caso ele não esteja no
// vetor.
// int find(int n, int vet[n], int elem)

#include <stdio.h>

int main()
{
    int n = 7;
    int vet[] = {1, 23, 4, 8, 38, 7, 3};
    int elem;
    int find(int n, int vet[n], int elem);

    printf("Qual numero deseja verificar?\n");
    scanf("%i", &elem);

    find(n, vet, elem);

    return 0;
}

int find(int n, int vet[n], int elem)
{

    int i;
    int ver = 0;

    for (i = 0; i < n; i++)
    {
        if (vet[i] == elem)
        {
            printf("Numero encontrado\n");
            return i;
        }
        else
        {
            ver++;
        }
    }

    if (ver == n)
    {
        printf("Numero não encontrado");
        return -1;
    }
}