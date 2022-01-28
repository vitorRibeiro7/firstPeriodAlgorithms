#include <stdio.h>

int main()
{

    char caracter = 33;
    int start = 33;
    int end = 126;

    printf("DEC OCT HEX CHR\n");

    while (start <= end)
    {
        printf("%3.d %3.o %3.X %2.c\n", caracter, caracter, caracter, caracter);

        caracter++;
        start++;
    }

    return 0;
}