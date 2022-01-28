//BILBIOTECAS
#include <stdio.h>

//DECLARAÇÃO DA FUNÇÃO
void organize(char s[]);

//FUNÇÃO PRINCIPAL
int main()
{

    char str[] = "aabcabbacaacab";

    organize(str);

    return 0;
}

//FUNÇÕES
void organize(char s[])
{

    int i;
    int size = 0;
    int countA = 0;
    int countB = 0;
    int countC = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        size++;
    }

    for (i = 0; i < size; i++)
    {
        if (s[i] == 'a')
        {
            countA++;
        }
        else if (s[i] == 'b')
        {
            countB++;
        }
        else if (s[i] == 'c')
        {
            countC++;
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        if (countA != 0)
        {
            s[i] = 'a';
            countA--;
        }
        else if (countB != 0)
        {
            s[i] = 'b';
            countB--;
        }
        else if (countC != 0)
        {
            s[i] = 'c';
            countC--;
        }
    }
}