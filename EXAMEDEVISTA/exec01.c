//BILBIOTECAS
#include <stdio.h>

//DECLARAÇÃO DA FUNÇÃO
int sorted(int n, int v[n]);

//FUNÇÃO PRINCIPAL
int main()
{

    int vet1[6] = {1, 5, 3, 9, 46, 1};
    int vet2[6] = {1, 5, 9, 15, 46, 512};

    int res = sorted(6, vet1);

    return 0;
}

//FUNÇÕES
int sorted(int n, int v[n])
{
    int i;
    int contador = 0;

    for (i = 0; i < n - 1; i++)
    {
        if (v[i + 1] < v[i])
        {
            contador++;
        }
    }

    if (contador == 0)
    {
        return 1;
    }
    else if (contador > 0)
    {
        return 2;
    }
}