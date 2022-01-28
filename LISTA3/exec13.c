#include <stdio.h>

int main()
{

    float nota;
    float notaDivisor = 0;
    float media;
    float somaNota = 0;

    printf("\nESCREVA SUAS NOTAS PARA CALCULAR A MÉDIA:\n");
    printf("\nCOLOQUE 0 AO TERMINAR\n");
    printf("\nFORMATO 0 A 10\n");

    while (nota != 0)
    {
        printf("\nNota:");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10)
        {
            printf("Use notas de 0 a 10.");

            return 1;
        }

        somaNota = nota + somaNota;
        notaDivisor++;
    }

    notaDivisor = notaDivisor - 1;

    media = somaNota / notaDivisor;

    printf("\nNota: %f", somaNota);
    printf("\nMedia: %f", media);

    return 0;
}