// Escreva uma função que recebe um vetor vet de tamanho n e modifica, preenchendo-o com
// potências de 2.
// void make_power_of_two(int n, int vet[n])
// Exemplo de uso da função:
// int v[10];
// make_power_of_two(10, v); // preenche o vetor
// print_vector(10, v); // saída: 1, 2, 4, 8, 16, 32, 64, 128, 256, 512

#include <stdio.h>

int main()
{
    int v[10];
    int n = 10;
    int num = 1;

    print_vector(n, v, num);

    return 0;
}

int print_vector(int n, int v[], int num)
{

    int i;

    v[0] = 1;

    printf("%i, ", v[0]);

    for (i = 1; i < n; i++)
    {

        num = num * 2;

        v[i] = num;

        printf("%i", v[i]);

        if (i < n - 1)
        {
            printf(", ");
        }
    }
}