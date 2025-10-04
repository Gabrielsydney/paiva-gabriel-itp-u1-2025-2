#include <stdio.h>
#include <math.h>

void rondas(int hora, int minuto, int formato)
{
    if (formato == 0)
    {
        for (int i = 0; i < 5; i++)
        {
            switch (i)
            {
            case 1:
                hora = hora + 1;
                break;
            case 2:
                hora = hora + 2;
                if (minuto > 60)
                {
                    hora = hora + 1;
                    minuto = 10;
                }
                break;
            case 3:

                break;
            case 4:

                break;

            default:
                break;
            }
            if (i == 1)
            {
                hora = hora + 1;
            }
            else if (i == 2)
            {
                hora = hora + 1;
                minuto = minuto + 10;
            }
            else if (i == 3)
            {
                hora = hora + 2;
                minuto = minuto + 30;
            }
            else if (i == 4)
            {
                hora = hora + 8;
                minuto = minuto;
            }
            printf("%02d:%02d\n", hora, minuto);
        }
    }
    else if (formato == 1)
    {
        if (hora >= 12)
        {
            hora = hora - 12;
            printf("%02d:%02d PM", hora, minuto);
        }
        else if (hora >= 0 && hora < 12)
        {
            printf("%02d:%02d AM", hora, minuto);
        }
    }
}

int main()
{
    int horas, minutos;
    int formato;

    printf("Qual as horas? ");
    scanf("%d", &horas);

    printf("Qual os minutos? ");
    scanf("%d", &minutos);

    printf("Qual o formato? ");
    scanf("%d", &formato);

    rondas(horas, minutos, formato);
}