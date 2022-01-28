//BILBIOTECAS
#include <stdio.h>

//DECLARAÇÃO DA FUNÇÃO
void fill_matrix(int rows, int cols, int m[rows][cols]);

//FUNÇÃO PRINCIPAL
int main()
{

    int mat[10][12];

    fill_matrix(10, 12, mat);

    return 0;
}

//FUNÇÕES
void fill_matrix(int rows, int cols, int m[rows][cols])
{

    int digit = 1;
    int i;
    int j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {

            if (i == 0)
            {
                m[i][j] = digit;
                digit++;
            }

            if (i > 0 && i != 0)
            {
                m[i][j] = 99;
            }

            if (i == rows - 1 && i != 0)
            {
                m[i][j] = digit;
                digit++;
            }
        }
    }
}