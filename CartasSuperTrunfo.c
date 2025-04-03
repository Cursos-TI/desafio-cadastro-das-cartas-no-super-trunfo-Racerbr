#include <stdio.h>

int main() {
    
    char estado;
    char nomedacidade[9];
    char codigodacarta[9];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;
    char estado2;
    char nomedacidade2[9];
    char codigodacarta2[9];
    int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;
    
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

    printf("Qual é o PIB (Produto Interno Bruto) da cidade escolhida? \n");
    scanf("%f", &PIB);

    printf("Qual é a quantidade de pontos turísticos localizados nessa cidade? \n");
    scanf("%d", &pontosturisticos);

    printf("Carta 1: \n");
    
    printf("%c é a primeira letra de seu Estado \n", &estado);
    
    printf("O nome da sua cidade é %s \n", &nomedacidade);
    
    printf("O código da sua carta é %s \n", &codigodacarta);
    
    printf("A sua cidade tem um total de %f habitantes \n", &populacao);
    
    printf("A sua cidade tem uma área de %f km² \n", &area);
    
    printf("A sua cidade tem um PIB de %f reais \n", &PIB);
    
    printf("A sua cidade tem um total de %d pontos turísticos \n", &pontosturisticos);

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

    printf("Qual é o PIB (Produto Interno Bruto) da cidade escolhida? \n");
    scanf("%f", &PIB2);

    printf("Qual é a quantidade de pontos turísticos localizados nessa cidade? \n");
    scanf("%d", &pontosturisticos2);

    printf("Carta 2: \n");

    printf("%c é a primeira letra de seu Estado \n", &estado2);
    
    printf("O nome da sua cidade é %s \n", &nomedacidade2);
    
    printf("O código da sua carta é %s \n", &codigodacarta2);
    
    printf("A sua cidade tem um total de %f habitantes \n", &populacao2);
    
    printf("A sua cidade tem uma área de %f km² \n", &area2);
    
    printf("A sua cidade tem um PIB de %f reais \n", &PIB2);
    
    printf("A sua cidade tem um total de %d pontos turísticos \n", &pontosturisticos2);

    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
