#include <stdio.h>
#include <math.h>

// -----------------------------------------------
// ### Problema 1 - Classificação de IMC

// int main()
// {
//     float peso, altura, imc;

//     printf("Digite seu peso (kg): ");
//     scanf("%f", &peso);

//     printf("Digite sua altura: ");
//     scanf("%f", &altura);

//     imc = peso / (altura * altura);

//     printf("O imc da pessoa é %f\n", imc);
//     if (imc < 18.5)
//     {
//         printf("Abaixo do peso");
//     }
//     else if (imc >= 18.5 && imc <= 24.9)
//     {
//         printf("Peso Normal");
//     }
//     else if (imc >= 25.0 && imc <= 29.9)
//     {
//         printf("Sobrepeso");
//     }
//     else
//     {
//         printf("Obesidade");
//     }

//     return 0;
// }
// -----------------------------------------------
// ### Problema 2 - Calculadora de energia elétrica

// int main()
// {
//     float r, c, i, valor, txFixa, kwh;
//     char resul;

//     r = 0.60;
//     c = 0.48;
//     i = 1.29;
//     txFixa = 15.0;
//     printf("Qual o seu gasto em kWh? ");
//     scanf("%f", &kwh);
//     printf("Sua propriedade é Residencial[r], Comercial[c] ou Industrial[i]? ");
//     scanf(" %c", &resul);
//     printf("O total a pagar vai ser: ");

//     if (resul == 'r')
//     {
//         valor = (r * kwh) + txFixa;
//         printf("R$%2.f", valor);
//     }
//     else if (resul == 'c')
//     {
//         valor = (c * kwh) + txFixa;
//         printf("R$%2.f", valor);
//     }
//     else if (resul == 'i')
//     {
//         valor = (i * kwh) + txFixa;
//         printf("R$%2.f", valor);
//     }

//     return 0;
// }
// -----------------------------------------------
// ### Problema 3 - Sistema de notas

// int main()
// {
//     float media, n1, n2, n3, nRec;

//     printf("Digite a sua n1: ");
//     scanf("%f", &n1);
//     printf("Digite a sua n2: ");
//     scanf("%f", &n2);
//     printf("Digite a sua n3: ");
//     scanf("%f", &n3);
//     media = (n1 + n2 + n3) / 3;

//     if (media >= 7.0)
//     {
//         printf("Aluno foi aprovado com média: %1.f", media);
//     }
//     else if (media >= 4.0 && media < 7.0)
//     {
//         nRec = 10.0 - media;
//         printf("Aluno está em recuperação e precisará tirar %1.f", nRec);
//     }
//     else {
//         printf("Aluno está reprovado! média: %f", media);
//     }

//         return 0;
// }
// -----------------------------------------------
// ### Problema 4 - Jogo: Pedra, Papel, Tesoura

// int main()
// {
//     char jogador1, jogador2;
//     printf("[Jogador 1] Pedra (P), Papel (A) ou Tesoura (T)? ");
//     scanf(" %c", &jogador1);
//     printf("[Jogador 2] Pedra (P), Papel (A) ou Tesoura (T)? ");
//     scanf(" %c", &jogador2);

//     if (jogador1 == jogador2)
//     {
//         printf("Empate!");
//     }
//     else
//     {
//         if ((jogador1 == 'P' && jogador2 == 'T') || (jogador1 == 'A' && jogador2 == 'P') || (jogador1 == 'T' && jogador2 == 'A'))
//         {
//             printf("Jogador 1 é o vencedor");
//         }
//         else if ((jogador2 == 'P' && jogador1 == 'T') || (jogador2 == 'A' && jogador1 == 'P') || (jogador2 == 'T' && jogador1 == 'A'))
//         {
//             printf("Jogador 2 é o vencedor");
//         }
//     }

//     return 0;
// }
// -----------------------------------------------
// ### Problema 5 - Calculadora de desconto progressivo

