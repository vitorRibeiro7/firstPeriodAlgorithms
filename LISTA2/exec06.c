#include <stdio.h>

int main()
{

    int numberOne;
    int numberTwo;
    int numberThree;
    int numberFour;
    int aux;

    printf("Escolha quatro numeros.\n\n");

    printf("\n\nPrimeiro numero:\n\n");
    scanf("%i", &numberOne);

    printf("\n\nSegundo numero:\n\n");
    scanf("%i", &numberTwo);

    printf("\n\nTerceiro numero:\n\n");
    scanf("%i", &numberThree);

    printf("\n\nQuarto numero:\n\n");
    scanf("%i", &numberFour);

    if (numberOne > numberTwo)
    {
        aux = numberOne;
        numberOne = numberTwo;
        numberTwo = aux;
    }

    if (numberTwo > numberThree)
    {
        aux = numberTwo;
        numberTwo = numberThree;
        numberThree = aux;
    }

    if (numberThree > numberFour)
    {
        aux = numberThree;
        numberThree = numberFour;
        numberFour = aux;
    }

    printf("O maior valor é: %i", numberFour);

    return 0;
}