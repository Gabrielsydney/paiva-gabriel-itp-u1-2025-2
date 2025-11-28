#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[20] = {"..xx..xx.x.x..x.x..x"};
    int indice = 0;

    printf("===== Campo Minado =====\n");
    printf("Digite um número [0 até 19]: ");
    scanf("%d", &indice);

    if (palavra[indice] == '.')
    {
        if (palavra[indice - 1] == 'x' || palavra[indice + 1] == 'x')
        {
            printf("1");
        }
    }
    else if (palavra[indice] == 'x')
    {
        printf("BUM!");
    }
    return 0;
}