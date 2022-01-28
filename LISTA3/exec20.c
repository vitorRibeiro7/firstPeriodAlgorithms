#include <stdio.h>

int main()
{

    int numero;
    int candidatoUm = 0;
    int candidatoDois = 0;
    int candidatotres = 0;
    int candidatoQuartro = 0;
    int votoNulo = 0;
    int votoEmBranco = 0;

    printf("VOTAÇÃO PARA JOGAR NO VASCO:\n");
    printf("PARA CANDITADO 1 DIGITE 1\n");
    printf("PARA CANDITADO 2 DIGITE 2\n");
    printf("PARA CANDITADO 3 DIGITE 3\n");
    printf("PARA CANDITADO 4 DIGITE 4\n");
    printf("PARA VOTAR NULO DIGITE 5\n");
    printf("PARA VOTAR EM BRANCO DIGITE 6\n\n\n\n");
    printf("QUANDO TERMINAR DE VOTAR DIGITE 0\n");

    while (numero != 0)
    {

        printf("NOVO VOTO:");
        scanf("%i", &numero);

        if (numero == 0)
        {
            break;
        }

        if (numero >= 1 && numero <= 6)
        {

            if (numero == 1)
            {
                candidatoUm++;
            }
            else if (numero == 2)
            {
                candidatoDois++;
            }
            else if (numero == 3)
            {
                candidatotres++;
            }
            else if (numero == 4)
            {
                candidatoQuartro++;
            }
            else if (numero == 5)
            {
                votoNulo++;
            }
            else if (numero == 6)
            {
                votoEmBranco++;
            }
        }
        else
        {
            printf("\nNUMERO DE NOVO NAO DISPONIVEL!\n\n");
        }
    }

    printf("Conditato 1 : %i\n", candidatoUm);
    printf("Conditato 2 : %i\n", candidatoDois);
    printf("Conditato 3 : %i\n", candidatotres);
    printf("Conditato 4 : %i\n", candidatoQuartro);
    printf("Votos nulos : %i\n", votoNulo);
    printf("Votos em branco : %i\n", votoEmBranco);

    return 0;
}