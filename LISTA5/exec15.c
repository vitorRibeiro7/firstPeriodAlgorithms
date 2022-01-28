// Escreva uma função que verifica se os elementos de um vetor estão em ordem crescente. A função
// deve retornar 1 (true), caso os elementos estejam dispostos em ordem crescente, ou 0 (false), em
// caso contrário.
// int is_sorted(int n, int vet[n])
// Exemplo de uso da função:
// int v[] = {1,4,7,9,15,22,48,512};
// int res = is_sorted(8, v); // neste caso, res = 1 (true)

#include <stdio.h>

int main()
{

    int v[] = {1, 4, 7, 9, 15, 22, 48, 512};
    int is_sorted(int n, int vet[n]);

    is_sorted(8, v);

    return 0;
}

int is_sorted(int n, int vet[n])
{

    int i;
    int last = 0;
    int count = 0;

    last = vet[0];

    for (i = 1; i < n; i++)
    {
        if (last > vet[i])
        {
            count++;
        }

        last = vet[i];
    }

    if (count > 0)
    {
        printf("0");
        return 0;
    }
    else
    {
        printf("1");
        return 1;
    }
}