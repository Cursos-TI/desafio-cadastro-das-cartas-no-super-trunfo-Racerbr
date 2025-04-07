#include <stdio.h>

int main() {
    
    char estado, estado2;
    char nomedacidade[10];
    char codigodacarta[10];
    int populacao, pontosturisticos;
    double area, PIB;
    char nomedacidade2[10];
    char codigodacarta2[10];
    int populacao2, pontosturisticos2;
    double area2, PIB2;
    
    printf("Digite a primeira letra do Estado escolhido: \n" );
    scanf("%c", &estado);

    printf("Digite o nome da cidade escolhida: \n" );
    scanf("%s", &nomedacidade);
    
    printf("Digite o código da carta que une o estado (Primeira letra) e o número que identifica a cidade nesse estado \n");
    scanf("%s", &codigodacarta);

    printf("Qual é a população da cidade escolhida? \n");
    scanf("%d", &populacao);

    printf("Qual é a área (em km²) da cidade escolhida? \n");
    scanf("%f", &area);

    double densidadepopulacional = (double) (populacao / area);
    double contrariodadensidadepopulacional = (densidadepopulacional * (-1));

    printf("Qual é o PIB (Produto Interno Bruto) da cidade escolhida? \n");
    scanf("%f", &PIB);

    double pibpercapita = (double) (PIB / populacao);
    
    printf("Qual é a quantidade de pontos turísticos localizados nessa cidade? \n");
    scanf("%d", &pontosturisticos);

    float SuperPoderA = ((double) populacao + area + PIB + (double) pontosturisticos + pibpercapita + contrariodadensidadepopulacional);
    
    // Primeira carta:
    
    printf("Carta 1: \n");
    
    printf("Estado: %c \n", &estado);
    
    printf("Nome da cidade: %s \n", &nomedacidade);
    
    printf("Código: %s \n", &codigodacarta);
    
    printf("População: %d habitantes \n", &populacao);
    
    printf("Área: %f km² \n", &area);
    
    printf("PIB: %f reais \n", &PIB);
    
    printf("Número de pontos turísticos: %d \n", &pontosturisticos);

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
    
    double densidadepopulacional2 = (double) (populacao2 / area2);
    double contrariodadensidadepopulacional2 = (densidadepopulacional2 * (-1));
    
    printf("Qual é o PIB (Produto Interno Bruto) da cidade escolhida? \n");
    scanf("%f", &PIB2);

    double pibpercapita2 = (double) (PIB2 / populacao2);

    printf("Qual é a quantidade de pontos turísticos localizados nessa cidade? \n");
    scanf("%d", &pontosturisticos2);
    
    float SuperPoderB = ((double) populacao2 + area2 + PIB2 + (double) pontosturisticos2 + pibpercapita2 + contrariodadensidadepopulacional2);

    // Segunda carta:

    printf("Carta 2: \n");

    printf("Estado: %c \n", &estado2);
    
    printf("Nome da cidade: %s \n", &nomedacidade2);
    
    printf("Código: %s \n", &codigodacarta2);
    
    printf("População: %d habitantes \n", &populacao2);
    
    printf("Área: %f km² \n", &area2);
    
    printf("PIB: %f reais \n", &PIB2);
    
    printf("Número de pontos turísticos: %d  \n", &pontosturisticos2);

    printf("Densidade populacional: %.2f hab/km² \n", densidadepopulacional2);

    printf("PIB per capita: %.2f reais \n", pibpercapita2);

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
