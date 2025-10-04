#include <stdio.h>
#include <math.h>

// ### Classificação de IMC

int main()
{
    float peso, altura, imc;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O imc da pessoa é %f\n", imc);
    if (imc < 18.5)
    {
        printf("Abaixo do peso");
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("Peso Normal");
    }
    else if (imc >= 25.0 && imc <= 29.9)
    {
        printf("Sobrepeso");
    }
    else
    {
        printf("Obesidade");
    }

    return 0;
}