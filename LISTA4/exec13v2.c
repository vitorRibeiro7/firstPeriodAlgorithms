#include <stdio.h>

int main()
{

    int cima;
    int cimaCount;
    int baixo;
    int baixoCount;
    int direita;
    int esquerda;
    int limiter = 10;
    int i, j, k, l, m, n, o;
    char move;
    int largura;
    int altura;
    char background;
    char player;

    printf("VAMOS MONTAR O MAPA!!\n");
    printf("LARGURA DO MAPA:\n");
    scanf("%i", &largura);
    printf("\nALTURA DO MAPA:\n");
    scanf("%i", &altura);
    printf("\nCARACTER DE BACKGROUND:\n");
    scanf(" %c", &background);
    printf("\nCARACTER PLAYER:\n");
    scanf(" %c", &player);

    cima = (altura / 2) - 1;
    cimaCount = largura;
    baixo = altura / 2;
    baixoCount = largura;
    direita = (largura / 2) - 1;
    esquerda = largura / 2;

    printf("MEXA O BONECO COIM W A S D\n");

    while (limiter != 0)
    {

        system("cls");

        printf("MEXA O BONECO COIM W A S D\n");

        printf("\n");

        for (o = 0; o < baixoCount + 4; o++)
        {
            printf("H");
        }

        printf("\n");

        for (i = 0; i < cima; i++)
        {
            printf("| ");
            for (j = 0; j < cimaCount; j++)
            {
                printf("%c", background);
            }
            printf(" |");
            printf("\n");
        }

        printf("| ");

        for (k = 0; k < esquerda; k++)
        {
            printf("%c", background);
        }
        printf("%c", player);
        for (l = 0; l < direita; l++)
        {
            printf("%c", background);
        }
        printf(" |");

        printf("\n");

        for (m = 0; m < baixo; m++)
        {
            printf("| ");
            for (n = 0; n < baixoCount; n++)
            {
                printf("%c", background);
            }
            printf(" |");
            printf("\n");
        }
        for (o = 0; o < baixoCount + 4; o++)
        {
            printf("H");
        }

        printf("\n");
        printf("\n");

        printf("MOVIMENTO (WASD):");

        scanf(" %c", &move);

        if (move == 'w') //MOVIMENTOS
        {
            cima--;
            baixo++;
        }
        else if (move == 'a')
        {
            direita++;
            esquerda--;
        }
        else if (move == 's')
        {
            baixo--;
            cima++;
        }
        else if (move == 'd')
        {
            direita--;
            esquerda++;
        }

        if (direita < 0) //LIMITE DE MAPA
        {
            esquerda--;
            direita++;
        }
        else if (esquerda < 0)
        {
            direita--;
            esquerda++;
        }
        else if (cima < 0)
        {
            cima++;
            baixo--;
        }
        else if (baixo < 0)
        {
            baixo++;
            cima--;
        }
    }

    return 0;
}