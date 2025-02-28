#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    
    //Exibe a mensagem incial do jogo.
    printf("Super Trunfo em C - Cadastro de Cartas \n");
    printf("\n");
    
    //Declaração das variáveis da Carta 1
    char estado;
    char codigo[3];
    char nomeDaCidade[50];
    int populacao, pontosTuristicos;
    float area, pib, pib_per_capita, densidade_populacional;

    //Solicita os dados para a Carta 1
    printf("===== CARTA 1 =====\n");

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

     // Calcula PIB per capita e densidade populacional da Carta 1
     pib_per_capita = pib/populacao;
     densidade_populacional = populacao/area; 
 

    printf("\n");

    //Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[3];
    char nomeDaCidade2[50];
    int populacao2,  pontosTuristicos2;
    float area2, pib2, pib_per_capita2, densidade_populacional2;

    //Solicita os dados para a Carta 2
    printf("===== CARTA 2 =====\n");

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

    //Calcula PIB per capita e densidade populacional da Carta 2
    pib_per_capita2 = pib2/populacao2;
    densidade_populacional2 = populacao2/area2; 
   
   printf("\n");
   printf("____________________________________________________________\n");

   // Exibição dos dados das cartas cadastradas
   printf("===== Carta 1 =====\n");
   printf("Estado: %c\n", estado);
   printf("Código: %s\n", codigo);
   printf("Nome da Cidade: %s\n", nomeDaCidade);
   printf("População: %d\n", populacao);
   printf("Área: %.2f Km^2\n", area);
   printf("PIB: %.2f Bilhôes\n", pib);
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
   printf("PIB per Capita: %.2f\n", pib_per_capita);
   printf("Densidade Populacional: %.2f hab/km^2\n", densidade_populacional);
   printf("\n");

   printf("===== Carta 2 =====\n");
   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da Cidade: %s\n", nomeDaCidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f Km^2\n", area2);
   printf("PIB: %.2f Bilhões\n", pib2);
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
   printf("PIB per Capita: %.2f\n", pib_per_capita2); 
   printf("Densidade Populacional: %.2f hab/km^2", densidade_populacional2);

    return 0;
}
