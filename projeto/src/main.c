/*
BEM-VINDOS
ALUNO: GABRIEL SYDNEY DE PAIVA
NOME DO PROJETO: SISTEMA DE PONTO POR IDENTIFICAÇÃO
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_NOMES 10 // Máximo de nomes que serão inseridos.
#define MAX_NOME 50  // Máximo de caracteres que serão permitidos por nome.

//--------------|Parte do código volltado para as funções|--------------//
// Função que apresenta o menu ao usuário
void menu()
{
    printf("=======================\n");
    printf("|   SISTEMA DE PONTO  |\n");
    printf("=======================\n");
    printf("|   Escolha a Opção   |\n");
    printf("| 1 - Registrar Ponto |\n");
    printf("| 2 - Ver Lista       |\n");
    printf("| 3 - Sair            |\n");
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
    char **listPresent; // Criação das gavetas que irão armazenar os funcionários presentes
    int inc = 0;

    int integrantes = 6;
    int op = 0;

    //malloc irá ajudar a segurar 10 endereços 
    listPresent = (char **)malloc(MAX_NOMES * sizeof(char *)); // Aqui iremos multiplicar um endereço de memória que é 8B x 10 

    if (listPresent == NULL)
    {
        printf("Memória insuficiente!\n");
        return 1;
    }

    while (integrantes > 0 && op != 3)
    {
        char nome[100];
        char *nomes[] = {"Mateus", "Marcos", "Lucas", "Joao", "Raquel", "Maria"};
        int tamanhoNomes = sizeof(nomes) / sizeof(nomes[0]);

        int tamanho_filtro = 0;

        int idenN, idenID, id;
        int ten = 1; // Vai aumentando conforme o número de tentativas
        int aux = 0;

        int senha = 2025;
        int senhaD; // Senha do diretor

        menu();
        printf("Opção: ");
        scanf("%d", &op);

        if (op == 1)
        {
            do
            {
                printf("----- Você tem até %d/3 tentativas -----\n", ten);
                printf("Qual seu nome: ");
                scanf("%s", nome);

                printf("Digite o seu numero de identificacao: ");
                scanf("%d", &id);

                idenN = funcionario(nome);
                idenID = identificacao(id);

                aux = aux + 1;

                if (idenN != -1 && idenID != -1 && idenN == idenID) // Garante que se o Nome e o ID forem compatíveis o processo de busca se encerra.
                {
                    aux = 3;
                }
                else if ((aux > -1 && idenID == -1 || idenN == -1 || idenID != -1 || idenN != -1) && aux < 3)
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
                ten++;

            } while ((((idenN == -1 || idenID == -1)) && ten < 3) || aux < 3);

            //-----------------------------------------------------------------------------//
            if (idenN != -1 && idenID != -1 && idenN == idenID)
            {
                printf("Bom dia, %s!\n\n", nome);

                if (inc < MAX_NOMES)
                {
                    int tamanho_necessario = strlen(nome) + 1;
                    listPresent[inc] = (char *)malloc(tamanho_necessario * sizeof(char)); //Pegando o endereço pelo malloc e guardando na lista
                    strcpy(listPresent[inc], nome); // Aqui irá copiar o nome que estava na variável "nome" e torna essa cópia definitiva no listPresent
                    inc++;
                }
                else
                {
                    printf("Todos os funcionários estão presentes!\n");
                }
            }
            else if (aux >= 3 && idenN != idenID)
            {
                printf("Excedeu o limite de tentativas!\n");
            }
            else if (idenN == -1 && idenID == -1)
            {
                printf("Dados não encontrados!\n");
            }
        }
        else if (op == 2)
        {
            printf("Digite a senha de acesso: ");
            scanf("%d", &senhaD);
            if (senhaD == senha)
            {
                printf("======================================= \n");
                printf("|   Lista dos funcionários Presentes  |\n");
                printf("=======================================\n");

                if (inc == 0)
                {
                    printf("Nenhum registro encontrado.\n");
                }
                else if (inc == 6)
                {
                    printf("Todos os funcionários presentes.\n");
                }
                else
                {
                    for (int i = 0; i < inc; i++)
                    {
                        printf("%s\n", listPresent[i]);
                    }
                }
                integrantes = 0;
            }
            else
            {
                printf("Senha de acesso negada!");
                op = 3;
            }
        }
    }

    for (int i = 0; i < inc; i++)
    {
        free(listPresent[i]);
    }

    free(listPresent);

    return 0;
}
