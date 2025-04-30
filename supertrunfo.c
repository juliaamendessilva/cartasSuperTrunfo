#include <stdio.h>

int main() 
{
     int OpcaoAtributo;
   
   //Dados da Carta 1
     char estado1[3];
     char numerodacarta1[20];
     char nomedacidade1[20];
     unsigned int populacao1;
     float area1;
     float pib1;
     int pontosturisticos1;
 
     //Dados da Carta 2
     char estado2[3];
     char numerodacarta2[20];
     char nomedacidade2[20];
     unsigned int populacao2;
     float area2;
     float pib2;
     int pontosturisticos2;
 
 
     //Entrada de dados para carta 1
     printf("===Cadastro da Carta 1===\n");
     printf("Digite a inicial do estado 1: ");
     scanf(" %s", &estado1);
 
     printf("Digite o número da carta 1: ");
     scanf(" %s", &numerodacarta1);
 
     printf("Digite o nome da cidade 1: ");
     scanf(" %s", &nomedacidade1);
 
     printf("Digite o número de habitantes da cidade 1: ");
     scanf(" %u", &populacao1);
 
     printf("Digite a área em km² da cidade 1: ");
     scanf(" %f", &area1);
 
     printf("Digite o pib da cidade 1: ");
     scanf(" %f", &pib1);
 
     printf("Digite o número de pontos turísticos 1: ");
     scanf(" %i", &pontosturisticos1);
 
     //Cálculos da Carta 1
     float densidadepopulacional1 = (float) populacao1 / area1;
     float pib_percapita1 = pib1 / (float) populacao1;
     float SuperPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosturisticos1 + pib_percapita1;
 
     printf("\n");
 
     //Entrada de dados para carta 2
     printf("===Cadastro da Carta 2===\n");
     printf("Digite a inicial do estado 2: ");
     scanf(" %s", &estado2);
 
     printf("Digite o número da carta 2: ");
     scanf(" %s", &numerodacarta2);
 
     printf("Digite o nome da cidade 2: ");
     scanf(" %s", &nomedacidade2);
 
     printf("Digite o número de habitantes da cidade 2: ");
     scanf(" %u", &populacao2);
 
     printf("Digite a área em km² da cidade 2: ");
     scanf(" %f", &area2);
 
     printf("Digite o pib da cidade 2: ");
     scanf(" %f", &pib2);
 
     printf("Digite o número de pontos turísticos 2: ");
     scanf(" %i", &pontosturisticos2);
 
     //Cálculos da Carta 2
     float densidadepopulacional2 = (float) populacao2 / area2;
     float pib_percapita2 = pib2 / (float) populacao2;
     float SuperPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosturisticos2 + pib_percapita2;
 
     printf("\n");
     printf("\n");
 
     //Exibir dados da Carta 1
     printf("Carta 1\n");
     printf("Estado: %s\n", estado1);
     printf("Código da carta: %s\n", numerodacarta1);
     printf("Cidade: %s\n", nomedacidade1);
     printf("População: %u\n", populacao1);
     printf("Área: %.2fkm²\n", area1);
     printf("PIB: R$%.2f\n", pib1);
     printf("Número de pontos Turísticos: %d\n", pontosturisticos1);
     printf("Densidade Populacional: %.2f Habitantes por km²\n", densidadepopulacional1);
     printf("PIB per capita: R$%.2f por habitante\n", pib_percapita1);
     printf("Super Poder: %.2f\n", SuperPoder1);
 
     printf("\n");
 
     //Exibir dados da Carta 2
     printf("Carta 2\n");
     printf("Estado: %s\n", estado2);
     printf("Código da carta: %s\n", numerodacarta2);
     printf("Cidade: %s\n", nomedacidade2);
     printf("População: %u\n", populacao2);
     printf("Área: %.2fkm²\n", area2);
     printf("PIB: R$%.2f\n", pib2);
     printf("Número de pontos Turísticos: %i\n", pontosturisticos2);
     printf("Densidade Populacional: %.2f Habitantes por km²\n", densidadepopulacional2);
     printf("PIB per capita: R$%.2f por habitante\n", pib_percapita2);
     printf("Super Poder: %.2f", SuperPoder2);
 
     printf("\n");
     printf("\n");
     printf("\n");

     //Comparando as cartas
     printf("===Comparação de Cartas===\n");
     
     printf("Escolha o atributo: \n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Número de Pontos Turísticos\n");
     printf("5. Densidade Populacional\n");
     printf("6. PIB Per Capita\n");
     scanf("%i", &OpcaoAtributo);

     printf("\n");
     printf("\n");

     switch (OpcaoAtributo) {
      case 1:
         printf("Atribudo: População\n");
         printf("Carta 1: %s (%s): %u\n", nomedacidade1, estado1, populacao1);
         printf("CArta 2: %s (%s): %u\n", nomedacidade2, estado2, populacao2);
         printf("\n");

         if (populacao1 > populacao2) {
            printf("Carta 1 VENCEU!");
         }
         else {
            printf("Carta 2 VENCEU!");
         }
         break;

      case 2:
         printf("Atribudo: Área\n");
         printf("Carta 1: %s (%s): %.2f\n", nomedacidade1, estado1, area1);
         printf("CArta 2: %s (%s): %.2f\n", nomedacidade2, estado2, area2);
         printf("\n");

         if (area1 > area2) {
            printf("Carta 1 VENCEU!");
         }
         else {
            printf("Carta 2 VENCEU!");
         }
         break;

      case 3: 
         printf("Atribudo: PIB\n");
         printf("Carta 1: %s (%s): %.2f\n", nomedacidade1, estado1, pib1);
         printf("CArta 2: %s (%s): %.2f\n", nomedacidade2, estado2, pib2);
         printf("\n");

         if (pib1 > pib2) {
            printf("Carta 1 VENCEU!");
         }
         else {
            printf("Carta 2 VENCEU!");
         }
         break;

      case 4:
         printf("Atribudo: Número de Pontos Turísticos\n");
         printf("Carta 1: %s (%s): %i\n", nomedacidade1, estado1, pontosturisticos1);
         printf("CArta 2: %s (%s): %i\n", nomedacidade2, estado2, pontosturisticos2);
         printf("\n");

         if (pontosturisticos1 > pontosturisticos2) {
            printf("Carta 1 VENCEU!");
         }
         else {
            printf("Carta 2 VENCEU!");
         }
         break;

      case 5:
         printf("Atribudo: Densidade Populacional\n");
         printf("Carta 1: %s (%s): %.2f\n", nomedacidade1, estado1, densidadepopulacional1);
         printf("CArta 2: %s (%s): %.2f\n", nomedacidade2, estado2, densidadepopulacional2);
         printf("\n");

         if (densidadepopulacional1 < densidadepopulacional2) {
            printf("Carta 1 VENCEU!");
         }
         else {
            printf("Carta 2 VENCEU!");
         }
         break;

      case 6:
         printf("Atribudo: PIB Per Capita\n");
         printf("Carta 1: %s (%s): %.2f\n", nomedacidade1, estado1, pib_percapita1);
         printf("CArta 2: %s (%s): %.2f\n", nomedacidade2, estado2, pib_percapita2);
         printf("\n");

         if (pib_percapita1 > pib_percapita2) {
            printf("Carta 1 VENCEU!");
         }
         else {
            printf("Carta 2 VENCEU!");
         }
         break;

      default:
         printf("Opção Inválida.");
     }

     return 0;
}