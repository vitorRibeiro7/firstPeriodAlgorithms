#include <stdio.h>

int main()
{

    float valor;
    float valorFinal = 0;
    float desconto = 0;

    printf("DIGITE O VALOR DE CADA ITEM COMPRADO NA LOJA\nSEPARADAMENTE, ASSIM QUE TERMINAR DIGITE 0\n\n");

    while (valor != 0)
    {
        printf("\ndigite:\n");
        scanf("%f", &valor);

        valorFinal = valorFinal + valor;
    }

    if (valorFinal > 200)
    {
        printf("\nValor total: %2.f", valorFinal);
        desconto = valorFinal * 0.2;
        valorFinal = valorFinal - desconto;
        printf("\n\nFOI APLICADO UM DESCONTO DE 20%% A SUA COMPRA\nVALOR FINAL = %2.f", valorFinal);
    }
    else if (valorFinal <= 200)
    {
        printf("\nValor total: %2.f", valorFinal);
        desconto = valorFinal * 0.15;
        valorFinal = valorFinal - desconto;
        printf("\n\nFOI APLICADO UM DESCONTO DE 15%% A SUA COMPRA\nVALOR FINAL = %2.f", valorFinal);
    }
    else if (valorFinal <= 100)
    {
        printf("\nValor total: %2.f", valorFinal);
        desconto = valorFinal * 0.10;
        valorFinal = valorFinal - desconto;
        printf("\n\nFOI APLICADO UM DESCONTO DE 10%% A SUA COMPRA\nVALOR FINAL = %2.f", valorFinal);
    }
    else if (valorFinal <= 50)
    {
        printf("\nValor total: %2.f", valorFinal);
        desconto = valorFinal * 0.05;
        valorFinal = valorFinal - desconto;
        printf("\n\nFOI APLICADO UM DESCONTO DE 5%% A SUA COMPRA\nVALOR FINAL = %2.f", valorFinal);
    }

    return 0;
}