#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char entrada[1000];
    char *ajuda = " ";
    int i = 0;
    fgets(entrada, 1000, stdin);
    entrada[strcspn(entrada, "\n")] = '\0';

    char *palavra = strtok(entrada, ajuda);
    char *pessoa = palavra;
    palavra = strtok(NULL, ajuda);
    while (palavra != NULL)
    {
        printf("%s\n", palavra);

        if (strcmp(pessoa, palavra) == 0)
        {
            i = i + 1;
        }
        palavra = strtok(NULL, ajuda);
    }

    printf("%d", i);

    return 0;
}