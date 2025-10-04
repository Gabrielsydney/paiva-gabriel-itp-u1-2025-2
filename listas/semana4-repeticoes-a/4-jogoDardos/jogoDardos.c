#include <stdio.h>
#include <math.h>

// ###  Jogo de Dardos

int main()
{
    float xInicial, yInicial;
    float pontuacao = 0;

    for (int i = 0; i < 10; i++)
    {
        float x, y;

        printf("Digite as coordenadas em sequência (x,y): ");
        scanf("%f %f", &x, &y);

        float distancia = sqrt(pow(x, 2) + pow(y, 2));

        if (distancia <= 1)
        {
            pontuacao = pontuacao + 10;
        }
        else if (distancia <= 2)
        {
            pontuacao = pontuacao + 6;
        }
        else if (distancia <= 3)
        {
            pontuacao = pontuacao + 4;
        }

        if (i > 0)
        {
            float distInicial = sqrt(pow(x - xInicial, 2) + pow(y - yInicial, 2));
            if (distInicial <= 1)
            {
                pontuacao = pontuacao + 5;
            }
            else if (distInicial <= 2)
            {
                pontuacao = pontuacao + 3;
            }
            else if (distInicial <= 3)
            {
                pontuacao = pontuacao + 2;
            }
        }
        xInicial = x;
        yInicial = y;
    }
    printf("%.2f\n", pontuacao);
    return 0;
}