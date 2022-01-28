#include <stdio.h>

int main()
{

    int ano;

    printf("\nDigite um ano para saber se é bissexto\n\n");
    scanf("%i", ano);

    if (ano % 4 == 0)
    {
        printf("\nO ano é bissexto\n\n");
    }
    if (ano % 4 != 0)
    {
        printf("\nO ano não é bisexto\n\n");
    }

    return 0;
}