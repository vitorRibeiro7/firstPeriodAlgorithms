/*
Escreva uma função que recebe um vetor vet de tamanho n e imprime apenas os valores que
estão em posições pares.
void print_even(int n, int vet[n])
Exemplo de chamada da função:
int v[] = { 2, 6, 3, 2, 0, 9,25,32,-4};
//posições: 0 1 2 3 4 5 6 7 8
print_even(9, v); // saída 3 0 25 -4
*/

#include <stdio.h>>

int main()
{

    int v[] = {2, 6, 3, 2, 0, 9};
    int i;
    int n = 6;
    void print_even(int n, int v[]);

    printf("Vetor:\n");

    print_even(n, v);

    return 0;
}

void print_even(int n, int v[])
{

    int i;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0 && i != 0)
        {
            printf("%i", v[i]);
            printf(" ");
        }
    }
}