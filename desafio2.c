#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de variáveis
    char estado01[50], cidade01[50], codigo01[50];
    unsigned long int populacao01;
    float area01, pib01, densidade_populacional01, pib_per_capita01, super_poder01;
    int pontos_turisticos01;

    char estado02[50], cidade02[50], codigo02[50];
    unsigned long int populacao02;
    float area02, pib02, densidade_populacional02, pib_per_capita02, super_poder02;
    int pontos_turisticos02;

    // Entrada de dados para a carta 01
    printf("Vamos entrar com as informações da primeira carta: \n");
    printf("Entre com o nome do estado:\n");
    scanf(" %49[^\n]", estado01);
    printf("Entre com o nome da cidade:\n");
    scanf(" %49[^\n]", cidade01);
    printf("Entre com o código (A001, B001...):\n");
    scanf("%s", codigo01);
    printf("Entre com número da população:\n");
    scanf("%lu", &populacao01);
    printf("Entre com a área total (em km²):\n");
    scanf("%f", &area01);
    printf("Entre com o PIB (em R$):\n");
    scanf("%f", &pib01);
    printf("Entre com o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos01);

    // Cálculos para a carta 01
    densidade_populacional01 = populacao01 / area01;
    pib_per_capita01 = pib01 / populacao01;
    super_poder01 = (float)populacao01 + area01 + pib01 + pontos_turisticos01 + (1 / densidade_populacional01);

    // Entrada de dados para a carta 02
    printf("Agora vamos entrar com as informações da segunda carta: \n");
    printf("Entre com o nome do estado:\n");
    scanf(" %49[^\n]", estado02);
    printf("Entre com o nome da cidade:\n");
    scanf(" %49[^\n]", cidade02);
    printf("Entre com o código (A001, B001...):\n");
    scanf("%s", codigo02);
    printf("Entre com número da população:\n");
    scanf("%lu", &populacao02);
    printf("Entre com a área total (em km²):\n");
    scanf("%f", &area02);
    printf("Entre com o PIB (em R$):\n");
    scanf("%f", &pib02);
    printf("Entre com o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos02);

    // Cálculos para a carta 02
    densidade_populacional02 = populacao02 / area02;
    pib_per_capita02 = pib02 / populacao02;
    super_poder02 = (float)populacao02 + area02 + pib02 + pontos_turisticos02 + (1 / densidade_populacional02);

    // Menu para escolher o primeiro atributo
    int opcao1, opcao2;
    printf("\n### Escolha os Atributos para Comparação ###\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Escolha uma opção (1-6): ");
    scanf("%d", &opcao1);

    // Menu para escolher o segundo atributo, excluindo a escolha anterior
    printf("\nEscolha o segundo atributo (não pode ser o mesmo que o primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Escolha uma opção (1-6): ");
    scanf("%d", &opcao2);

    // Verificação de atributos duplicados
    if (opcao1 == opcao2) {
        printf("Você não pode escolher o mesmo atributo duas vezes!\n");
        return 0;  // Encerra o programa se a escolha for inválida
    }

    // Comparações e cálculos

    // Para o primeiro atributo escolhido
    float valor1, valor2;
    if (opcao1 == 1) { // População
        valor1 = (float)populacao01;
        valor2 = (float)populacao02;
    } else if (opcao1 == 2) { // Área
        valor1 = area01;
        valor2 = area02;
    } else if (opcao1 == 3) { // PIB
        valor1 = pib01;
        valor2 = pib02;
    } else if (opcao1 == 4) { // Pontos Turísticos
        valor1 = pontos_turisticos01;
        valor2 = pontos_turisticos02;
    } else if (opcao1 == 5) { // Densidade Populacional
        valor1 = densidade_populacional01;
        valor2 = densidade_populacional02;
    } else if (opcao1 == 6) { // PIB per Capita
        valor1 = pib_per_capita01;
        valor2 = pib_per_capita02;
    }

    // Para o segundo atributo escolhido
    float valor3, valor4;
    if (opcao2 == 1) { // População
        valor3 = (float)populacao01;
        valor4 = (float)populacao02;
    } else if (opcao2 == 2) { // Área
        valor3 = area01;
        valor4 = area02;
    } else if (opcao2 == 3) { // PIB
        valor3 = pib01;
        valor4 = pib02;
    } else if (opcao2 == 4) { // Pontos Turísticos
        valor3 = pontos_turisticos01;
        valor4 = pontos_turisticos02;
    } else if (opcao2 == 5) { // Densidade Populacional
        valor3 = densidade_populacional01;
        valor4 = densidade_populacional02;
    } else if (opcao2 == 6) { // PIB per Capita
        valor3 = pib_per_capita01;
        valor4 = pib_per_capita02;
    }

    // Comparação dos atributos
    int v1 = valor1 > valor2 ? 1 : 0;  // 1 se a carta 1 vencer, 0 se a carta 2 vencer
    int v2 = valor3 > valor4 ? 1 : 0;  // 1 se a carta 1 vencer, 0 se a carta 2 vencer

    // Soma dos atributos
    float soma1 = valor1 + valor3;
    float soma2 = valor2 + valor4;

    // Exibição do resultado
    printf("\n### Resultado da Comparação ###\n");
    printf("Carta 1 (%s) vs Carta 2 (%s)\n", estado01, estado02);
    printf("Atributo 1: ");
    if (v1) printf("Carta 1 venceu (%0.2f vs %0.2f)\n", valor1, valor2);
    else printf("Carta 2 venceu (%0.2f vs %0.2f)\n", valor2, valor1);

    printf("Atributo 2: ");
    if (v2) printf("Carta 1 venceu (%0.2f vs %0.2f)\n", valor3, valor4);
    else printf("Carta 2 venceu (%0.2f vs %0.2f)\n", valor4, valor3);

    printf("Soma dos Atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);

    // Determina o vencedor final
    if (soma1 > soma2) {
        printf("A Carta 1 venceu!\n");
    } else if (soma1 < soma2) {
        printf("A Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}

