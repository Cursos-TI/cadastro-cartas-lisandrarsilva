#include <stdio.h>

int main() {

    char estado1[2];
    char codigo1[3];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    printf("Insira uma letra de A a H:\n");
    scanf("%s", estado1);

    printf("Insira um código de 01 a 04:\n");
    scanf("%s", codigo1);

    printf("Insira sua cidade:\n");
    scanf("%s", cidade1);

    printf("Insira a população:\n");
    scanf("%d", &populacao1);

    printf("Insira a área da sua cidade:\n");
    scanf("%f", &area1);

    printf("Insira o PIB da sua cidade:\n");
    scanf("%f", &pib1   );

    printf("Insira o número de pontos turísticos da sua cidade:\n");
    scanf("%d", &pontos_turisticos1);

printf("Carta 1\n");
printf("Estado: %s\n", estado1);
printf("Código: %s %s\n", estado1, codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);  
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos Turísticos: %d\n", pontos_turisticos1);

char estado2[2];
    char codigo2[3];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("Insira uma letra de A a H:\n");
    scanf("%s", estado2);

    printf("Insira um código de 01 a 04:\n");
    scanf("%s", codigo2);

    printf("Insira sua cidade:\n");
    scanf("%s", cidade2);

    printf("Insira a população:\n");
    scanf("%d", &populacao2);

    printf("Insira a área da sua cidade:\n");
    scanf("%f", &area2);

    printf("Insira o PIB da sua cidade:\n");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da sua cidade:\n");
    scanf("%d", &pontos_turisticos2);

printf("Carta 2\n");
printf("Estado: %s\n", estado2);
printf("Código: %s %s\n", estado2, codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);  
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
