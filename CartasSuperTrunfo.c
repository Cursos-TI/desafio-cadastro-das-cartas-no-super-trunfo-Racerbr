#include <stdio.h>

int main() {
    
    char estado, estado2;
    char nomedacidade[20];
    char codigodacarta[20];
    int populacao, pontosturisticos;
    float area, PIB;
    char nomedacidade2[20];
    char codigodacarta2[20];
    int populacao2, pontosturisticos2;
    float area2, PIB2;
    
    printf("Digite a primeira letra do Estado escolhido: \n");
    scanf("%c", &estado);

    printf("Digite o nome da cidade escolhida: \n" );
    scanf("%s", &nomedacidade);
    
    printf("Digite o código da carta que une o estado (Primeira letra) e o número que identifica a cidade nesse estado \n");
    scanf("%s", &codigodacarta);

    printf("Qual é a população da cidade escolhida? \n");
    scanf("%d", &populacao);

    printf("Qual é a área (em km²) da cidade escolhida? \n");
    scanf("%f", &area);

    printf("Qual é o PIB (Produto Interno Bruto) da cidade escolhida? \n");
    scanf("%f", &PIB);
    
    printf("Qual é a quantidade de pontos turísticos localizados nessa cidade? \n");
    scanf("%d", &pontosturisticos);

    float pibpercapita = (float) (PIB / populacao);
    float densidadepopulacional = (double) (populacao / area);
    float contrariodadensidadepopulacional = (densidadepopulacional * (-1));
    float SuperPoderA = ((float) populacao + area + PIB + (float) pontosturisticos + pibpercapita + contrariodadensidadepopulacional);
    
    // Primeira carta:
    
    printf("Carta 1: \n");
    
    printf("Estado: %c \n", estado);
    
    printf("Nome da cidade: %s \n", nomedacidade);
    
    printf("Código: %s \n", codigodacarta);
    
    printf("População: %d habitantes \n", populacao);
    
    printf("Área: %f km² \n", area);
    
    printf("PIB: %f reais \n", PIB);
    
    printf("Número de pontos turísticos: %d \n", pontosturisticos);

    printf("Densidade populacional: %.2f hab/km² \n", densidadepopulacional);

    printf("PIB per capita: %.2f reais \n", pibpercapita);

    printf("Insira as informações da segunda carta: \n");

    printf("Digite a primeira letra do Estado escolhido: \n" );
    scanf("%c", &estado2);

    printf("Digite o nome da cidade escolhida: \n" );
    scanf("%s", &nomedacidade2);
    
    printf("Digite o código da carta que une o estado (Primeira letra) e o número que identifica a cidade nesse estado \n");
    scanf("%s", &codigodacarta2);

    printf("Qual é a população da cidade escolhida? \n");
    scanf("%d", &populacao2);

    printf("Qual é a área (em km²) da cidade escolhida? \n");
    scanf("%f", &area2);
    
    float densidadepopulacional2 = (double) (populacao2 / area2);
    float contrariodadensidadepopulacional2 = (densidadepopulacional2 * (-1));
    
    printf("Qual é o PIB (Produto Interno Bruto) da cidade escolhida? \n");
    scanf("%f", &PIB2);

    float pibpercapita2 = (float) (PIB2 / populacao2);

    printf("Qual é a quantidade de pontos turísticos localizados nessa cidade? \n");
    scanf("%d", &pontosturisticos2);
    
    float SuperPoderB = ((float) populacao2 + area2 + PIB2 + (float) pontosturisticos2 + pibpercapita2 + contrariodadensidadepopulacional2);

    // Segunda carta:

    printf("Carta 2: \n");

    printf("Estado: %c \n", estado2);
    
    printf("Nome da cidade: %s \n", nomedacidade2);
    
    printf("Código: %s \n", codigodacarta2);
    
    printf("População: %d habitantes \n", populacao2);
    
    printf("Área: %f km² \n", area2);
    
    printf("PIB: %f reais \n", PIB2);
    
    printf("Número de pontos turísticos: %d  \n", pontosturisticos2);

    printf("Densidade populacional: %.2f hab/km² \n", densidadepopulacional2);

    printf("PIB per capita: %.2f reais \n", pibpercapita2);

    if (populacao > populacao2){
        printf("A população da Carta 1 venceu!\n");
    }
    else{
        printf("A população da Carta 2 venceu!\n");
    }

    if (area > area2){
       printf("A área da Carta 1 venceu!\n");
    }
    else{
        printf("A área da Carta 2 venceu!\n");
    }

    if (PIB > PIB2){
       printf("O PIB da Carta 1 venceu!\n");
    }
    else {
        printf("O PIB da Carta 2 venceu!\n");
    }

    if (pontosturisticos > pontosturisticos2){
       printf("A quantidade de pontos turísticos da Carta 1 venceu!\n");
    }
    else {
        printf("A quantidade de pontos turísticos da Carta 2 venceu!\n");
    }

    if (pibpercapita > pibpercapita2){
       printf("O PIB per capita da Carta 1 venceu!\n");
    }
    else{
       printf("O PIB per capita da Carta 2 venceu!\n");
    }
   if (densidadepopulacional > densidadepopulacional2){
      printf("A densidade populacional da Carta 1 venceu!\n");
   }
   else{
       printf("A densidade populacional da Carta 2 venceu!\n");
   }

   if (SuperPoderA > SuperPoderB){
      printf("O SuperPoder da Carta 1 venceu!\n");
   }
   else{
      printf("O SuperPoder da Carta 2 venceu!\n");
   }

    printf("Comparação de Cartas: \n");
    
    printf("A população da carta 1 é maior que a da carta 2? %d\n", (populacao > populacao2));
    printf("A área da carta 1 é maior que a da carta 2? %.1f\n", (area > area2));
    printf("O PIB da carta 1 é maior que a da carta 2? %.1f\n", (PIB > PIB2));
    printf("A quantidade de pontos turísticos da carta 1 é maior que a da carta 2? %d\n", (pontosturisticos > pontosturisticos2));
    printf("A carta 1 tem mais densidade populacional que a carta 2, portanto, perde? %.1f\n", (densidadepopulacional > densidadepopulacional2));
    printf("A carta 1 tem um PIB per capita maior que a carta 2? %.1f\n", (pibpercapita > pibpercapita2));
    printf("A carta 1 tem um superpoder maior que a da carta 2? %.1f\n", (SuperPoderA > SuperPoderB));

    return 0;
}
