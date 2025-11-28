#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int largada[n + 1];
    int chegada[n + 1];
    int maior = -100;
    int vencedor = 0;
    int empate = 0;

    for (int i = 0; i < n; i++)
    {
        int piloto;
        scanf("%d", &piloto);
        largada[piloto] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        int piloto;
        scanf("%d", &piloto);
        chegada[piloto] = i + 1;
    }

    for (int i = 1; i <= n; i++)
    {
        int finalLarg = largada[i]; // 10 | 4
        int finalCheg = chegada[i]; // 4 | 1
        int ganho = finalLarg - finalCheg; // 6 | 3 

        if (ganho > maior)  
        {
            maior = ganho; // 6
            vencedor = i; // 1
            empate = 0;
        }
        else if (ganho == maior)
        {
            empate = 1;
        }
    }
    if (empate == 1 || maior <= 0)
    {
        printf("Empate\n");
    }
    else
    {
        printf("O piloto que mais ganhou posição foi o: ");
        printf("%d\n", vencedor);
    }

    return 0;
}