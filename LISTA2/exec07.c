#include <stdio.h>

int main()
{

    int a;
    int b;
    int c;

    printf("Escolha três numeros.\n\n");

    printf("Primeiro numero:\n\n");
    scanf("%i", &a);

    printf("Segundo numero:\n\n");
    scanf("%i", &b);

    printf("Terceiro numero:\n\n");
    scanf("%i", &c);

    if (a > b && b > c)
    {
        printf("A ordem crescente é %i -> %i -> %i", a, b, c);
    }

    if (b > a && a > c)
    {
        printf("A ordem crescente é %i -> %i -> %i", b, a, c);
    }

    if (c > a && a > b)
    {
        printf("A ordem crescente é %i -> %i -> %i", c, a, b);
    }

    if (a > c && c > b)
    {
        printf("A ordem crescente é %i -> %i -> %i", a, c, b);
    }

    if (b > c && c > a)
    {
        printf("A ordem crescente é %i -> %i -> %i", b, c, a);
    }

    if (c > b && b > a)
    {
        printf("A ordem crescente é %i -> %i -> %i", c, b, a);
    }

    return 0;
}

/*
a b c
    b a c
        c a b
            a c b
                b c a
                    c b a
*/