#include <stdio.h>
#include <math.h>

// ### Calculadora de desconto progressivo

int main()
{
    float desc, compra, vF;
    printf("Qual o valor da sua compra? ");
    scanf("%f", &compra);
    if (compra <= 100.00)
    {
        printf("Valores abaixo de R$100, nenhum desconto é aplicado. Não gostaria de inserir mais algo proporcional para garantir o desconto?");
    }
    else if (compra > 100.00 && compra <= 500.00)
    {
        desc = 0.1 * compra;
        vF = compra - desc;
        printf("Você ganhou R$%2.f de desconto na sua compra. Totalizando R$%2.f ganhando 10%% de desconto. \n", desc, vF);
    }
    else if (compra > 500.00 && compra <= 1000.00)
    {
        desc = 0.15 * compra;
        vF = compra - desc;
        printf("Você ganhou R$%2.f de desconto na sua compra. Totalizando R$%2.f ganhando 15%% de desconto. \n", desc, vF);
    }
    else
    {
        desc = 0.20 * compra;
        vF = compra - desc;
        printf("Você ganhou R$%2.f de desconto na sua compra. Totalizando R$%2.f ganhando 20%% de desconto. \n", desc, vF);
    }
    return 0;
}