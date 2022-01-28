#include <stdio.h>

int main()
{

    char caractereEscolhido;

    printf("Digite um caracter e aperte o botao enviar.\n\n");
    scanf("%c", &caractereEscolhido);

    if ((caractereEscolhido >= 'A' && caractereEscolhido <= 'Z') || (caractereEscolhido >= 'a' && caractereEscolhido <= 'z'))
    {
        if (caractereEscolhido == 'a' || caractereEscolhido == 'e' || caractereEscolhido == 'i' || caractereEscolhido == 'o' || caractereEscolhido == 'u' || caractereEscolhido == 'A' || caractereEscolhido == 'E' || caractereEscolhido == 'I' || caractereEscolhido == 'O' || caractereEscolhido == 'U')
        {
            printf("\n\nO caracter escolhido e um LETRA VOGAL\n\n");
        }
        else
        {
            printf("\n\nO caracter escolhido e um LETRA CONSOANTE\n\n");
        }
    }
    else if (caractereEscolhido >= '0' && caractereEscolhido <= '9')
    {
        printf("\n\nO caractere escolhido e um NUMERO.\n\n");
    }
    else if ((caractereEscolhido >= '!' && caractereEscolhido <= '/') || (caractereEscolhido >= ':' && caractereEscolhido <= '@') || (caractereEscolhido >= '[' && caractereEscolhido <= '`') || (caractereEscolhido >= '{' && caractereEscolhido <= '~'))
    {
        printf("\n\nO caractere escolhido e um SIMBOLO.\n\n");
    }

    return 0;
}
