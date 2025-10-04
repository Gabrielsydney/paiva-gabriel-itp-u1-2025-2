#include <stdio.h>
#include <math.h>

// ## #PROBLEMA 3 - CÁLCULO DE JUROS COMPOSTO

int main()
{
    float capI, tX;
    int anos;

    printf("Digite o Capital Inicial: ");
    scanf("%f", &capI);

    printf("Digite a Taxa de Juros [em porcentagem]: ");
    scanf("%f", &tX);

    printf("Digite o tempo (em anos): ");
    scanf("%d", &anos);

    float montante = capI * pow((1 + tX / 100), anos);

    printf("O montante final é: %1.f\n", montante);

    return 0;
}