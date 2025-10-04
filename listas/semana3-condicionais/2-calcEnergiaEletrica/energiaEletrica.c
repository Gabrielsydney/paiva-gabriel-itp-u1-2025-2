#include <stdio.h>
#include <math.h>

// ### Calculadora de energia elétrica

int main()
{
    float r, c, i, valor, txFixa, kwh;
    char resul;

    r = 0.60;
    c = 0.48;
    i = 1.29;
    txFixa = 15.0;
    printf("Qual o seu gasto em kWh? ");
    scanf("%f", &kwh);
    printf("Sua propriedade é Residencial[r], Comercial[c] ou Industrial[i]? ");
    scanf(" %c", &resul);
    printf("O total a pagar vai ser: ");

    if (resul == 'r')
    {
        valor = (r * kwh) + txFixa;
        printf("R$%2.f", valor);
    }
    else if (resul == 'c')
    {
        valor = (c * kwh) + txFixa;
        printf("R$%2.f", valor);
    }
    else if (resul == 'i')
    {
        valor = (i * kwh) + txFixa;
        printf("R$%2.f", valor);
    }

    return 0;
}