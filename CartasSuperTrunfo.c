#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

 
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // variaveis da primeira carta
    char estado1[10], codigo1[10], cidade1[20];
    int população1, turisticos1;
    float pib1, áreaKm²1;

 // Váriaveis da segunda carta 
    char estado2[10], codigo2[10], cidade2[20];
    int população2, turisticos2;
    float pib2, áreaKm²2;




  // Área para entrada de dados

  // cartas 1

  printf("Cadastro da primeira carta\n");

  printf("Digite o Estado(sigla): \n");
  scanf("%s", estado1);

  printf("Digite o Codigo da Carta: \n");
  scanf("%s", codigo1);

  printf("Digite o nome da Cidade:\n");
  scanf("%s", cidade1);

  printf("Qual a população da cidade(mil): \n");
  scanf("%d", &população1);

  printf("Quantos pontos turisticos: \n");
  scanf("%d", &turisticos1);

  printf("Qual o pib da cidade(milhões): \n");
  scanf("%f", &pib1);

  printf("Qual a área da cidade(milhõesKM²): \n");
  scanf("%f", &áreaKm²1);
  

  // carta2

  printf("Cadastro da segunda carta\n");

  printf("Digite o Estado(sigla): \n");
  scanf("%s", estado2);

  printf("Digite o Codigo da Carta: \n");
  scanf("%s", codigo2);

  printf("Digite o nome da Cidade:\n");
  scanf("%s", cidade2);

  printf("Qual a população da cidade(mil): \n");
  scanf("%d", &população2);

  printf("Quantos pontos turisticos: \n");
  scanf("%d", &turisticos2);

  printf("Qual o pib da cidade(milhões): \n");
  scanf("%f", &pib2);

  printf("Qual a área da cidade(milhõesKM²): \n");
  scanf("%f", &áreaKm²2);



  // Área para exibição dos dados da cidade
  printf("cartas cadastradas \n");
  printf("estado: %s - codigo da carta: %s - cidade: %s\n", estado1,codigo1, cidade1);
  printf("população: %d mil - pontos turisticos: %d - pib: %.2f milhões - área: %.2f milhõesKM²\n", população1, turisticos1, pib1, áreaKm²1);





 printf("cartas cadastradas \n");
  printf("estado: %s - codigo da carta: %s - cidade: %s\n", estado2,codigo2, cidade2);
  printf("população: %d mil - pontos turisticos: %d - pib: %.2f milhões - área: %.2f milhõesKM²\n", população2, turisticos2, pib2, áreaKm²2);

return 0;
} 
