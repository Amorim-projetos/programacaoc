#include <stdio.h>

// Declaração de Variáveis: Cada variável é declarada para armazenar os dados de cada carta.

// Leitura de Dados: Utilizamos scanf para ler os dados de entrada do usuário, formatando-os conforme necessário para evitar problemas de buffer.

// Exibição de Dados: Após a leitura, os dados são exibidos na tela conforme o formato especificado, utilizando formatação de strings (%c, %s, %d, %f) para garantir que os números sejam exibidos corretamente.

// Este código atende aos requisitos do desafio, focando apenas na entrada, armazenamento e saída dos dados das cartas do Super Trunfo.

#include <stdio.h>

// Definição da estrutura Carta
struct Carta {
    char estado[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float pib_per_capita;
    float densidade_populacional;
};

// Função para calcular o Super Poder
float calcular_super_poder(struct Carta carta) {
    return carta.populacao + carta.area + carta.pib + carta.pontos_turisticos +
           carta.pib_per_capita + (1.0 / carta.densidade_populacional);
}

// Função para comparar duas cartas
void comparar_cartas(struct Carta carta1, struct Carta carta2) {
    printf("Comparação de Cartas:\n");

    // Comparação de atributos
    printf("População: %s venceu (%d)\n", (carta1.populacao > carta2.populacao) ? "Carta 1" : "Carta 2",
           (carta1.populacao > carta2.populacao));
    printf("Área: %s venceu (%d)\n", (carta1.area > carta2.area) ? "Carta 1" : "Carta 2", (carta1.area > carta2.area));
    printf("PIB: %s venceu (%d)\n", (carta1.pib > carta2.pib) ? "Carta 1" : "Carta 2", (carta1.pib > carta2.pib));
    printf("Pontos Turísticos: %s venceu (%d)\n", (carta1.pontos_turisticos > carta2.pontos_turisticos) ? "Carta 1" : "Carta 2",
           (carta1.pontos_turisticos > carta2.pontos_turisticos));
    printf("Densidade Populacional: %s venceu (%d)\n", (carta1.densidade_populacional < carta2.densidade_populacional) ? "Carta 1" : "Carta 2",
           (carta1.densidade_populacional < carta2.densidade_populacional));
    printf("PIB per Capita: %s venceu (%d)\n", (carta1.pib_per_capita > carta2.pib_per_capita) ? "Carta 1" : "Carta 2",
           (carta1.pib_per_capita > carta2.pib_per_capita));
    printf("Super Poder: %s venceu (%d)\n", (calcular_super_poder(carta1) > calcular_super_poder(carta2)) ? "Carta 1" : "Carta 2",
           (calcular_super_poder(carta1) > calcular_super_poder(carta2)));
}

int main() {
    // Exemplo de uso
    struct Carta carta1 = {"SP", 45000000, 248.2, 2300.5, 12, 35000, 1024.5};
    struct Carta carta2 = {"RJ", 16000000, 120.7, 1800.2, 10, 28000, 700.3};

    comparar_cartas(carta1, carta2);

    return 0;
}