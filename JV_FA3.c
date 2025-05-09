#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar as notas
    float nota1, nota2, nota3, media;

    // Solicita ao usuário a entrada das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Cálculo da média das três notas
    media = (nota1 + nota2 + nota3) / 3;

    // Exibe a média calculada
    printf("A média das notas é: %.2f\n", media);

    return 0;
}