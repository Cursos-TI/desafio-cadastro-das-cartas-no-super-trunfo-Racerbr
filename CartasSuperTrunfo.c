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
    
    printf("Área: %.2f km² \n", area);
    
    printf("PIB: %f reais \n", PIB);
    
    printf("Número de pontos turísticos: %d \n", pontosturisticos);

    printf("Densidade populacional: %.2f hab/km² \n", densidadepopulacional);

    printf("PIB per capita: %.2f reais \n", pibpercapita);

    printf("### Insira as informações da segunda carta: ###\n");

    printf("Digite a primeira letra do Estado escolhido: \n" );
    scanf("   %c", &estado2);

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

    // printf("Comparação de Cartas: \n");
    // Observação: Deixei comentado pq era uma tarefa anterior mas que se tornou irrelevante com a adoção de if, else if e switch
    // printf("A população da carta 1 é maior que a da carta 2? %d\n", (populacao > populacao2));
    // printf("A área da carta 1 é maior que a da carta 2? %.1f\n", (area > area2));
    // printf("O PIB da carta 1 é maior que a da carta 2? %.1f\n", (PIB > PIB2));
    // printf("A quantidade de pontos turísticos da carta 1 é maior que a da carta 2? %d\n", (pontosturisticos > pontosturisticos2));
    // printf("A carta 1 tem mais densidade populacional que a carta 2, portanto, perde? %.1f\n", (densidadepopulacional > densidadepopulacional2));
    // printf("A carta 1 tem um PIB per capita maior que a carta 2? %.1f\n", (pibpercapita > pibpercapita2));
    // printf("A carta 1 tem um superpoder maior que a da carta 2? %.1f\n", (SuperPoderA > SuperPoderB));


    int escolha;
    
    printf("### Você gostaria de fazer a comparação de cada atributo em específico para ambas as cartas? ###\n");
    printf("1. Sim\n");
    printf("2. Não\n");
    scanf("%d", &escolha);

    if (escolha == 1){
        int segundaescolha;
        printf("### Você escolheu sim, agora escolha qual atributo você quer comparar: ###\n");
        printf("1. Nome da cidade (apenas exibe a informação)\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Número de pontos turísticos\n");
        printf("6. Densidade populacional\n");
        scanf("%d", &segundaescolha);
        switch (segundaescolha){
        case 1:
        printf("Você escolheu a opção nome da cidade:\n");
        printf("O nome da cidade da Carta 1 é: %s\n", &nomedacidade);
        printf("O nome da cidade da Carta 2 é: %s\n", &nomedacidade2);
        break;
        case 2:
        printf("Você escolheu a opção **população**\n");
        printf("Carta 1: %d X", &populacao);
        printf(" Carta 2: %d\n", &populacao2);
        if (populacao == populacao2){
            printf("### Empate! ###\n");
        }
        else if (populacao > populacao2){
            printf("### A Carta 1 venceu a Carta 2 no atributo população! ###\n");
        }
        else if (populacao < populacao2){
            printf("### A Carta 2 venceu a Carta 1 no atributo população! ###\n");
        }
        break;
        case 3:
        printf("Você escolheu a opção **área**\n");
        printf("Carta 1: %f X", &area);
        printf(" Carta 2: %f\n", &area2);
        if (area == area2){
            printf("### Empate! ###\n");
        }
        else if (area > area2){
            printf("### A Carta 1 venceu a Carta 2 no atributo área! ###\n");
        }
        else if (area < area2){
            printf("### A Carta 2 venceu a Carta 1 no atributo área! ###\n");
        }
        break;
        case 4:
        printf("Você escolheu a opção **PIB**\n");
        printf("Carta 1: %f X", &PIB);
        printf(" Carta 2: %f\n", &PIB2);
        if (PIB == PIB2){
            printf("### Empate! ###\n");
        }
        else if (PIB > PIB2){
            printf("### A Carta 1 venceu a Carta 2 no atributo PIB! ###\n");
        }
        else if (PIB < PIB2){
            printf("### A Carta 2 venceu a Carta 1 no atributo PIB! ###\n");
        }
        break;
        case 5:
        printf("Você escolheu a opção **número de pontos turísticos**\n");
        printf("Carta 1: %d X", &pontosturisticos);
        printf(" Carta 2: %d\n", &pontosturisticos2);
        if (pontosturisticos == pontosturisticos2){
            printf("### Empate! ###\n");
        }
        else if (pontosturisticos > pontosturisticos2){
            printf("### A Carta 1 venceu a Carta 2 no atributo número de pontos turísticos! ###\n");
        }
        else if (pontosturisticos < pontosturisticos2){
            printf("### A Carta 2 venceu a Carta 1 no atributo número de pontos turísticos! ###\n");
        }
        break;
        case 6:
        printf("Você escolheu a opção **densidade populacional**\n");
        printf("Carta 1: %f X", &densidadepopulacional);
        printf(" Carta 2: %f\n", &densidadepopulacional2);
        if (densidadepopulacional == densidadepopulacional2){
            printf("### Empate! ###\n");
        }
        else if (densidadepopulacional > densidadepopulacional2){
            printf("### A Carta 2 venceu a Carta 1 no atributo densidadepopulacional! ###\n");
        }
        else if (densidadepopulacional < densidadepopulacional2){
            printf("### A Carta 1 venceu a Carta 2 no atributo densidadepopulacional! ###\n");
        }
        break;
        default:
        printf("Opção inválida! Tente novamente\n");
        }
        }
    else if (escolha == 2){
        printf("### Saindo do jogo... ###\n");
    }
    else {
        printf("### Opção inválida! Tente novamente.\n");
    }

    return 0;

}

