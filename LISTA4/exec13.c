#include <stdio.h>

int main()
{

    int cima = 4;
    int cimaCount = 20;
    int baixo = 5;
    int baixoCount = 20;
    int right = 10;
    int left = 9;
    char move;
    int i, j, k, l, m, n;
    int limiter = 10;

    printf("MOVA O X USANDO  W A S D\n\n");

    while (limiter == 10)
    {
        printf("__________________________\n");
        printf("MOVA O PERSONAGEM\n");

        for (i = 0; i < cima; i++)
        {
            for (j = 0; j < cimaCount; j++)
            {
                printf(".");
            }
            printf("\n");
        }
        for (k = 0; k < left; k++)
        {
            printf(".");
        }
        printf("X");
        for (l = 0; l < right; l++)
        {
            printf(".");
        }
        printf("\n");
        for (m = 0; m < baixo; m++)
        {
            for (n = 0; n < baixoCount; n++)
            {
                printf(".");
            }
            printf("\n");
        }

        printf("\n__________________________\n");
        printf("ENTRE COM A DIREÇÃO (WASD): ");
        scanf(" %c", &move);
        printf("\n__________________________\n");

        if (move == 'w' || move == 'W')
        {
            cima--;
            baixo++;
        }
        else if (move == 'a' || move == 'A')
        {
            left--;
            right++;
        }
        else if (move == 's' || move == 'S')
        {
            baixo--;
            cima++;
        }
        else if (move == 'd' || move == 'D')
        {
            right--;
            left++;
        }
    }

    return 0;
}