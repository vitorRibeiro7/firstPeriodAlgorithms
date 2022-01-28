/*
Escreva uma função que recebe um vetor vet de tamanho n e imprime seus elementos segundo o
formato apresentado no exemplo abaixo: vetor entre colchetes e com uma vírgula separando seus
elementos, exceto para o último:
void print_vector_plus(int n, int vet[n])
Exemplo de chamada da função:
int v[] = {2,6,3,2,0,9};
print_vector(6, v); // saída [2, 6, 3, 2, 0, 9]
*/

#include <stdio.h>>

int main()
{

    int v[] = {2, 6, 3, 2, 0, 9};
    int i;
    int n = 6;
    void print_vector_plus(int n, int v[]);

    printf("Vetor:\n");

    print_vector_plus(n, v);

    return 0;
}

void print_vector_plus(int n, int v[])
{

    int i;

    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%i", v[i]);

        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]");
}