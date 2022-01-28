#include <stdio.h>

int main()
{

    int long serial;
    int long verifyNum;
    int long serialw;

    printf("DIGITE A SERIAL DO PRODUTO:\n");
    scanf("%ld", &serial);

    verifyNum = serial / 10;

    printf("%ld\n", verifyNum);

    /*
    serialw = serial / 10;

    printf("%i", serialw);   */

    return 0;
}