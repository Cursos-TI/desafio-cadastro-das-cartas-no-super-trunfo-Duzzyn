#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado[2];
    char codigo[4];
    char cidade[10];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("**************-------Bem-Vindo Ao SuperTrunfo-------**************\n");
    printf("Insira os dados da sua Primeira Carta!\n");

    printf("\nQual Estado da sua carta?: \n");
    scanf("%s", &estado);

    printf("Qual Codigo da sua carta?: \n");
    scanf("%s", &codigo);
    
    printf("Qual Cidade da sua carta?: \n");
    scanf("%s", &cidade);
    
    printf("Qual Populacao da sua carta?: \n");
    scanf("%d", &populacao);
    
    printf("Qual Area(km quadrado) da sua carta?: \n");
    scanf("%f", &area);
    
    printf("Qual Pib da sua carta?: \n");
    scanf("%f", &pib);
    
    printf("Qual numero de pontos turisticos da sua carta?: \n");
    scanf("%d", &pontosTuristicos);

    printf("\nCarta 1:\n");
    printf("\nEstado: %s", estado);
    printf("\nCodigo: %s%s", estado, codigo);
    printf("\nNome da Cidade: %s", cidade);
    printf("\nPopulacao: %d", populacao);
    printf("\nArea: %f km", area);
    printf("\nPIB: %f Milhoes de Reais", pib);
    printf("\nNumero de Pontos Turisticos: %d", pontosTuristicos);

    printf("\n\n**************Primeira Carta Finalizada!**************\n");
    printf("\n\n*Insira os dados da sua Segunda Carta!*\n");

    char estado_2[3];
    char codigo_2[4];
    char cidade_2[10];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontosTuristicos_2;

    printf("\nQual Estado da sua carta?: \n");
    scanf("%s", &estado_2);

    printf("Qual Codigo da sua carta?: \n");
    scanf("%s", &codigo_2);
    
    printf("Qual Cidade da sua carta?: \n");
    scanf("%s", &cidade_2);
    
    printf("Qual Populacao da sua carta?: \n");
    scanf("%d", &populacao_2);
    
    printf("Qual Area(km quadrado) da sua carta?: \n");
    scanf("%f", &area_2);
    
    printf("Qual Pib da sua carta?: \n");
    scanf("%f", &pib_2);
    
    printf("Qual numero de pontos turisticos da sua carta?: \n");
    scanf("%d", &pontosTuristicos_2);

    printf("\n\nCarta 2:\n");
    printf("\nEstado: %s", estado_2);
    printf("\nCodigo: %s%s", estado_2, codigo_2);
    printf("\nNome da Cidade: %s", cidade_2);
    printf("\nPopulacao: %d", populacao_2);
    printf("\nArea: %f km", area_2);
    printf("\nPIB: %f Milhoes de Reais", pib_2);
    printf("\nNumero de Pontos Turisticos: %d", pontosTuristicos_2);

    printf("\n\n**************Segunda Carta Finalizada!**************\n");

    return 0;
}
