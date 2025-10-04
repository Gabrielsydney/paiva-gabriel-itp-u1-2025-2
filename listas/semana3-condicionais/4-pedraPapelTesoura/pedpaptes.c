#include <stdio.h>
#include <math.h>

// ### Jogo: Pedra, Papel, Tesoura

int main()
{
    char jogador1, jogador2;
    printf("[Jogador 1] Pedra (P), Papel (A) ou Tesoura (T)? ");
    scanf(" %c", &jogador1);
    printf("[Jogador 2] Pedra (P), Papel (A) ou Tesoura (T)? ");
    scanf(" %c", &jogador2);

    if (jogador1 == jogador2)
    {
        printf("Empate!");
    }
    else
    {
        if ((jogador1 == 'P' && jogador2 == 'T') || (jogador1 == 'A' && jogador2 == 'P') || (jogador1 == 'T' && jogador2 == 'A'))
        {
            printf("Jogador 1 é o vencedor");
        }
        else if ((jogador2 == 'P' && jogador1 == 'T') || (jogador2 == 'A' && jogador1 == 'P') || (jogador2 == 'T' && jogador1 == 'A'))
        {
            printf("Jogador 2 é o vencedor");
        }
    }

    return 0;
}