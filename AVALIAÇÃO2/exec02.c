/* Escreva uma função que recebe uma matriz, bem como suas dimensões (linha e coluna), e gera seu conteúdo seguindo um padrão.
O padrão está apresentado no exemplo abaixo. Dessa forma, você precisa identificar o padrão com base nos valores apresentados no exemplo.

void fillMatrix(int rows, int cols, int m[rows][cols])

Exemplo de uso da função e padrão de números a gerar:

int mat[4][6];
fillMatrix(4, 6, mat);

// Após a chamada da função com as dimensões informadas, 
// a matriz terá sido preenchida com o seguinte padrão de conteúdo:
2 4 6 8 2 4
6 8 2 4 6 8
2 4 6 8 2 4
6 8 2 4 6 8 */

#include <stdio.h>

//DECLARAR FUNÇÃO

void fillMatrix(int rows, int cols, int m[rows][cols]);

//FUNÇÃO PRINCIPAL

int main()
{

    int rows = 4;
    int cols = 6;
    int mat[4][6];

    fillMatrix(rows, cols, mat);

    return 0;
}

//FUNÇÕES

void fillMatrix(int rows, int cols, int m[rows][cols])
{

    int i;
    int j;
    int digit = 2;

    for (i = 0; i < rows; i++)
    {

        for (j = 0; j < cols; j++)
        {
            if (digit > 8)
            {
                digit = 2;
            }

            m[i][j] = digit;
            printf("%i ", m[i][j]);

            digit += 2;
        }
        printf("\n");
    }
}