#include <stdio.h>

int main(){
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

//==========================================

//Definição da variáveis - Carta 1

//==========================================
    
    char estado1[5];
    char codigo1[3];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

// Entrada dos dados - Carta 1

    printf("Carta 1 \n");
    printf("Digite a letra inicial do Estado:\n");
    scanf("%s", &estado1);

    printf("Qual o código da carta (de 01 a 04):\n");
    scanf("%s", &codigo1);

    printf("Nome completo da cidade:\n");
    scanf(" %[^\n]", &cidade1);
    
    printf("Qual a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Qual a área (em Km2):\n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade (em Bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Qaul o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos1);
//===================================

// Definião de varáveis - Carta 2

//===================================

 char estado2[5];
    char codigo2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

// Entrada dos dados - Carta 2

    printf("Carta 2 \n");
    printf("Digite a letra inicial do Estado:\n:\n");
    scanf("%s", &estado2);

    printf("Qual o código da carta (de 01 a 04): \n");
    scanf("%s", &codigo2);

    printf("Nome da cidade:\n");
    scanf(" %[^\n]", &cidade2);
    
    printf("Qual a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Qual a área (em Km2):\n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade (em Bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Qaul o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos2);

//=============================================

// Apresentação dos dados - Carta 1

    printf("\n                  Carta 1:\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s%s \n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f Km2 \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontos1);

// Apresentação dos dados - Carta 2

    printf("\n                  Carta 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s%s \n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f Km2 \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos2);

    return 0;

