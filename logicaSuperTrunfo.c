#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   // system("chcp 65001"); //UTF-8 no windows
    char estado_carta_1[3];
    char cod_carta_1[5];
    char nome_cidade_carta_1[100];
    unsigned long int populacao_cidade_carta_1;
    float area_cidade_carta_1;
    float pib_cidade_carta_1;
    int pontos_turisticos_cidade_carta_1;
    float densidade_populacional_carta_1;
    float pib_per_capita_carta_1;
    double super_poder_carta_1;

    printf("Inserir dados da primeira carta.\n\n");
    
    printf("Insira o Estado (Uma letra de A a H - representando 8 estados):\n");
    fgets(estado_carta_1, sizeof(estado_carta_1), stdin);
    estado_carta_1[strcspn(estado_carta_1, "\n")] = '\0'; //retira o \n e substitui por \0

    printf("Insira Código da Carta (A letra do estado escolhido seguido de 01 a 04, ex: A01):\n");
    fgets(cod_carta_1, sizeof(cod_carta_1), stdin);
    cod_carta_1[strcspn(cod_carta_1, "\n")] = '\0';

    printf("Insira o nome da cidade:\n");
    fgets(nome_cidade_carta_1, sizeof(nome_cidade_carta_1), stdin);
    nome_cidade_carta_1[strcspn(nome_cidade_carta_1, "\n")] = '\0';
    
    printf("Inserir o número de habitantes da cidade:\n");
    scanf("%lu", &populacao_cidade_carta_1);
    
    printf("Insira o Produto Interno Bruto da cidade (em bilhões de reais):\n");
    scanf("%f", &pib_cidade_carta_1);
    
    printf("Insira a área da cidade (em km²):\n");
    scanf("%f", &area_cidade_carta_1);
    
    printf("Insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos_cidade_carta_1);

    densidade_populacional_carta_1 = (float) populacao_cidade_carta_1 / area_cidade_carta_1;
    
    pib_per_capita_carta_1 = (float) pib_cidade_carta_1 / populacao_cidade_carta_1;
    
    super_poder_carta_1 = area_cidade_carta_1 + pib_cidade_carta_1 + pib_per_capita_carta_1 + (densidade_populacional_carta_1 * -1)
    +pontos_turisticos_cidade_carta_1 + (double)populacao_cidade_carta_1;
    
    
    printf("\nCarta 1:");
    printf("\nEstado: %s", estado_carta_1);
    printf("\nCódigo: %s", cod_carta_1);
    printf("\nNome da Cidade: %s", nome_cidade_carta_1);
    printf("\nPopulação: %lu", populacao_cidade_carta_1);
    printf("\nÁrea: %f km²", area_cidade_carta_1);
    printf("\nPIB: %f bilhões de reais", pib_cidade_carta_1);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos_cidade_carta_1);
    printf("\nDensidade Populacional: %f hab/km²", densidade_populacional_carta_1);
    printf("\nPIB per Capita: %f reais", pib_per_capita_carta_1);
    printf("\nSuper Poder: %lf", super_poder_carta_1);
    
    printf("\n\nInserir dados da segunda carta.\n");
    
    char estado_carta_2[3];
    char cod_carta_2[5];
    char nome_cidade_carta_2[100];
    unsigned long int populacao_cidade_carta_2;
    float area_cidade_carta_2;
    float pib_cidade_carta_2;
    int pontos_turisticos_cidade_carta_2;
    float densidade_populacional_carta_2;
    float pib_per_capita_carta_2;
    double super_poder_carta_2;

    getchar(); //limpar caraceteres do buffer

    printf("Insira o Estado (Uma letra de A a H - representando 8 estados):\n");
    fgets(estado_carta_2, sizeof(estado_carta_2), stdin);
    estado_carta_2[strcspn(estado_carta_2, "\n")] = '\0';

    printf("Insira Código da Carta (A letra do estado escolhido seguido de 01 a 04, ex: A01):\n");
    fgets(cod_carta_2, sizeof(cod_carta_2), stdin);
    cod_carta_2[strcspn(cod_carta_2, "\n")] = '\0';

    printf("Insira o nome da cidade:\n");
    fgets(nome_cidade_carta_2, sizeof(nome_cidade_carta_2), stdin);
    nome_cidade_carta_2[strcspn(nome_cidade_carta_2, "\n")] = '\0';
    
    printf("Inserir o número de habitantes da cidade:\n");
    scanf("%lu", &populacao_cidade_carta_2);
    
    printf("Insira o Produto Interno Bruto da cidade (em bilhões de reais):\n");
    scanf("%f", &pib_cidade_carta_2);
    
    printf("Insira a área da cidade (em km²):\n");
    scanf("%f", &area_cidade_carta_2);
    
    printf("Insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos_cidade_carta_2);

    densidade_populacional_carta_2 = (float) (populacao_cidade_carta_2 / area_cidade_carta_2);
    pib_per_capita_carta_2 = (float) (pib_cidade_carta_2 / populacao_cidade_carta_2);

    super_poder_carta_2 =  pontos_turisticos_cidade_carta_2 + (double) populacao_cidade_carta_2 + pib_cidade_carta_2 
    + area_cidade_carta_2 + (densidade_populacional_carta_2 * -1) + pib_per_capita_carta_2;
    
    printf("\nCarta 2:");
    printf("\nEstado: %s", estado_carta_2);
    printf("\nCódigo: %s", cod_carta_2);
    printf("\nNome da Cidade: %s", nome_cidade_carta_2);
    printf("\nPopulação: %lu", populacao_cidade_carta_2);
    printf("\nÁrea: %f km²", area_cidade_carta_2);
    printf("\nPIB: %f bilhões de reais", pib_cidade_carta_2);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos_cidade_carta_2);
    printf("\nDensidade Populacional: %f hab/km²", densidade_populacional_carta_2);
    printf("\nPIB per Capita: %f reais\n", pib_per_capita_carta_2);
    printf("\nSuper Poder: %f", super_poder_carta_2);

    printf("\n\nComparando atributos:");
    printf("\n-----------------------------Opções----------------------------------");
    printf("\n1 - População");
    printf("\t\t\t2 - Área");
    printf("\n3 - PIB ");
    printf("\t\t\t4 - Pontos Turísticos");
    printf("\n5 - Densidade Populacional");
    printf("\t6 - PIB per Capita");
    printf("\n7 - Super Poder");
    printf("\n---------------------------------------------------------------------\n");
    int opcao;
    char *carta_vencedora;
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
       carta_vencedora = (populacao_cidade_carta_1 > populacao_cidade_carta_2)? "Carta 1" : "Carta 2";
      printf("\nPopulação: A %s venceu!", carta_vencedora);
      break;
   case 2:
      carta_vencedora = (area_cidade_carta_1 > area_cidade_carta_2)? "Carta 1" : "Carta 2";
      printf("\nÁrea: A %s venceu!", carta_vencedora);
      break;
   case 3:
      carta_vencedora = (pib_cidade_carta_1 > pib_cidade_carta_2) ? "Carta 1" : "Carta 2";
      printf("\nPIB: A %s venceu!", carta_vencedora);
      break;
   case 4:
      carta_vencedora = (pontos_turisticos_cidade_carta_1 > pontos_turisticos_cidade_carta_2)? "Carta 1" : "Carta 2";
      printf("\nPontos Turísticos: A %s venceu!", carta_vencedora);
      break;
   case 5:
         carta_vencedora = (densidade_populacional_carta_1 < densidade_populacional_carta_2)? "Carta 1" : "Carta 2";
         printf("\nDensidade Populacional: A %s venceu!", carta_vencedora);
      break;
   case 6:
         carta_vencedora = (pib_per_capita_carta_1 > pib_cidade_carta_2)? "Carta 1" : "Carta 2";
         printf("\nPIB per Capita: A %s venceu!", carta_vencedora);
      break;
   case 7:
      carta_vencedora = (super_poder_carta_1 > super_poder_carta_2)? "Carta 1" : "Carta 2";
      printf("\nSuper Poder: A %s venceu!", carta_vencedora);
      break;
    default:
      printf("Opção inválida");
      break;
    }
   
   // system("pause");
   return 0;
}