// int main()
// {
//     float desc, compra, vF;
//     printf("Qual o valor da sua compra? ");
//     scanf("%f", &compra);
//     if (compra <= 100.00)
//     {
//         printf("Valores abaixo de R$100, nenhum desconto é aplicado. Não gostaria de inserir mais algo proporcional para garantir o desconto?");
//     }
//     else if (compra > 100.00 && compra <= 500.00)
//     {
//         desc = 0.1 * compra;
//         vF = compra - desc;
//         printf("Você ganhou R$%2.f de desconto na sua compra. Totalizando R$%2.f ganhando 10%% de desconto. \n", desc, vF);
//     }
//     else if (compra > 500.00 && compra <= 1000.00)
//     {
//         desc = 0.15 * compra;
//         vF = compra - desc;
//         printf("Você ganhou R$%2.f de desconto na sua compra. Totalizando R$%2.f ganhando 15%% de desconto. \n", desc, vF);
//     }
//     else
//     {
//         desc = 0.20 * compra;
//         vF = compra - desc;
//         printf("Você ganhou R$%2.f de desconto na sua compra. Totalizando R$%2.f ganhando 20%% de desconto. \n", desc, vF);
//     }
//     return 0;
// }
// -----------------------------------------------
// ### Problema 6 - Diagnóstico médico simples

// int main()
// {
//     char febre, dCabeça, dCorpo, tosse;
//     printf("Tem Febre [S/N]? ");
//     scanf(" %c", &febre);
//     printf("Tem Dor de Cabeça [S/N]? ");
//     scanf(" %c", &dCabeça);
//     printf("Tem Dor no Corpo [S/N]? ");
//     scanf(" %c", &dCorpo);
//     printf("Tem Tosse [S/N]? ");
//     scanf(" %c", &tosse);

//     if (febre == 'S' && dCabeça == 'S' && dCorpo == 'S' && tosse == 'N') //critério com 'N' utilizada para que a útlima condição fosse atendida
//     {
//         printf("Possível Gripe");
//     }
//     else if (tosse == 'S' && febre == 'S' && dCabeça == 'N') //critério com 'N' utilizada para que a útlima condição fosse atendida
//     {
//         printf("Possível Resfriado");
//     }
//     else if (dCabeça == 'S' && tosse == 'N') //critério com 'N' utilizada para que a útlima condição fosse atendida
//     {
//         printf("Possível Enxaqueca");
//     }
//     else if (febre == 'S' && tosse == 'N') //critério com 'N' utilizada para que a útlima condição fosse atendida
//     {
//         printf("Consulte um médico");
//     }
//     else if (febre == 'N' && dCabeça == 'N' && dCorpo == 'N' && tosse == 'N')
//     {
//         printf("Você parece estar bem");
//     }
//     else
//     {
//         printf("Consulte um médico para avaliação");
//     }

//     return 0;
// }
// -----------------------------------------------
// ### Problema 7 - Sistema de equações do 2º grau

// int main()
// {
//     float a, b, c, disc, raiz1, raiz2;
//     a = 0;
//     printf("Digite o valor de A(deve ser diferente de 0): ");
//     scanf("%f", &a);
//     while (a == 0)
//     {
//         printf("Digite o valor de A(deve ser diferente de 0): ");
//         scanf("%f", &a);
//     }
//     printf("Digite o valor de B: ");
//     scanf("%f", &b);
//     printf("Digite o valor de C: ");
//     scanf("%f", &c);
//     disc = (pow(b, 2) - (4 * a * c));

//     if (disc > 0)
//     {
//         raiz1 = (-b + sqrt(disc)) / (2 * a);
//         raiz2 = (-b - sqrt(disc)) / (2 * a);

//         printf("Raízes: %f e %f", raiz1, raiz2);
//     }
//     else if (disc == 0)
//     {
//         printf("%f", disc);
//     }
//     else if (disc < 0)
//     {
//         printf("Não possui raízes reais");
//     }

//     return 0;
// }
// -----------------------------------------------
// ### Problema 8 - Validador de Triângulos

int main()
{
    int valor1, valor2, valor3;
    printf("Digite os 3 valores \n");
    printf("Valor 1: ");
    scanf("%d", &valor1);
    printf("Valor 2: ");
    scanf("%d", &valor2);
    printf("Valor 3: ");
    scanf(" %d", &valor3);

    if (valor1 == valor2 && valor2 == valor3)
    {
        printf("Todos os lados são Iguais  - Equilátero");
    }
    else if (valor1 == valor2 || valor2 == valor3 || valor1 == valor3)
    {
        printf("Dois valores são iguais - Isósceles");
        if (valor1 == 90 || valor2 == 90 || valor3 == 90)
        {
            
        }
    }
    else if (valor1 != valor2 && valor2 != valor3)
    {
        printf("Todos os lados são diferentes - Escaleno");
    }
}