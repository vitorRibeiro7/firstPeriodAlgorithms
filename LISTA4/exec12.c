#include <stdio.h>

int main()
{
    float saldoBancario = 1000;
    float valor;
    float credito = 0;
    float debitos = 0;
    float cpmf = 0;
    float descontoCpmf = 0;

    printf("-------------------------\n");
    printf("AGENCIA BRANCO PAGUE MAIS\n");
    printf("-------------------------\n");
    printf("SALDO DIPONIVEL:   %2.f\n", saldoBancario);
    printf("TOTAL DE CREDITOS: %2.f\n", credito);
    printf("TOTAL DE DEBITOS:  %2.f\n", debitos);
    printf("C.P.M.F A PAGAR:   %2.f\n", debitos);

    printf("DIGITE VALORES DE COMPRAS PÁRA SIMULAR UM EXTRATO\n");
    printf("ASSIM QUE TERMINAR DIGITE 0\n\n\n");

    while (valor != 0)
    {
        printf("VALOR:\n");
        scanf("%f", &valor);

        if (valor > 0)
        {
            credito = credito + valor;
            saldoBancario = saldoBancario + valor;
        }
        else if (valor < 0)
        {
            debitos = debitos + valor;
            saldoBancario = saldoBancario + valor;
        }
    }

    debitos = debitos * -1;

    descontoCpmf = debitos * 0.035;
    cpmf = debitos - descontoCpmf;
    saldoBancario = saldoBancario - cpmf;

    printf("-------------------------\n");
    printf("AGENCIA BRANCO PAGUE MAIS\n");
    printf("-------------------------\n");
    printf("TOTAL DE CREDITOS: %2.f\n", credito);
    printf("TOTAL DE DEBITOS:  %2.f\n", debitos);
    printf("C.P.M.F A PAGAR:   %2.f\n", cpmf);
    printf("SALDO DIPONIVEL:   %2.f\n", saldoBancario);

    return 0;
}