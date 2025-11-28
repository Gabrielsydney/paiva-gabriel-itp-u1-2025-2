#include <stdio.h>
#include <string.h>

int main()
{
    int m;
    printf("Digite o número de linhas e colunas: ");
    scanf("%d", &m);
    int matriz[m][m];
    int i, j;
    int emp = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Linha %d Coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j = i + 1; j < m; j++)
        {
            if (i == j)
            {
                matriz[i][j] == 0;
                emp = emp + 0;
            }
            else
            {
                if (matriz[i][j] == matriz[j][i])
                {
                    emp = emp + 1;
                }
            }
        }
    }
    printf("\n%d", emp);

    return 0;
}