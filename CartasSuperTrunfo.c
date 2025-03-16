#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    
    //Exibe a mensagem incial do jogo.
    printf("Super Trunfo em C - Cadastro de Cartas \n");
    printf("\n");
    
    // Declaração das variáveis das cartas
    char estado, estado2;
    char codigo[3], codigo2[3];
    char nomeDaCidade[50], nomeDaCidade2[50];
    unsigned long int populacao, populacao2;
    int pontosTuristicos, pontosTuristicos2;
    float area, pib, pib_per_capita, densidade_populacional, superPoder;
    float area2, pib2, pib_per_capita2, densidade_populacional2, superPoder2;

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

     // Menu

     int opcao, opcao2;
     char* resultado;

     do{
          printf("Seleção de Atributos\n");
          printf("\n");
          printf("1.População\n");
          printf("2.Área\n");
          printf("3.PIB\n");
          printf("4.Número de Pontos Turísticos\n");
          printf("5.PIB per Capita\n");
          printf("6.Densidade Populacional\n");
          printf("7.Super Poder\n");

          printf("\n");
     
          
          printf("Escolha o primeiro atributo para comparar as cartas:");
          scanf("%d", &opcao);
          printf("Escolha o segundo atributo para comparar as cartas:");
          scanf("%d", &opcao2);
     
          if(opcao == opcao2){
               printf("Os atributos não podem ser iguais! Escolha atributos diferentes.\n");
     
          }
     } while (opcao == opcao2);

     printf("\nComparação dos Atributos Escolhidos:\n");

     float somaCarta1 = 0, somaCarta2 = 0;

     // Comparação do primeiro atributo
     if (opcao == 1) { // Verifica se o primeiro atributo escolhido é "População"
          printf("\nAtributo: População\n");
          printf("Carta 1 - %s: %lu\n", nomeDaCidade, populacao); // Exibe a carta 1
          printf("Carta 2 - %s: %lu\n", nomeDaCidade2, populacao2); // Exibe a carta 2
          somaCarta1 += populacao; // Soma a população à carta 1
          somaCarta2 += populacao2; // Soma a população à carta 2
      } else if (opcao == 2) {
          printf("\nAtributo: Área\n");
          printf("Carta 1 - %s: %.2f\n", nomeDaCidade, area); // Exibe a carta 1
          printf("Carta 2 - %s: %.2f\n", nomeDaCidade2, area2); // Exibe a carta 2
          somaCarta1 += area; // Soma a área à carta 1
          somaCarta2 += area2; // Soma a área à carta 2
      } else if (opcao == 3) {
         printf("\nAtributo: PIB\n");
         printf("Carta 1 - %s: %.2f\n", nomeDaCidade, pib);
         printf("Carta 2 - %s: %.2f\n", nomeDaCidade2, pib2);
         somaCarta1 += pib;
         somaCarta2 += pib2;
     } else if (opcao == 4) {
         printf("\nAtributo: Pontos Turísticos\n");
         printf("Carta 1 - %s: %d\n", nomeDaCidade, pontosTuristicos);
         printf("Carta 2 - %s: %d\n", nomeDaCidade2, pontosTuristicos2);
         somaCarta1 += pontosTuristicos;
         somaCarta2 += pontosTuristicos2;
     } else if (opcao == 5) {
         printf("\nAtributo: PIB per Capita\n");
         printf("Carta 1 - %s: %.2f\n", nomeDaCidade, pib_per_capita);
         printf("Carta 2 - %s: %.2f\n", nomeDaCidade2, pib_per_capita2);
         somaCarta1 += pib_per_capita;
         somaCarta2 += pib_per_capita2;
     } else if (opcao == 6) {
         printf("\nAtributo: Densidade Populacional\n");
         printf("Carta 1 - %s: %.2f\n", nomeDaCidade, densidade_populacional);
         printf("Carta 2 - %s: %.2f\n", nomeDaCidade2, densidade_populacional2);
         somaCarta1 += densidade_populacional;
         somaCarta2 += densidade_populacional2;
     } else if (opcao == 7) {
         printf("\nAtributo: Super Poder\n");
         printf("Carta 1 - %s: %.2f\n", nomeDaCidade, superPoder);
         printf("Carta 2 - %s: %.2f\n", nomeDaCidade2, superPoder2);
         somaCarta1 += superPoder;
         somaCarta2 += superPoder2;
     }
 
     // Comparação do segundo atributo
     if (opcao2 == 1) {
          printf("Carta 1 - %s: %lu\n", nomeDaCidade, populacao); // Exibe a carta 1
          printf("Carta 2 - %s: %lu\n", nomeDaCidade2, populacao2); // Exibe a carta 2
          somaCarta1 += populacao; // Soma a população à carta 1
          somaCarta2 += populacao2; // Soma a população à carta 2
     } else if (opcao2 == 2) {
          printf("\nAtributo: Área\n");
          printf("Carta 1 - %s: %.2f\n", nomeDaCidade, area); // Exibe a carta 1
          printf("Carta 2 - %s: %.2f\n", nomeDaCidade2, area2); // Exibe a carta 2
          somaCarta1 += area; // Soma a área à carta 1
          somaCarta2 += area2; // Soma a área à carta 2
     } else if (opcao2 == 3) {
          printf("\nAtributo: PIB\n");
          printf("Carta 1 - %s: %.2f\n", nomeDaCidade, pib);
          printf("Carta 2 - %s: %.2f\n", nomeDaCidade2, pib2);
          somaCarta1 += pib;
          somaCarta2 += pib2;
     } else if (opcao2 == 4) {
          printf("\nAtributo: Pontos Turísticos\n");
         printf("Carta 1 - %s: %d\n", nomeDaCidade, pontosTuristicos);
         printf("Carta 2 - %s: %d\n", nomeDaCidade2, pontosTuristicos2);
         somaCarta1 += pontosTuristicos;
         somaCarta2 += pontosTuristicos2;
     } else if (opcao2 == 5) {
          printf("\nAtributo: PIB per Capita\n");
          printf("Carta 1 - %s: %.2f\n", nomeDaCidade, pib_per_capita);
          printf("Carta 2 - %s: %.2f\n", nomeDaCidade2, pib_per_capita2);
          somaCarta1 += pib_per_capita;
          somaCarta2 += pib_per_capita2;
     } else if (opcao2 == 6) {
          printf("\nAtributo: Densidade Populacional\n");
          printf("Carta 1 - %s: %.2f\n", nomeDaCidade, densidade_populacional);
          printf("Carta 2 - %s: %.2f\n", nomeDaCidade2, densidade_populacional2);
          somaCarta1 += densidade_populacional;
          somaCarta2 += densidade_populacional2;
     } else if (opcao2 == 7) {
          printf("\nAtributo: Super Poder\n");
          printf("Carta 1 - %s: %.2f\n", nomeDaCidade, superPoder);
          printf("Carta 2 - %s: %.2f\n", nomeDaCidade2, superPoder2);
          somaCarta1 += superPoder;
          somaCarta2 += superPoder2;
     }
 
     printf("\n");
 
     // Comparar as somas dos atributos
     if (somaCarta1 > somaCarta2) {
          printf("Carta 1 - %s: %f\n", nomeDaCidade, somaCarta1);
          printf("Carta 2 - %s: %f\n", nomeDaCidade2, somaCarta2);
         resultado = "Carta 1 Vence!";
     } else if (somaCarta1 < somaCarta2) {
          printf("Carta 1 - %s: %f\n", nomeDaCidade, somaCarta1);
          printf("Carta 2 - %s: %f\n", nomeDaCidade2, somaCarta2);
         resultado = "Carta 2 Vence!";
     } else {
          printf("Carta 1 - %s: %f\n", nomeDaCidade, somaCarta1);
          printf("Carta 2 - %s: %f\n", nomeDaCidade2, somaCarta2);
         resultado = "Empate!";
     }
 
     printf("Resultado: %s\n", resultado);
     return 0;
 }
