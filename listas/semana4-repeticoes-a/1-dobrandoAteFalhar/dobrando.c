#include <stdio.h>
#include <math.h>

// ###  Dobrando até não poder mais

int main()
{
    float c, l, cB; // c - Comprimento, l - Largura, cB - Comprimento do Bolso
    int d = 0;      // d - dobras

    printf("Digite o valor do Comprimento: ");
    scanf("%f", &c);

    printf("Digite o valor da Largura: ");
    scanf("%f", &l);

    printf("Digite o valor do Comprimento do Bolso: ");
    scanf("%f", &cB);

    while (cB < c && cB < l)
    {
        if (c > l)
        {
            c = c / 2;
            d = d + 1;
        }
        else if (l > c)
        {
            l = l / 2;
            d = d + 1;
        }
    }
    printf("Foi necessário %d para a folha caber no bolso.\n", d);

    return 0;
}