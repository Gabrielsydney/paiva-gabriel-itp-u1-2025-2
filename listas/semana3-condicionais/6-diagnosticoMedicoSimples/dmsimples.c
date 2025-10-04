#include <stdio.h>
#include <math.h>

// ### Diagnóstico médico simples

int main()
{
    char febre, dCabeça, dCorpo, tosse;
    printf("Tem Febre [S/N]? ");
    scanf(" %c", &febre);
    printf("Tem Dor de Cabeça [S/N]? ");
    scanf(" %c", &dCabeça);
    printf("Tem Dor no Corpo [S/N]? ");
    scanf(" %c", &dCorpo);
    printf("Tem Tosse [S/N]? ");
    scanf(" %c", &tosse);

    if (febre == 'S' && dCabeça == 'S' && dCorpo == 'S' && tosse == 'N') //critério com 'N' utilizada para que a útlima condição fosse atendida
    {
        printf("Possível Gripe");
    }
    else if (tosse == 'S' && febre == 'S' && dCabeça == 'N') //critério com 'N' utilizada para que a útlima condição fosse atendida
    {
        printf("Possível Resfriado");
    }
    else if (dCabeça == 'S' && tosse == 'N') //critério com 'N' utilizada para que a útlima condição fosse atendida
    {
        printf("Possível Enxaqueca");
    }
    else if (febre == 'S' && tosse == 'N') //critério com 'N' utilizada para que a útlima condição fosse atendida
    {
        printf("Consulte um médico");
    }
    else if (febre == 'N' && dCabeça == 'N' && dCorpo == 'N' && tosse == 'N')
    {
        printf("Você parece estar bem");
    }
    else
    {
        printf("Consulte um médico para avaliação");
    }

    return 0;
}