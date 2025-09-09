#include <stdio.h>

int main() {
    // Variáveis para a carta 1
    char estado1[50];
    char codigocarta1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Variáveis para a carta 2
    char estado2[50];
    char codigocarta2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;    

    // Carta 1 - Cadastro
    printf("---Cadastro da Carta 1 ---\n");

    printf("Escreva o nome do Estado: \n");
    scanf("%s", estado1);

    printf("Escreva o Código da Carta: \n");
    scanf("%s", codigocarta1);

    printf("Escreva o nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Escreva a população: \n");
    scanf("%d", &populacao1);

    printf("Escreva a área: \n");
    scanf("%f", &area1);

    printf("Escreva o PIB: \n");
    scanf("%f", &pib1);

    printf("Escreva um ponto turístico (número): \n");
    scanf("%d", &pontosturisticos1);


    // Carta 2 - Cadastro
    printf("---Cadastro da Carta 2 ---\n");

    printf("Escreva o nome do Estado: \n");
    scanf("%s", estado2);

    printf("Escreva o Código da Carta: \n");
    scanf("%s", codigocarta2);

    printf("Escreva o nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Escreva a população: \n");
    scanf("%d", &populacao2);

    printf("Escreva a área: \n");
    scanf("%f", &area2);

    printf("Escreva o PIB: \n");
    scanf("%f", &pib2);

    printf("Escreva um ponto turístico (número): \n");
    scanf("%d", &pontosturisticos2);


    // Exibição das cartas
    printf("\n---Informações da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Ponto turístico: %d\n", pontosturisticos1);

    printf("\n---Informações da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Ponto turístico: %d\n", pontosturisticos2);    

    return 0;
}