#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    

    //Primeira Carta

    printf("Super Trunfo em C - Cadastro de Cartas \n");
    printf("\n");
    printf("===== CARTA 1 =====\n");
    

    char estado;
    char codigo[3];
    char nomeDaCidade[50];
    int populacao, pontosTuristicos;
    float area, pib;

    printf("Digite uma letra (A-H) para representar um Estado: "); 
    scanf(" %c", &estado);
    printf("Código da Carta (ex.:A01): ");
    scanf("%s", codigo);
    printf("Nome da Cidade: ");
    scanf("%s", nomeDaCidade);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n");

    //Carta 2

    printf("===== CARTA 2 =====\n");
   
    char estado2;
    char codigo2[3];
    char nomeDaCidade2[50];
    int populacao2,  pontosTuristicos2;
    float area2, pib2;

    printf("Digite uma letra (A-H) para representar um Estado: "); 
    scanf(" %c", &estado2);
    printf("Código da Carta (ex.:A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", nomeDaCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
   
   printf("\n");

    // Impressão das Cartas 1 e 2
   printf("===== Carta 1 =====\n");
   printf("Estado: %c\n", estado);
   printf("Código: %s\n", codigo);
   printf("Nome da Cidade: %s\n", nomeDaCidade);
   printf("População: %d\n", populacao);
   printf("Área: %.2f Km^2\n", area);
   printf("PIB: %.2f\n", pib);
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

   printf("\n");

   printf("===== Carta 2 =====\n");
   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da Cidade: %s\n", nomeDaCidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f Km^2\n", area2);
   printf("PIB: %.2f\n", pib2);
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
