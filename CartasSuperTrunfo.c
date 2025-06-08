#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1, codigo1[4], nomeCidade1[100];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2, codigo2[4], nomeCidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Entrada da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: B02): ");
    scanf(" %3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    float superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    float superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Comparações
    int compPop = populacao1 > populacao2;
    int compArea = area1 > area2;
    int compPIB = pib1 > pib2;
    int compTur = pontosTuristicos1 > pontosTuristicos2;
    int compDens = densidade1 < densidade2; // menor vence
    int compPibCapita = pibPerCapita1 > pibPerCapita2;
    int compPoder = superPoder1 > superPoder2;

    // Exibição
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", compPop);
    printf("Área: Carta 1 venceu (%d)\n", compArea);
    printf("PIB: Carta 1 venceu (%d)\n", compPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", compTur);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", compDens);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", compPibCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", compPoder);

    return 0;
}
