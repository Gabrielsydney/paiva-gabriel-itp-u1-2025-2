#include <stdio.h>
#include <math.h>

// ###  Salve o Homem Aranha

int main()
{
    float x, y, comprimento, n;
    int nAlvos;
    int missao = 1;

    printf("Digite a coordenada inicial X: ");
    scanf("%f", &x);

    printf("Digite a coordenada inicial Y: ");
    scanf("%f", &y);

    printf("Digite a comprimento máximo da teia: ");
    scanf("%f", &comprimento);

    printf("Digite o número de alvos: ");
    scanf("%d", &nAlvos);

    for (int i = 0; i < nAlvos; i++)
    {
        float alvo_x, alvo_y, distancia;

        printf("Digite as coordenadas (x, y) do alvo %d: ", i + 1);
        scanf("%f %f", &alvo_x, &alvo_y);

        distancia = sqrt(pow(alvo_x - x, 2) + pow(alvo_y - y, 2));
        if (distancia > comprimento)
        {
            missao = 0;
            break;
        }
        else
        {
            x = 2 * alvo_x - x;
            y = 2 * alvo_y - y;
        }
    }

    if (missao == 1)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}