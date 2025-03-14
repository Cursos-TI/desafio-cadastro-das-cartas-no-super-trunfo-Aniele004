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
     printf("\n");


   // Exibição dos dados das cartas cadastradas
     printf("===== Carta 1 =====\n");
     printf("Estado: %c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Nome da Cidade: %s\n", nomeDaCidade);
     printf("População: %lu habitantes\n", populacao);
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
     printf("População: %lu habitantes\n", populacao2);
     printf("Área: %.2f Km^2\n", area2);
     printf("PIB: %.2f Bilhões\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
     printf("PIB per Capita: %.2f\n", pib_per_capita2); 
     printf("Densidade Populacional: %.2f hab/km^2\n", densidade_populacional2);
     printf("Super Poder: %.2f\n", superPoder2);

     printf("\n");
     printf("\n");

     // Comparação das cartas

     printf("Menu de Comparação\n");
     printf("\n");
     printf("1.População\n");
     printf("2.Área\n");
     printf("3.PIB\n");
     printf("4.Número de Pontos Turísticos\n");
     printf("5.PIB per Capita\n");
     printf("6.Densidade Populacional\n");
     printf("7.Super Poder\n");
     printf("8.Regras\n");

     printf("\n");

     int opcao;
     printf("Escolha um atributo para comparar as cartas:");
     scanf("%d", &opcao);

     switch (opcao)
     {
          case 1:
          printf("Atributo: População\n");
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
               break;

          case 2: 
          printf("Atributo: Área\n");
          printf("Carta 1 - %s: %f\n", nomeDaCidade, area);
          printf("Carta 2 - %s: %f\n", nomeDaCidade2, area2);

          if(area > area2){
               printf("Carta 1 (%s) venceu!\n", nomeDaCidade);
          }else if (area < area2){
               printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
          } else{
               printf("Empate!\n");
          }
               break;

          case 3:
          printf("Atributo: PIB\n");
          printf("Carta 1 - %s: %f\n", nomeDaCidade, pib);
          printf("Carta 2 - %s: %f\n", nomeDaCidade2, pib2);

          if(pib > pib2){
               printf("Carta 1 (%s) venceu!\n", nomeDaCidade);
          }else if (pib < pib2){
               printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
          } else{
               printf("Empate!\n");
          }
               break;

          case 4: 
          printf("Atributo: Número de Pontos Turísticos\n");
          printf("Carta 1 - %s: %d\n", nomeDaCidade, pontosTuristicos);
          printf("Carta 2 - %s: %d\n", nomeDaCidade2, pontosTuristicos2);

          if(pontosTuristicos > pontosTuristicos2){
               printf("Carta 1 (%s) venceu!\n", nomeDaCidade);
          }else if (pontosTuristicos < pontosTuristicos2){
               printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
          } else{
               printf("Empate!\n");
          }
               break;

          case 5:
          printf("Atributo: PIB per Capita\n");
          printf("Carta 1 - %s: %f\n", nomeDaCidade, pib_per_capita);
          printf("Carta 2 - %s: %f\n", nomeDaCidade2, pib_per_capita2);

          if(pib_per_capita > pib_per_capita2){
               printf("Carta 1 (%s) venceu!\n", nomeDaCidade);
          }else if (pib_per_capita < pib_per_capita2){
               printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
          } else{
               printf("Empate!\n");
          }
               break;

          case 6: 
          printf("Atributo: Densidade Populacional\n");
          printf("Carta 1 - %s: %f\n", nomeDaCidade, densidade_populacional);
          printf("Carta 2 - %s: %f\n", nomeDaCidade2, densidade_populacional2);

          if(densidade_populacional < densidade_populacional2){
               printf("Carta 1 (%s) venceu!\n", nomeDaCidade);
          }else if (densidade_populacional > densidade_populacional2){
               printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
          } else{
               printf("Empate!\n");
          }
               break;

          case 7:
          printf("Atributo: Super Poder\n");
          printf("Carta 1 - %s: %f\n", nomeDaCidade, superPoder);
          printf("Carta 2 - %s: %f\n", nomeDaCidade2, superPoder2);

          if(superPoder > superPoder2){
               printf("Carta 1 (%s) venceu!\n", nomeDaCidade);
          }else if (superPoder < superPoder2){
               printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
          } else{
               printf("Empate!\n");
          }
               break;

          case 8:
          printf("Regras de Comparação\n");
          printf("A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.");

          break;

          default:
          printf("Opção inválida. Tente novamente.\n");
               break;

     }
   
   return 0;
}
