#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printString(char str[]);
void printStringReversed(char str[]);
void printStringSparse(char str[]);
void printStringCustom(char str[]);
void stringReport(char str[]);
void stringToUpper(char str[]);
int strcmpNoCase(char s1[], char s2[]);
int countWords(char str[]);
int countWordsPlus(char str[]);
void stringCapitalize(char str[]);
int stringCompare(char str1[], char str2[]);
void stringTrim(char str[]);
int findSubstring(char str[]);
void cutString(char str[]);

int main(void)
{

    char s1[] = "hyPheniZation";
    char s2[] = "hyphenization";
    char s3[] = "   first things     first,     second things    latter";
    char s4[] = "welCOME To COMPUTER programming!!";
    char num[11] = "1234567890";

    return 0;
}

void printString(char str[]) //EXEC 1
{

    int i;
    int j;
    int count = strlen(str);

    printf("%s\n", str);

    // for (i = 0; str[i] != '\0'; i++)
    // {
    //     count++;
    // }

    // for (j = 0; j < count; j++)
    // {
    //     printf("%c", str[j]);
    // }
}

void printStringReversed(char str[]) //EXEC 2
{

    int count = strlen(str);
    int i;

    while (count >= 0)
    {
        printf("%c", str[count]);

        count--;
    }
}

void printStringSparse(char str[]) //EXEC 3
{

    int i;
    int j;
    int count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    for (j = 0; j < count; j++)
    {
        printf("%c", str[j]);

        if (j < count - 1)
        {
            printf("*");
        }
    }
}

void printStringCustom(char str[]) //EXEC 4
{

    int i;
    int j;
    int count = 0;
    char crc;

    printf("Escolha o caractere:\n");
    scanf("%c", &crc);

    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    printf("\n\n");

    for (j = 0; j < count; j++)
    {
        printf("%c", str[j]);

        if (j < count - 1)
        {
            printf("%c", crc);
        }
    }
}

void stringReport(char str[]) //EXEC 5
{

    int count = strlen(str);
    int i;
    int j;
    int letras = 0;
    int numeros = 0;
    int simbolos = 0;

    for (i = 0; i < count; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            letras++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            numeros++;
        }
        else if ((str[i] >= '!' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@') || (str[i] >= '[' && str[i] <= '`') || (str[i] >= '{' && str[i] <= '~'))
        {
            simbolos++;
        }
    }

    printf("\nLetras: %i\nNumeros: %i\nSimbolos:%i\n", letras, numeros, simbolos);
}

void stringToUpper(char str[]) //EXEC 6
{

    int count = strlen(str);
    int i;

    for (i = 0; i < count; i++)
    {
        if ((str[i] >= 'a') && (str[i] <= 'z'))
        {
            str[i] = str[i] - 32;
        }
    }
}

int strcmpNoCase(char s1[], char s2[]) //EXEC 7
{
    int res = strcmp(s1, s2);

    if (res < 0)
    {
        printf("String 1 vem antes da String 2");
    }
    else if (res == 0)
    {
        printf("String 1 e igual a String 2");
    }
    else if (res > 0)
    {
        printf("String 1 vem depois da String 2");
    }

    return res;
}

int countWords(char str[]) //EXEC 8
{

    int i;
    int size = strlen(str);
    int count = 0;

    for (i = 0; i <= size; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            count++;
        }
    }

    printf("Palavras: %i", count);
}

int countWordsPlus(char str[]) //EXEC 9
{
    int lenght = strlen(str); // comprimento da string
    int words = 1;
    char prev = '0';

    for (int i = 0; i <= lenght; i++)
    { // valores da string até atingir o comprimento
        if (str[i] == 32 && str[i] != prev)
        {
            words++;
        }
        prev = str[i];
    }

    if (str[lenght - 1] == 32)
    {
        words--;
    }
    if (str[0] == 32)
    {
        words--;
    }
    printf("\nA frase tem %d palavra(s)", words);

    return 0;
}

void stringCapitalize(char str[])
{ // EXEC 10
    int lenght = strlen(str);
    char prev = '0';
    for (int i = 0; i <= lenght; i++)
    {
        if (i == 0)
        {
            printf("%c", str[i] - 32);
        }
        else if (str[i - 1] == 32)
        {
            printf("%c", str[i] - 32);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}

int stringCompare(char str1[], char str2[])
{ // EXEC 11
    int lenght1 = strlen(str1);
    int lenght2 = strlen(str2);
    int lenghtMaior, igual = 0;
    int retorno;
    if (lenght1 >= lenght2)
    { // verificar maior string
        lenghtMaior = lenght1;
    }
    else
    {
        lenghtMaior = lenght2;
    }

    for (int i = 0; i < lenghtMaior; i++)
    {
        if (str1[i] == str2[i])
        {            // verificar se cada elemento da string é igual
            igual++; // contador de elementos iguais
        }
        if (str1[i] < str2[i])
        { // verificar se vem antes
            retorno = 1;
        }
        if (str1[i] > str2[i])
        { // verificar se vem depois
            retorno = -1;
        }
    }

    if (igual == lenght1)
    {
        retorno = 0;
    }
    return retorno;
}

void stringTrim(char str[])
{ // EXEC 12

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != 32 || str[i - 1] != 32)
        {
            printf("%c", str[i]);
        }
    }
}

int findSubstring(char str[])
{ // EXEC 13
    char sub[] = "second";
    int j = 0, count = 0, retorno;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == sub[j])
        {
            count++;
            j++;
        }
    }
    if (count == strlen(sub))
    {
        retorno = 1;
    }
    else
    {
        retorno = 0;
    }
    return retorno;
}

void cutString(char str[])
{ // EXEC 14
    int j = 0;
    char target[] = "second";
    for (int i = 0; i < strlen(str); i++)
    {
        while (str[i] == target[j])
        {
            if (j <= strlen(target))
            {
                printf("%c", str[i]);
                i++;
                j++;
            }
        }
        if (j != strlen(target))
        {
            j = 0;
        }
        if (j == 0)
        {
            printf("%c", str[i]);
        }
    }
}
