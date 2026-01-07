#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado1[2];
  char codigoCidade1[4];
  char nomeCidade1[59];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibperCapita1;

  char estado2[2];
  char codigoCidade2[4];
  char nomeCidade2[59];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibperCapita2;

  // Área para entrada de dados

  printf("Digite o nome do estado: ");
  scanf("%1s", &estado1);

  printf("Digite o código da cidade: ");
  scanf("%3s", &codigoCidade1);

  printf("Digite o nome da cidade: ");
  scanf("%58s", &nomeCidade1);

  printf("Qual a população da cidade: ");
  scanf("%d", &populacao1);

  printf("Qual a área da cidade: ");
  scanf("%f", &area1);

  printf("Qual o PIB da cidade: ");
  scanf("%f", &pib1);

  printf("Quantos pontos turísticos a cidade possui: ");
  scanf("%d", &pontosTuristicos1);

  // Área para calculo de dados

  pib1 = pib1 * 1000000000;//not ok
  pib2 = pib2 * 1000000000;//not ok

  densidadePopulacional1 = populacao1 / area1;//not ok
  pibperCapita1 = pib1 / populacao1;//not ok

  densidadePopulacional2 = populacao2 / area2;//not ok
  pibperCapita1 = pib2 / populacao2;//not ok

  //espaço entre entrada de dados
  printf("\n");
  //espaço entre entrada de dados

  printf("Digite o nome do estado: ");
  scanf("%1s", &estado2);

  printf("Digite o código da cidade: ");
  scanf("%3s", &codigoCidade2);

  printf("Digite o nome da cidade: ");
  scanf("%58s", &nomeCidade2);

  printf("Qual a população da cidade: ");
  scanf("%d", &populacao2);

  printf("Qual a área da cidade: ");
  scanf("%f", &area2);

  printf("Qual o PIB da cidade: ");
  scanf("%f", &pib2);

  printf("Quantos pontos turísticos a cidade possui: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade

  printf("=============================\n");
  printf("DESAFIO SUPER TRUNFO - Países\n");
  printf("=============================\n");
  printf("\n");
  
  printf("Estado: %s\n", estado1);
  printf("Código da Cidade: %s\n", codigoCidade1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área (em km²): %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Dencidade Populacional: %.2f hab/km²\n",   densidadePopulacional1);//not ok
  printf("PIB per capita: %.2f reais\n", pibperCapita1);//not ok
  printf("\n");

  printf("=============================\n");
  printf("=============================\n");
  printf("\n");

  printf("Estado: %s\n", estado2);
  printf("Código da Cidade: %s\n", codigoCidade2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área (em km²): %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Dencidade Populacional: %.2f hab/km²\n", densidadePopulacional2);//not ok
  printf("PIB per capita: %.2f reais\n", pibperCapita2);//not ok
  printf("\n");

  printf("=============================\n");
  printf("=============================\n");

return 0;
}