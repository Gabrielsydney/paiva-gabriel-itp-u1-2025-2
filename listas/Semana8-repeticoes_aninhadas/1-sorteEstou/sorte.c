#include <stdio.h>
#include <string.h>

int main()
{
    int acertos = 0;
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    int sorteio[m];
    int aposta[n];
    printf("Números do Sorteio\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &sorteio[i]); // Irá digitar os números do sorteio
    }
    printf("Números da Aposta\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &aposta[i]); // Irá digitar os números da aposta
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (sorteio[i] == aposta[j])
            {
                acertos++;
            }
            
        }
        
    }
    
    printf("Números de Acertos = %d", acertos);

    return 0;
}