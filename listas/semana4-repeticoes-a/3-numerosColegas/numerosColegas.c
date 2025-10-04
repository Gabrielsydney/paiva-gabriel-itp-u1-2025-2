#include <stdio.h>
#include <math.h>

// ###  Números Colegas

int main()
{
    int n1, n2;
    int somaA = 0, somaB = 0;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    for (int i = 1; i < n1; i++)
    {
        if (n1 % i == 0)
        {
            somaA = i + somaA;
        }
    }
    for (int i = 1; i < n2; i++)
    {
        if (n2 % i == 0)
        {
            somaB = i + somaB;
        }
    }
    if (somaA - n2 <= 2 && somaB - n1 <= 2)
    {
        printf("O resultado da soma dos inteiros de A é %d\n", somaA);
        printf("O resultado da soma dos inteiros de B é %d\n", somaB);
        printf("-> S");
    }
    else
    {
        printf("-> N");
    }

    return 0;
}