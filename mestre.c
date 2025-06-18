#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Entrada Carta 2
    printf("Digite os dados da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Cálculos
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1e9f) / populacao1;

    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1e9f) / populacao2;

    // Super Poder: soma dos atributos numéricos + inverso da densidade
    float superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibir dados com cálculos
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    // Comparações
    printf("Comparacao de Cartas:\n");

    // População: maior vence
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);

    // Área: maior vence
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);

    // PIB: maior vence
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);

    // Pontos Turísticos: maior vence
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);

    // Densidade: menor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2 ? 1 : 0);

    // PIB per Capita: maior vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);

    // Super Poder: maior vence
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}
