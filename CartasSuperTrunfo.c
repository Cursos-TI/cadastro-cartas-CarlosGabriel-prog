#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado;
  char codigoCidade[10];
  char nomeCidade[50];
  int populacao;
  float area;
  float pib;
  int pontosTuristicos;

  // Área para entrada de dados

  printf("Digite o nome do estado: ");
  scanf("%s", &estado);//ok

  printf("Digite o código da cidade: ");
  scanf("%s", &codigoCidade);//ok

  printf("Digite o nome da cidade: ");
  scanf("%s", &nomeCidade);//ok

  printf("Qual a população da cidade: ");
  scanf("%d", &populacao);

  printf("Qual a área da cidade: ");
  scanf("%f", &area);

  printf("Qual o PIB da cidade: ");
  scanf("%f", &pib);

  printf("Quantos pontos turísticos a cidade possui: ");
  scanf("%d", &pontosTuristicos);

  // Área para exibição dos dados da cidade

  printf("DESAFIO SUPER TRUNFO - Países\n");
  
  printf("Estado: %s\n", estado);
  printf("Código da Cidade: %s\n", codigoCidade);
  printf("Nome da Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área (em km²): %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

return 0;
}
