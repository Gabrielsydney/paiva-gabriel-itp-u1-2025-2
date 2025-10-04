#include <stdio.h>
#include <math.h>

// ### Sistema de notas

int main()
{
    float media, n1, n2, n3, nRec;

    printf("Digite a sua n1: ");
    scanf("%f", &n1);
    printf("Digite a sua n2: ");
    scanf("%f", &n2);
    printf("Digite a sua n3: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;

    if (media >= 7.0)
    {
        printf("Aluno foi aprovado com média: %1.f", media);
    }
    else if (media >= 4.0 && media < 7.0)
    {
        nRec = 10.0 - media;
        printf("Aluno está em recuperação e precisará tirar %1.f", nRec);
    }
    else {
        printf("Aluno está reprovado! média: %f", media);
    }

        return 0;
}