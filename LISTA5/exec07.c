/*
Escreva uma função que recebe um vetor vet de tamanho n e imprime seus elementos, separados
por um espaço.
void print_vector(int n, int vet[n])
Exemplo de chamada da função:
int v[] = {2,6,3,2,0,9};
print_vector(6, v); // saída 2 6 3 2 0 9
*/

#include <stdio.h>>

int main()
{

    int v[6] = {2, 6, 3, 2, 0, 9};
    int i;
    int n = 6;
    void print_vector(int n, int v[]);

    printf("Vetor:\n");

    print_vector(n, v);

    return 0;
}

void print_vector(int n, int v[])
{

    int i;

    for (i = 0; i < 6; i++)
    {
        printf("%i", v[i]);
        printf(" ");
    }
}
