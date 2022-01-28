#include <stdio.h>

int main()
{

    int numberSelected;

    printf("informe um nomero.\n\n\n");
    scanf("%i", &numberSelected);

    if (numberSelected >= 0)
    {
        printf("Seu numero e positivo e com valor %i", numberSelected);
    }
    if (numberSelected < 0)
    {
        printf("Seu numero e negativo e com valor %i", numberSelected);
    }

    return 0;
}