#include <stdio.h>
#include <math.h>

void horario(int hora, int minuto, int formato)
{
    if (formato == 0)
    {
        printf("%02d:%02d\n", hora, minuto);
    }
    else
    {
        if (hora == 0)
        {
            printf("%02d:%02dAM\n", hora, minuto);
        }
        else if (hora < 12)
        {
            printf("%02d:%02dAM\n", hora, minuto);
        }
        else if (hora == 12)
        {
            printf("%02d:%02dPM\n", hora, minuto);
        }
        else if (hora > 12)
        {
            printf("%02d:%02dPM\n", hora - 12, minuto);
        }
    }
}

int ajusteHora(int a, int b)
{
    int hora = a + (b / 60);
    return hora;
}

int main()
{
    int horas1, minutos1;
    int formato;

    printf("Qual as horas? ");
    scanf("%d", &horas1);

    printf("Qual os minutos? ");
    scanf("%d", &minutos1);

    printf("Qual o formato? ");
    scanf("%d", &formato);

    horario(horas1, minutos1, formato);

    // Ronda 2
    int horas2 = horas1 + 1;
    int minutos2 = minutos1 + 0;
    horario(horas2 % 24, minutos2, formato);
    // ---------------

    // Ronda 3
    int horas3 = horas1 + 2;
    int minutos3 = minutos1 + 10;

    horas3 = ajusteHora(horas3, minutos3);

    int minutosFinal3 = minutos3 % 60;
    int horasFinal3 = horas3 % 24;

    horario(horasFinal3, minutosFinal3, formato);
    // ---------------

    // Ronda 4
    int horas4 = horas1 + 4;
    int minutos4 = minutos1 + 40;

    horas4 = ajusteHora(horas4, minutos4);

    int minutosFinal4 = minutos4 % 60;
    int horasFinal4 = horas4 % 24;

    horario(horasFinal4, minutosFinal4, formato);
    // ---------------

    // Ronda 5
    int horas5 = horas1 + 12;
    int minutos5 = minutos1 + 05;

    horas5 = ajusteHora(horas5, minutos5);

    int minutosFinal5 = minutos5 % 60;
    int horasFinal5 = horas5 % 24;

    horario(horasFinal5, minutosFinal5, formato);
    // ---------------

    return 0;
}
