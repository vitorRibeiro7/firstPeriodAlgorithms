/*
6. Escreva uma função que calcula e devolve a soma dos fatoriais até um dado número.

Função: int factorial_sum(int n)

Exemplo de uso:
int res = factorial_sum(5); // 1! + 2! + 3! + 4! + 5! = 153
DICA: observe a representação dos cálculos.
1! + 2! + 3! + 4! + 5! = 153, é o mesmo que:
1! = 1 = 1 +
2! = 1 x 2 = 2 +
3! = 1 x 2 x 3 = 6 +
4! = 1 x 2 x 3 x 4 = 24 +
5! = 1 x 2 x 3 x 4 x 5= 120
153

*/

int main()
{

    int numero;
    int factorial_sum(int numero);
    int soma;

    printf("Escolha um numero, vamos calcular a soma dos fatoriais até ele:\n");
    scanf("%i", &numero);

    soma = factorial_sum(numero);

    printf("\nResultado: %i\n", soma);

    return 0;
}

int factorial_sum(int numero)
{

    int i;
    int j;
    int multi = 1;
    int somaMulti = 0;
    int soma = 0;

    for (i = 1; i <= numero; i++)
    {

        for (j = 1; j <= i; j++)
        {
            multi = multi * j;
        }

        somaMulti = somaMulti + multi;
        soma = soma + somaMulti;
        somaMulti = 0;
        multi = 1;
    }

    return soma;
}