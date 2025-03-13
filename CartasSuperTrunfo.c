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
    unsigned long int populacao;
    int pontosTuristicos;
    float area, pib, pib_per_capita, densidade_populacional;
    float superPoder;

    //Solicita os dados para a Carta 1
    printf("===== CARTA 1 =====\n");

    printf("Digite uma letra (A-H) para representar um Estado: "); 
    scanf(" %c", &estado);
    printf("Código da Carta (ex.:A01): ");
    scanf("%s", codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeDaCidade);
    printf("População: ");
    scanf("%lu", &populacao);
    printf("Área: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

     // Calcula PIB per capita, densidade populacional da Carta 1 e Super Poder
     pib_per_capita = pib/populacao;
     densidade_populacional = populacao/area; 
     superPoder = populacao + area + pib + pontosTuristicos + pib_per_capita + (1/densidade_populacional);
 

    printf("\n");

    //Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[3];
    char nomeDaCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, pib_per_capita2, densidade_populacional2;
    float superPoder2;

    //Solicita os dados para a Carta 2 
    printf("===== CARTA 2 =====\n");

    printf("Digite uma letra (A-H) para representar um Estado: "); 
    scanf(" %c", &estado2);
    printf("Código da Carta (ex.:A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeDaCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Calcula PIB per capita, densidade populacional da Carta 2 e Super Poder
    pib_per_capita2 = pib2/populacao2;
    densidade_populacional2 = populacao2/area2; 
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pib_per_capita2 + (1/densidade_populacional2);
   
   printf("\n");
   printf("_________________________\n");


   // Exibição dos dados das cartas cadastradas
   printf("===== Carta 1 =====\n");
   printf("Estado: %c\n", estado);
   printf("Código: %s\n", codigo);
   printf("Nome da Cidade: %s\n", nomeDaCidade);
   printf("População: %lu\n", populacao);
   printf("Área: %.2f Km^2\n", area);
   printf("PIB: %.2f Bilhôes\n", pib);
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
   printf("PIB per Capita: %.2f\n", pib_per_capita);
   printf("Densidade Populacional: %.2f hab/km^2\n", densidade_populacional);
   printf("Super Poder %.2f\n", superPoder);
   printf("\n");

   printf("===== Carta 2 =====\n");
   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da Cidade: %s\n", nomeDaCidade2);
   printf("População: %lu\n", populacao2);
   printf("Área: %.2f Km^2\n", area2);
   printf("PIB: %.2f Bilhões\n", pib2);
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
   printf("PIB per Capita: %.2f\n", pib_per_capita2); 
   printf("Densidade Populacional: %.2f hab/km^2\n", densidade_populacional2);
   printf("Super Poder: %.2f\n", superPoder2);

   printf("\n");
   printf("_________________________\n");
   printf("\n");

   // Comparação das cartas

   printf("Comparação de Cartas:\n");
   printf("População: Carta 1 venceu (%d)\n", populacao > populacao2); //especificador de formato booleanos é %d
   printf("Área: Carta 1 venceu (%d)\n", area > area2);
   printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
   printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos > pontosTuristicos2);
   printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional < densidade_populacional2);
   printf("PiB per Capita: Carta 1 venceu (%d)\n", pib_per_capita > pib_per_capita2);
   printf("Super Poder: Carta 1 venceu (%d)\n", superPoder > superPoder2);

   printf("\n");
   //Declaração clara de vencedor

   printf("Determinação de vencedor (Atributo: População)\n");
   printf("Carta 1 - %s: %lu\n", nomeDaCidade, populacao);
   printf("Carta 2 - %s: %lu\n", nomeDaCidade2, populacao2);

   printf("\n");

   if(populacao > populacao2){
        printf("Carta 1 (%s) venceu!\n", nomeDaCidade);
   }else if (populacao < populacao2){
        printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
   } else{
        printf("Empate!\n");

   }
   
   return 0;
}
