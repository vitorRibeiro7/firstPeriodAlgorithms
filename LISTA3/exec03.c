#include <stdio.h>

int main()
{

    char letraEscolhida;
    char letraMaiuscula;

    printf("Escolha um caracter para se tornar maiusculo.\n\n");
    scanf("%c", &letraEscolhida);

    letraMaiuscula = letraEscolhida - 32;

    if ((letraEscolhida >= 'a') && (letraEscolhida <= 'z'))
    {

        printf("\n\nAqui esta sua letra %c maiuscula: %c\n\n", letraEscolhida, letraMaiuscula);
    }
    else
    {

        printf("\n\n###### #####  #####   ####  #####  \n");
        printf("#      #    # #    # #    # #    # \n");
        printf("#####  #    # #    # #    # #    # \n");
        printf("#      #####  #####  #    # #####  \n");
        printf("#      #   #  #   #  #    # #   #  \n");
        printf("###### #    # #    #  ####  #    # \n\n");

        printf("O caracter %c, nao e valido para se tornar maiusculo!!\n\n", letraEscolhida);
    }

    return 0;
}