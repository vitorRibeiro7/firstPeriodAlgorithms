#include <stdio.h>

int main()
{

    //VARIAVEIS

    float notaUm;
    float notaDois;
    float notaTres;
    float mediaAritimetica;

    //LEITURA

    printf("\n\nEscreva sua nota de cada trimestre. (formato 0 a 10 )\n\n");

    printf("Primeiro trimestre:\n");
    scanf("%f", &notaUm);

    printf("Segundo trimestre:\n");
    scanf("%f", &notaDois);

    printf("Terceiro trimestre:\n");
    scanf("%f", &notaTres);

    //ERROS

    if (notaUm < 0 || notaUm > 10)
    {

        printf("\n\n###### #####  #####   ####  #####  \n");
        printf("#      #    # #    # #    # #    # \n");
        printf("#####  #    # #    # #    # #    # \n");
        printf("#      #####  #####  #    # #####  \n");
        printf("#      #   #  #   #  #    # #   #  \n");
        printf("###### #    # #    #  ####  #    # \n\n");

        printf("As notas devem ser entre 0 e 10\n");

        return 1;
    }

    if (notaDois < 0 || notaDois > 10)
    {

        printf("\n\n###### #####  #####   ####  #####  \n");
        printf("#      #    # #    # #    # #    # \n");
        printf("#####  #    # #    # #    # #    # \n");
        printf("#      #####  #####  #    # #####  \n");
        printf("#      #   #  #   #  #    # #   #  \n");
        printf("###### #    # #    #  ####  #    # \n\n");

        printf("As notas devem ser entre 0 e 10\n");

        return 1;
    }

    if (notaTres < 0 || notaTres > 10)
    {

        printf("\n\n###### #####  #####   ####  #####  \n");
        printf("#      #    # #    # #    # #    # \n");
        printf("#####  #    # #    # #    # #    # \n");
        printf("#      #####  #####  #    # #####  \n");
        printf("#      #   #  #   #  #    # #   #  \n");
        printf("###### #    # #    #  ####  #    # \n\n");

        printf("As notas devem ser entre 0 e 10\n");

        return 1;
    }

    //SCRIPT

    mediaAritimetica = (notaUm + notaDois + notaTres) / 3;

    if (mediaAritimetica >= 8.5)
    {
        printf("Voce se enquadra no conceito A, com media de: %1.f", mediaAritimetica);
    }
    else if (mediaAritimetica >= 7.0)
    {
        printf("Voce se enquadra no conceito B, com media de: %1.f", mediaAritimetica);
    }
    else if (mediaAritimetica >= 5.5)
    {
        printf("Voce se enquadra no conceito C, com media de: %1.f", mediaAritimetica);
    }
    else if (mediaAritimetica < 5.5)
    {
        printf("Voce se enquadra no conceito D, com media de: %1.f", mediaAritimetica);
    }

    return 0;
}