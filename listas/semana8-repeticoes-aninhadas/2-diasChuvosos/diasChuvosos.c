#include <stdio.h>
#include <string.h>

int main()
{
    int chuva[12];
    char *meses[12] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio",
                       "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &chuva[i]);
    }

    int n = 12;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (chuva[j] < chuva[j + 1])
            {
                int tempChuva = chuva[j];
                chuva[j] = chuva[j + 1];
                chuva[j + 1] = tempChuva;

                char *temp = meses[j];
                meses[j] = meses[j + 1];
                meses[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s %d \n", meses[i], chuva[i]);
    }

    return 0;
}