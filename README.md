# Introdução a Técnicas de Programação - Unidade 1 e 2
**Aluno**: Gabriel Sydney de Paiva  
**Matrícula**: 20250052853  
**Período**: 2025.2  
## 📁 Estrutura do Projeto
- `projeto/src`: Projeto principal da unidade 
- `listas/`: Soluções das listas de exercícios 
- `relatorios/`: Relatórios técnicos do projeto 
- `README.md`: Este arquivo 
## 🚀 Projeto: SISTEMA DE PONTO POR IDENTIFICAÇÃO(NÚMERO ÚNICO)
**Descrição**: Registra a entrada dos funcionários de uma empresa e também apresenta os funcionários presentes.    
**Repositório**: https://github.com/Gabrielsydney/paiva-gabriel-itp-u1-2025-2   
**Vídeo de Demonstração - U1**: https://www.youtube.com/watch?v=Ia1cuyvJ0Dc                                                                                                                                          
**Vídeo de Demonstração - U2**: https://www.youtube.com/watch?v=gmTQFX44I8w
### Funcionalidades Implementadas:
- Uma nova opção na lista de opções foi acrescentada;
- Armazena o nome dos funcionários presentes;
- O chefe tem acesso a essa lista;
- Evita memory leaks;
### Conceitos da U1 Aplicados:
- Estruturas condicionais: Logo de início, foi utilizada para receber a funcionalidade que seria executada. Foram também utilizadas várias estruturas para diferentes condições para verificar se o nome e o código passado constavam nos dados armazenados.  Além de retornar um valor que concedia ou não acesso a empresa.

- Estruturas de repetição: `Do-While:`Foi utilizada no início do código para tratar os dados que não fossem fidedignos. Caso não fossem compatíveis, o processo seria recomeçado, até que o contrário ocorresse. `While:`Foi utilizada para verificar se o código interno passado pelo usuário estava nos registros da empresa. `For:`Foi utilizada para verificar se o nome do usuário passado pelo usuário estava nos registros da empresa.
  
- Vetores: Foi utilizado vetores para armazenar o nome e código dos funcionários.
  
- Funções: Coloquei comentários em locais específicos para separar as funções das suas irmãs(as funções menos relevantes) e da main (Função Principal). A função principal contém trechos importantes no geral, e nele há presença de códigos que levam para as outras funções que executam tarefas únicas que retornam valores ou simplesmente apresentam um menu com as funcionalidades dos sistemas.

### Conceitos da U2 Aplicados:
- Strings: foram usados os nomes dos funcionários da empresa; Na parte de escrever na tela o nome dos funcionários que estão presentes naquele dia. No projeto houve uma ajuda da função “strcmp”, utilizada para comparar as strings.

- Estruturas de Repetições Aninhadas: utilizei um Do-While dentro de um While, com o objetivo de que a estrutura externa recebesse uma opção para continuar o processo, ou que finalizasse ali mesmo. A estrutura interna teria que receber os dados da segunda parte do código, caso não alcançasse o esperado o código pararia ali mesmo. O While estava mais preocupado em garantir que todos os funcionários registrassem ponto e também que o código não fosse encerrado, escolhendo a opção 3. O Do/While (que estava dentro do while) garante que as pessoas tivessem tentativas para registrar o ponto e que as funções recebessem os valores por uma quantidade x de vezes.
Como foram utilizadas as Matrizes no projeto? 
A variável “listpresent” funciona como uma tabela com duas dimensões. Se eu colocasse apenas listpresent[0] retornaria o nome da pessoa, mas se eu colocasse listpresent[0][0], logo retornaria a primeira letra do nome.
 
- Ponteiros: tilizei o ponteiro na manipulação de strings, nos parâmetros de função, no “scanf” e no retorno do “malloc”.

- Alocação Dinâmica: foi utilizada na parte da criação dos “mallocs” e no final, utilizei a função “free” para que evitasse o memory leaks.

## 📚 Listas de Exercícios
### Semana 2 - Variáveis, Tipos e Operadores:
- ✅ Problema 1: Calculadora de IMC
- ✅ Problema 2: Conversão de temperatura
- ✅ Problema 3: Cálculo de juros compostos
- ✅ Problema 4: Operações aritméticas básicas
### Semana 3 - Condicionais:
- ✅ Problema 1: Classificação de IMC
- ✅ Problema 2: Calculadora de energia elétrica
- ✅ Problema 3: Sistema de notas
- ✅ Problema 4: Pedra, papel, tesoura
- ✅ Problema 5: Calculadora de desconto progressivo
- ✅ Problema 6: Diagnóstico médico simples
- ✅ Problema 7: Sistema de equações do 2º grau
- ✅ Problema 8: Validador de triângulos
### Semana 4A - Repetições:
- ✅ Problema 1: Dobrar folha
- ✅ Problema 2: Homem Aranha
- ✅ Problema 3: Números colegas
- ✅ Problema 4: Jogo de dardos
### Semana 4B - Análise e Padrões:
- ✅ Questões 1-4: Análise de código
- ✅ Questões 5-11: Implementações
### Semana 5 - Funções (Parte 1):
- ✅ Problema 1: Horários das rondas
- ✅ Problema 2: Primos triplos
- ✅ Problema 3: Pousando a sonda espacial
### Semana 6 - Vetores:
- ✅ Problema 1: MEC - Correção ENEM
- ✅ Problema 2: Álbum de figurinhas
- ✅ Problema 3: A construção da ponte
- ✅ Problema 4: Em busca do tesouro perdido
### Semana 7 - Strings:
- ✅ Problema 1: Campo Minado 1D
- ✅ Problema 2: Detecção de Placas
- ✅ Problema 3: Open Meet
### Semana 8 - Repetições Aninhadas:
- ✅ Problema 1: Estou com Sorte (ou não)
- ✅ Problema 2: Os dias mais chuvosos
- ✅ Problema 3: Esse sim é piloto
### Semana 9 - Matrizes:
- ✅ Problema 1: Campo Agrícola
- ✅ Problema 2: Sugestão de Amigos
- ✅ Problema 3: Campeonato de Empates
- ✅ Problema 4: Uma pechincha
### Semana 10 - Ponteiros:
- ✅ Problema 1: Soma de Vetores
- ✅ Problema 2: Ocorrências no Vetor
- ✅ Problema 3: Sopa de Letrinhas
## 🎯 Principais Aprendizados
- Compilar códigos;
- Execução de códigos no terminal com a linguagem C;
- Estrutura da linguagem (sintaxe);
- Ponteiros;
- Alocação Dinâmica;
## 🔧 Ambiente de Desenvolvimento
- **SO**: Windows
- **Compilador**: GCC versão 15.2.0
- **Editor**: Visual Studio Code (VS Code)
