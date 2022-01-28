#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_matrix(int rows, int cols, int m[rows][cols]);
void print_reversed(int rows, int cols, int m[rows][cols]);
void print_min_max(int rows, int cols, int m[rows][cols]);
float average(int rows, int cols, int m[rows][cols]);
void init_values(int rows, int cols, int m[rows][cols], int start, int step);
void init_random(int rows, int cols, int m[rows][cols]);
int max_line(int rows, int cols, int m[rows][cols]);
void put_totals(int rows, int cols, int m[rows][cols]);
int matrix_equals(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2]);
void sum(int rows, int cols, int m1[rows][cols], int m2[rows][cols]);
void transpose(int r1, int c1, int m1[r1][c1]);
void switch_diagonals(int d, int m1[d][d]);

int main(void)
{
    int mat1[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};

    int mat2[4][6];

    int mat3[3][3] = {{1, 2, 3},
                      {4, 3, 6},
                      {7, 8, 9}};

    int mat4[2][3] = {{1, 2, 3},
                      {4, 5, 6}};

    return 0;
}

void print_matrix(int rows, int cols, int m[rows][cols])
{

    int i;
    int j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%.2i ", m[i][j]);
        }
        printf("\n");
    }
}

void print_reversed(int rows, int cols, int m[rows][cols])
{

    int i;
    int j;

    for (i = rows - 1; i >= 0; i--)
    {
        for (j = cols - 1; j >= 0; j--)
        {
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }
}

void print_min_max(int rows, int cols, int m[rows][cols])
{

    int i;
    int j;
    int max = 0;
    int min = 999;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (m[i][j] > max)
            {
                max = m[i][j];
            }
            if (m[i][j] < min)
            {
                min = m[i][j];
            }
        }
    };
    printf("Maior: %i / Menor: %i", max, min);
}

float average(int rows, int cols, int m[rows][cols])
{

    int i;
    int j;
    float soma = 0;
    float media = 0;
    float count = 0;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            soma = soma + m[i][j];
            count++;
        }
    }

    media = soma / count;

    printf("Media: %1.f", media);

    return media;
}

void init_values(int rows, int cols, int m[rows][cols], int start, int step)
{

    int i;
    int j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            m[i][j] = start;
            printf("%i ", m[i][j]);
            start = start + step;
        }
        printf("\n");
    }
}

void init_random(int rows, int cols, int m[rows][cols])
{ // exec06 - min max rand
    int min = 5, max = 50 - min;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            m[i][j] = rand() % max + min;
            printf(" %2d", m[i][j]);
        }
        printf("\n");
    }
}

int max_line(int rows, int cols, int m[rows][cols])
{ // exec07 - maior soma linhas
    int maiorSoma = 0;
    for (int i = 0; i < rows; i++)
    {
        int soma = 0;
        for (int j = 0; j < cols; j++)
        {
            //m[i][j] = rand() % 10;
            soma = soma + m[i][j];
        }
        if (soma > maiorSoma)
        {
            maiorSoma = soma;
        }
    }

    return maiorSoma;
}

void put_totals(int rows, int cols, int m[rows][cols])
{ // exec08 - soma na ultima coluna
    for (int i = 0; i < rows; i++)
    {
        int soma = 0;
        for (int j = 0; j < cols; j++)
        {
            soma = soma + m[i][j];
            printf("%2d ", m[i][j]);
        }
        printf("%2d\n", soma);
    }
}

int matrix_equals(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2])
{ // exec09 - Igualdade
    int retorno = 1;
    if (r1 == r2 && c1 == c2)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < r2; j++)
            {
                if (m1[i][j] != m2[i][j])
                {
                    retorno = 0;
                }
            }
        }
    }
    else
    {
        retorno = 0;
    }
    return retorno;
}

void sum(int rows, int cols, int m1[rows][cols], int m2[rows][cols])
{ // exec10 - Soma Matriz
    int m3[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
            printf("%2d ", m3[i][j]);
        }
        printf("\n");
    }
}

void transpose(int r1, int c1, int m1[r1][c1])
{ // exec11 - Matriz transposta
    int r2 = c1, c2 = r1;
    int m2[r2][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            m2[j][i] = m1[i][j];
        }
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }
}

void switch_diagonals(int d, int m1[d][d])
{ // exec12 - Troca diagonais
    int aux = 0;
    for (int i = 0; i < d; i++)
    {
        if (i != d / 2)
        {
            aux = m1[i][i];
            m1[i][i] = m1[i][d - i - 1];
            m1[i][d - i - 1] = aux;
        }
    }
}
