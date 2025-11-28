#include <stdio.h>
#include <string.h>

int main()
{
    int m, n;
    int cob = 0;
    int nCob = 0;
    printf("Digite o número de linhas: ");
    scanf("%d", &m);
    printf("Digite o número de colunas: ");
    scanf("%d", &n);
    int matriz[m][n];
    int i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Linha %d Coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matriz[i][j] == 1)
            {
                if (matriz[i - 1][j] == 2 || matriz[i][j + 1] == 2 || matriz[i][j - 1] == 2 || matriz[i + 1][j] == 2)
                {
                    cob = cob + 1;
                }
                else
                {
                    nCob = nCob + 1;
                }
            }
        }
    }

    printf("%d %d", cob, nCob);

    return 0;
}