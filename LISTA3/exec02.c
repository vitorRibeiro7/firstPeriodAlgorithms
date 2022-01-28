#include <stdio.h>

int main()
{

    char letraEscolhida;

    printf("Digite uma letra e aperte o botão de enviar.\n");
    scanf("%c", &letraEscolhida);

    if (((letraEscolhida >= 'a') && (letraEscolhida <= 'z')) || ((letraEscolhida >= 'A') && (letraEscolhida <= 'Z')))
    {
        printf("\n\nOk! Letra: %c", letraEscolhida);
    }
    else
    {
        printf("Isso não é uma letra");
    }

    return 0;
}