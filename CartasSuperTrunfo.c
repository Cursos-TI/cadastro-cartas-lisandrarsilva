#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado[1];
    int codigo;
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
  // Área para entrada de dados
 printf("Insira uma letra de A a H:\n");
    scanf("%s", estado);

    printf("Insira um código de 01 a 04:\n");
    scanf("%d", &codigo);

    printf("Insira sua cidade:\n");
    scanf("%s", cidade);

    printf("Insira a população:\n");
    scanf("%d", &populacao);

    printf("Insira a área da sua cidade:\n");
    scanf("%f", &area);

    printf("Insira o PIB da sua cidade:\n");
    scanf("%f", &pib);

    printf("Insira o número de pontos turísticos da sua cidade:\n");
    scanf("%d", &pontos_turisticos);
  // Área para exibição dos dados da cidade
printf("Carta %d\n", codigo);
printf("Estado: %s\n", estado);
printf("Código: %s %d\n", estado, codigo);
printf("Nome da Cidade: %s\n", cidade);
printf("População: %d\n", populacao);  
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f bilhões de reais\n", pib);
printf("Pontos Turísticos: %d\n", pontos_turisticos);

return 0;
} 
