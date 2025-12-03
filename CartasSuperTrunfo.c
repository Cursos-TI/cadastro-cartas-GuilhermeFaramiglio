#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[4], codigo2[4], cidade1[20], cidade2[20];
  int populacao1, populacao2, pontosT1, pontosT2;
  float area1, area2, pib1, pib2;

  // Área para entrada de dados
  // Primeira carta
  printf("Cadastro da carta (1)\n");
  printf("Digite uma letra para representar um dos oito estados (A-H): ");
  scanf(" %c", &estado1);
  printf("Digite o código da carta (O código deve receber o prefixo do estado escolhido + sequencia numérica): ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);
  printf("Digite a população: ");
  scanf("%d", &populacao1);
  printf("Digite a área (em km²): ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &pontosT1);
  printf("--------------------------------\n");

  // Segunda carta
  printf("Cadastro da carta (2)\n");
  printf("Digite uma letra para representar um dos oito estados (A-H): ");
  scanf(" %c", &estado2);
  printf("Digite o código da carta (O código deve receber o prefixo do estado escolhido + sequencia numérica): ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);
  printf("Digite a população: ");
  scanf("%d", &populacao2);
  printf("Digite a área (em km²): ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &pontosT2);
  printf("---------------------------------\n");

  // Área para exibição dos dados da cidade
  printf("------------ Carta 1 ------------\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %f Km²\n", area1);
  printf("PIB: R$ %.3f\n", pib1);
  printf("Nº de pontos turisticos: %d\n", pontosT1);
  printf("---------------------------------\n");

  printf("------------ Carta 2 ------------\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %f Km²\n", area2);
  printf("PIB: R$ %.3f\n", pib2);
  printf("Nº de pontos turisticos: %d\n", pontosT2);
  printf("---------------------------------\n");

return 0;
} 
