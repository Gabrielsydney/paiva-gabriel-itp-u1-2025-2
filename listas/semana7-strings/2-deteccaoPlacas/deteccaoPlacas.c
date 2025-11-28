#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char placa[10];

    // printf("===== Detecção de Placas =====\n");
    printf("Digite o número da placa [Até 8 caracteres]: ");
    scanf("%s", placa);
    if (strlen(placa) == 8 && placa[3] == '-')
    {
        if (isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7]))
        {
            printf("Brasileiro");
        }
        else
        {
            printf("Inválido");
        }
    }
    else if (strlen(placa) == 8 && isdigit(placa[3]))
    {
        if (isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) && isupper(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]))
        {
            printf("Mercosul");
        }
    }
    else
    {
        printf("Inválido");
    }

    return 0;
}