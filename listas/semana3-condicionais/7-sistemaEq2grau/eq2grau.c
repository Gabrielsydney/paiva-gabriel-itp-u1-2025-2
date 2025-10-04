#include <stdio.h>
#include <math.h>

// ### Sistema de equações do 2º grau

int main()
{
    float a, b, c, disc, raiz1, raiz2;
    a = 0;
    printf("Digite o valor de A(deve ser diferente de 0): ");
    scanf("%f", &a);
    while (a == 0)
    {
        printf("Digite o valor de A(deve ser diferente de 0): ");
        scanf("%f", &a);
    }
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);
    disc = (pow(b, 2) - (4 * a * c));

    if (disc > 0)
    {
        raiz1 = (-b + sqrt(disc)) / (2 * a);
        raiz2 = (-b - sqrt(disc)) / (2 * a);

        printf("Raízes: %f e %f", raiz1, raiz2);
    }
    else if (disc == 0)
    {
        printf("%f", disc);
    }
    else if (disc < 0)
    {
        printf("Não possui raízes reais");
    }

    return 0;
}