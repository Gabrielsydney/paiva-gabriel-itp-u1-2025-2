#include <stdio.h>
#include <math.h>

// ### PROBLEMA 2 - CONVERSÃO DE TEMPERATURA

int main()
{
    float celsius;

    printf("Digite a Temperatura em Celsius: ");
    scanf("%f", &celsius);

    float fah = (celsius * 1.8) + 32;
    float kel = celsius + 273.15;

    printf("Aqui está a temperatura em Fahrenheit: %1.f\n", fah);
    printf("Aqui está a temperatura em Kelvin: %1.f\n", kel);

    return 0;
}