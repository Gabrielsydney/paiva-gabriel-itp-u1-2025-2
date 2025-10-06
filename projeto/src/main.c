/*
BEM-VINDOS
ALUNO: GABRIEL SYDNEY DE PAIVA
NOME DO PROJETO: SISTEMA DE PONTO POR IDENTIFICAÇÃO 
*/
#include <stdio.h>
#include <string.h>

//--------------|Parte do código volltado para as funções|--------------//
// Função que apresenta o menu ao usuário
void menu()
{
    printf("=======================\n");
    printf("|   SISTEMA DE PONTO  |\n");
    printf("=======================\n");
    printf("|   Escolha a Opção   |\n");
    printf("| 1 - Registrar Ponto |\n");
    printf("| 2 - Sair            |\n");
    printf("=======================\n");
}
// Função que verifica o nome do funcionário
int funcionario(char *a)
{
    char *funcionarios[] = {"Mateus", "Marcos", "Lucas", "Joao", "Raquel", "Maria"};

    int aux = sizeof(funcionarios) / sizeof(funcionarios[0]); // 48 bytes / 8 bytes = 6

    for (int i = 0; i < aux; i++)
    {
        if (strcmp(a, funcionarios[i]) == 0) // strcmp - função capaz de comparar as strings.
        {
            return i;
        }
    }
    return -1;
}
// Função que verifica o código interno do funcionário
int identificacao(int b)
{
    int identificador[] = {1, 2, 3, 4, 5, 6};
    int i = 0;
    int aux = sizeof(identificador) / sizeof(identificador[0]); // 48bytes / 8bytes = 6

    while (i < aux)
    {
        if (identificador[i] == b)
        {
            return i;
        }
        i++;
    }
    return -1;
}

//--------------|Parte do código volltado para a FUNÇÃO PRINCIPAL|--------------//
int main()
{
    int integrantes = 6;
    int op;
    while (integrantes > 0 && op != 2)
    {
        char nome[100];

        int idenN, idenID, id;
        int ten = 1;
        int aux = 0;
        menu();

        printf("Opção: ");
        scanf("%d", &op);

        if (op == 1)
        {
            do
            {
                printf("\n----- Você tem %d/3 tentativas -----\n", ten);
                printf("Qual seu nome: ");
                scanf("%s", nome);

                printf("Digite o seu numero de identificacao: ");
                scanf("%d", &id);

                idenN = funcionario(nome);
                idenID = identificacao(id);

                aux = aux + 1;

                if (idenN != -1 && idenID != -1 && idenN == idenID)
                {
                    aux = 3;
                }
                if ((aux > -1 && idenID == -1 || idenN == -1 || idenID != -1 || idenN != -1) && aux < 3)
                {
                    if (idenN == -1) // Garante que o que esteja errado seja o nome. (Fiz isso pois o que retorna é o endereço)
                    {
                        printf("Você digitou seu nome errado.\n");
                    }
                    else if (idenID == -1) // Garante que o que esteja errado seja o código. (Fiz isso pois o que retorna é o endereço)
                    {
                        printf("Você digitou seu código interno errado\n");
                    }
                    else
                    {
                        printf("Dados errados ou dados não compatíveis!\n");
                    }
                }
                // printf("%d\n", aux);
                // printf("%d %d\n", idenN, idenID);
                ten++;

            } while ((((idenN == -1 || idenID == -1)) && ten < 3) || aux < 3);

            //-----------------------------------------------------------------------------//
            if (idenN != -1 && idenID != -1 && idenN == idenID)
            {
                printf("Bom dia, %s!\n\n", nome);
                integrantes--;
            }
            else if (aux >= 3 && idenN != idenID)
            {
                printf("Excedeu o limite de tentativas!\n\n");
            }
            else if (idenN == -1 && idenID == -1)
            {
                printf("Dados não encontrados!\n");
            }
        }
    }
    return 0;
}