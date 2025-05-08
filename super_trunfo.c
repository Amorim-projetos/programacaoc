#include <stdio.h>

// Declaração de Variáveis: Cada variável é declarada para armazenar os dados de cada carta.

// Leitura de Dados: Utilizamos scanf para ler os dados de entrada do usuário, formatando-os conforme necessário para evitar problemas de buffer.

// Exibição de Dados: Após a leitura, os dados são exibidos na tela conforme o formato especificado, utilizando formatação de strings (%c, %s, %d, %f) para garantir que os números sejam exibidos corretamente.

// Este código atende aos requisitos do desafio, focando apenas na entrada, armazenamento e saída dos dados das cartas do Super Trunfo.


int main() {
    // Variáveis para armazenar os dados das duas cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Leitura dos dados da primeira carta
    printf("Informe os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // %c com espaço para ignorar quebra de linha
    printf("Código da Carta (%c01-%c04): ", estado1, estado1);
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // %[^\n] para ler espaços até a quebra de linha
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("\nInforme os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (%c01-%c04): ", estado2, estado2);
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}