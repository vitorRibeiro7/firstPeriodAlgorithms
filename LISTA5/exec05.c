/*
Escreva uma função que recebe um número inteiro entre -100 e 100 e o escreve por extenso. Caso
o número esteja fora desse intervalo, a função deve informar o erro.
Função: void number_in_full_100(int n)
Exemplo e chamada da função:
number_in_full_100(45); // Saída: Quarenta e Cinco
*/

#include <stdio.h>

int main()
{

    int numero;
    void number_in_full_100(int numero);

    printf("Escolha um numero para sair por extenso:\n");
    scanf("%i", &numero);

    number_in_full_100(numero);

    return 0;
}

void number_in_full_100(int numero)
{

    int rest;
    int dezena;

    if (numero > 100 || numero < -100)
    {
        printf("Apensa numeros de -100 até 100, por favor.");
    }

    if (numero < 0)
    {
        printf("menos ");
        numero = numero * -1;
    }

    if (numero == 100)
    {
        printf("cem");
        return 0;
    }

    if (numero < 20)
    {
        switch (numero)
        {
        case 0:
            printf("zero");
            break;
        case 1:
            printf("um");
            break;
        case 2:
            printf("dois");
            break;
        case 3:
            printf("tres");
            break;
        case 4:
            printf("quatro");
            break;
        case 5:
            printf("cinco");
            break;
        case 6:
            printf("seis");
            break;
        case 7:
            printf("sete");
            break;
        case 8:
            printf("oito");
            break;
        case 9:
            printf("nove");
            break;
        case 10:
            printf("dez");
            break;
        case 11:
            printf("onze");
            break;
        case 12:
            printf("doze");
            break;
        case 13:
            printf("treze");
            break;
        case 14:
            printf("quatorze");
            break;
        case 15:
            printf("quinze");
            break;
        case 16:
            printf("dezesseis");
            break;
        case 17:
            printf("dezessete");
            break;
        case 18:
            printf("dezoito");
            break;
        case 19:
            printf("dezenove");
            break;
        }
    }

    if (numero > 20)
    {
        rest = numero % 10;
        dezena = numero - rest;

        switch (dezena)
        {
        case 20:
            printf("vinte ");
            break;
        case 30:
            printf("trinta ");
            break;
        case 40:
            printf("quarenta ");
            break;
        case 50:
            printf("cinquenta ");
            break;
        case 60:
            printf("sessenta ");
            break;
        case 70:
            printf("setenta ");
            break;
        case 80:
            printf("oitenta ");
            break;
        case 90:
            printf("noventa ");
            break;
        }

        printf("e ");

        switch (rest)
        {
        case 1:
            printf("um");
            break;
        case 2:
            printf("dois");
            break;
        case 3:
            printf("tres");
            break;
        case 4:
            printf("quatro");
            break;
        case 5:
            printf("cinco");
            break;
        case 6:
            printf("seis");
            break;
        case 7:
            printf("sete");
            break;
        case 8:
            printf("oito");
            break;
        case 9:
            printf("nove");
            break;
        }
    }
}