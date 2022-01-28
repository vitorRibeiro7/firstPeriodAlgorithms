#include <stdio.h>

int main()

//PRIMEIRA VERSÃO PARA SE CALCULAR 3 NOTAS E PODENDO SELECIONAR O PESO DE CADA UMA DELAS.

{

    float av1;
    float av2;
    float av3;

    float peso1;
    float peso2;
    float peso3;

    float somaPeso;

    //CALCULO DA MÉDIA ARITIMÉTICA

    printf("Digite a nota da primeira avaliação: \n");
    scanf("%f", &av1);

    printf("Digite a nota da segunda avaliação: \n");
    scanf("%f", &av2);

    printf("Digite a nota da terceira avaliação: \n");
    scanf("%f", &av3);

    float somaNota = av1 + av2 + av3;
    float media = somaNota / 3;

    printf("Nota total: %f\n", somaNota);
    printf("Sua média é de: %f\n", media);

    //CALCULO DE MEDIA ARITIMÉTICA PONDERADA

    printf("Agora escreva o peso de cada nota para a media ponderada.\n");

    printf("Peso da primeira nota\n");
    scanf("%f", &peso1);

    printf("Peso da segunda nota\n");
    scanf("%f", &peso2);

    printf("Peso da terceira nota\n");
    scanf("%f", &peso3);

    float somaPeso1 = av1 * peso1;
    float somaPeso2 = av2 * peso2;
    float somaPeso3 = av3 * peso3;
    float somaNotaFinal = somaPeso1 + somaPeso2 + somaPeso3;
    float somaPesos = peso1 + peso2 + peso3;
    float ponderada = somaNotaFinal / somaPesos;

    printf("sua média ponderada é de: %.1f", ponderada);

    return 0;
}
