#include <stdio.h>
#include <math.h>

// ### PROBLEMA 1 - CALCULADORA DE IMC

int main()
{
    float peso, altura;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);
    printf("Resultado do seu IMC: %2.f\n", imc);

    return 0;
}