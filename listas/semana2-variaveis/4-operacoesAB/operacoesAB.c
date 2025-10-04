#include <stdio.h>
#include <math.h>

// ### PROBLEMA 4 - Operações Aritméticas Básicas

int main()
{
    int n1, n2, soma, sub, mult, resto;
    float div, media;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;
    resto = n1 % n2;
    media = (n1 + n2) / 2;

    printf("O resultado da soma: %2.d\n", soma);
    printf("O resultado da subtração: %2.d\n", sub);
    printf("O resultado do produto: %2.d\n", mult);
    printf("O resultado da divisão real: %2.f\n", div);
    printf("O resultado do resto da divisão: %d\n", resto);
    printf("O resultado da média aritmética: %2.f\n", media);

    return 0;
}
