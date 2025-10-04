#include <stdio.h>
#include <math.h>

// ### Validador de Triângulos

int main()
{
    int valor1, valor2, valor3;
    printf("Digite os 3 valores \n");
    printf("Valor 1: ");
    scanf("%d", &valor1);

    printf("Valor 2: ");
    scanf("%d", &valor2);

    printf("Valor 3: ");
    scanf("%d", &valor3);

    if (valor1 == valor2 && valor2 == valor3)
    {
        printf("Todos os lados são Iguais - Triângulo Equilátero");
    }
    else if (valor1 == valor2 || valor2 == valor3 || valor1 == valor3)
    {
        printf("Dois valores são iguais - Triângulo Isósceles");
    }
    else if (valor1 != valor2 && valor2 != valor3)
    {
        printf("Todos os lados são diferentes - Triângulo Escaleno");
    }

    if (valor1 * valor1 == (valor2 * valor2) + (valor3 * valor3) && valor1 > valor2 && valor1 > valor3)
    {
        printf(" e Retângulo");
    }
    else if ((valor1 * valor1) < (valor2 * valor2) + (valor3 * valor3))
    {
        printf(" e Acutângulo");
    }
    else if ((valor1 * valor1) > (valor2 * valor2) + (valor3 * valor3))
    {
        printf(" e Obtusângulo");
    }

    return 0;
}