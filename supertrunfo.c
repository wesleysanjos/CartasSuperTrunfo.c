#include <stdio.h>

int main(){

    char estado[5];
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("Qual a letra do estado (de A a H):\n");
    scanf("%s", &estado);

    printf("Qual o código da carta (de 01 a 04):\n");
    scanf("%s", &codigo);

    printf("Nome completo da cidade:\n");
    scanf(" %[^\n]", &cidade);
    
    printf("Qual a população da cidade:\n");
    scanf("%d", &populacao);

    printf("Qual a área (em Km2):\n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Qaul o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos);

    printf("Carta 1:\n");
    printf("Estado: %s \n", estado);
    printf("Código: %s%s \n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f Km2 \n", area);
    printf("PIB: %f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontos);

 printf("Qual a letra do estado (de A a H):\n");
    scanf("%s", &estado);

    printf("Qual o código da carta (de 01 a 04): \n");
    scanf("%s", &codigo);

    printf("Nome da cidade:\n");
    scanf(" %[^\n]", &cidade);
    
    printf("Qual a população da cidade:\n");
    scanf("%d", &populacao);

    printf("Qual a área (em Km2):\n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Qaul o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos);

    printf("Carta 2:\n");
    printf("Estado: %s \n", estado);
    printf("Código: %s%s \n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f Km2 \n", area);
    printf("PIB: %f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontos);

    return 0;
