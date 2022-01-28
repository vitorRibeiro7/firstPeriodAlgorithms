#include <stdio.h>

//VERSÃO COM 5 NOTAS PODENDO SELECIONAR CADA PESO ADPTADAS PARA O CALCULO DE MEDIA SISU/ENEM

int main()
{

    float av1;
    float av2;
    float av3;
    float av4;
    float av5;

    float peso1;
    float peso2;
    float peso3;
    float peso4;
    float peso5;

    float somaPeso;

    //CALCULO DA MÉDIA ARITIMÉTICA

    printf("Digite a nota da primeira matéria: \n");
    scanf("%f", &av1);

    printf("Digite a nota da segunda matéria: \n");
    scanf("%f", &av2);

    printf("Digite a nota da terceira matéria: \n");
    scanf("%f", &av3);

    printf("Digite a nota da quarta matéria: \n");
    scanf("%f", &av4);

    printf("Digite a nota da sua redção: \n");
    scanf("%f", &av5);

    float somaNota = av1 + av2 + av3 + av4 + av5;
    float media = somaNota / 5;

    printf("Sua média é de: %f\n", media);

    //CALCULO DE MEDIA ARITIMÉTICA PONDERADA

    printf("Agora escreva o peso de cada nota para a media ponderada.\n");

    printf("Peso da primeira nota\n");
    scanf("%f", &peso1);

    printf("Peso da segunda nota\n");
    scanf("%f", &peso2);

    printf("Peso da terceira nota\n");
    scanf("%f", &peso3);

    printf("Peso da quarta nota\n");
    scanf("%f", &peso4);

    printf("Peso da quinta nota\n");
    scanf("%f", &peso5);

    somaNota = av1 + av2 + av3 + av4 + av5;
    float somaPeso1 = av1 * peso1;
    float somaPeso2 = av2 * peso2;
    float somaPeso3 = av3 * peso3;
    float somaPeso4 = av4 * peso4;
    float somaPeso5 = av5 * peso5;
    float somaNotaFinal = somaPeso1 + somaPeso2 + somaPeso3 + somaPeso4 + somaPeso5;
    float somaPesos = peso1 + peso2 + peso3 + peso4 + peso5;
    float ponderada = somaNotaFinal / somaPesos;

    printf("sua média ponderada é de: %.1f", ponderada);

    return 0;
}
