#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int count;
    int max;
    int min;
    void printRandom(int count, int min, int max);

    printf("Numero de numeros randomicos:\n");
    scanf("%i", &count);
    printf("Inque o numero maximo:\n");
    scanf("%i", &max);
    printf("Inque o numero minimo:\n");
    scanf("%i", &min);

    count = count - 1;

    printRandom(count, min, max);

    return 0;
}

void printRandom(int count, int min, int max)
{

    int i;

max = max - min;
    for (int i = 0; i < count; i++)
    {
        printf("%d ", rand() % max + min);
    }

    printf("%i ", count);
}