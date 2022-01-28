#include <stdio.h>

int main()
{

    int numeroSelecionado;
    int primeiro;
    int segundo;
    int terceiro;
    int quarto;
    int quinto;

    printf("Escolha um numero de 5 digitos.\n\n");
    scanf("%i", &numeroSelecionado);

    if (numeroSelecionado < 10000 || numeroSelecionado > 99999)
    {

        printf("\n\n###### #####  #####   ####  #####  \n");
        printf("#      #    # #    # #    # #    # \n");
        printf("#####  #    # #    # #    # #    # \n");
        printf("#      #####  #####  #    # #####  \n");
        printf("#      #   #  #   #  #    # #   #  \n");
        printf("###### #    # #    #  ####  #    # \n\n");

        printf("VOCÊ DEVE ESCOLHER UM NUMERO COM 5 DIGITOS!! \n\nENTRE 10000 E 99999!\n\n");

        return 1;
    }

    quinto = numeroSelecionado % 10;

    printf("%i\n", quinto);

    numeroSelecionado = numeroSelecionado / 10;
    quarto = numeroSelecionado % 10;

    printf("%i\n", quarto);

    numeroSelecionado = numeroSelecionado / 10;
    terceiro = numeroSelecionado % 10;

    printf("%i\n", terceiro);

    numeroSelecionado = numeroSelecionado / 10;
    segundo = numeroSelecionado % 10;

    printf("%i\n", segundo);

    numeroSelecionado = numeroSelecionado / 10;
    primeiro = numeroSelecionado % 10;

    printf("%i\n", primeiro);

    return 0;
}