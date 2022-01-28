#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int count;
    int max;
    void printRandom(int count, int max);

    printf("Numero de numeros randomicos\n");
    scanf("%i", &count);
    printf("Maximo de numeros 0 a ...\n");
    scanf("%i", &max);

    count = count - 1;

    printRandom(count, max);

    return 0;
}

void printRandom(int count, int max)
{

    int i;

    for (int i = 0; i < count; i++)
    {
        printf("%d ", rand() % max);
    }

    printf("%i ", count);
}