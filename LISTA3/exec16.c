#include <stdio.h>
int main()
{
    int numInformado, valorMax;
    int i = 1;
    int resultado = 0;

    printf("Informe o numero: \n");
    scanf("%d", &numInformado);

    valorMax = numInformado;

    while (valorMax != 0)
    {
        resultado = resultado + i;
        printf("%d + ", i);
        valorMax--;
        i = 2 + i;
    }

    printf("O resultado e %d", resultado);
    return 0;
}