#include <stdio.h>

int main() {
    // Carta 1 - Itajaí, SC
    char estado1 = 'S';
    char codigo1[5] = "A01";
    char cidade1[100] = "Itajaí";
    int populacao1 = 158000;
    float area1 = 277.56;
    float pib1 = 8.45;
    int pontos1 = 10;

    // Carta 2 - Balneário Camboriú, SC
    char estado2 = 'S';
    char codigo2[5] = "B02";
    char cidade2[100] = "Balneário Camboriú";
    int populacao2 = 145000;
    float area2 = 45.40;
    float pib2 = 5.20;
    int pontos2 = 15;

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
