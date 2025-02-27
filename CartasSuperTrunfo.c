#include <stdio.h>

int main() {
    // Definição das variáveis separadas para cada atributo da cidade:

    unsigned int populacao1, populacao2, area1, area2, pontosTuristicos1, pontosTuristicos2;
    long unsigned int pib1, pib2, superPoder1, superPoder2;
    char cidade1[255], cidade2[255];
    float densidadeDemografica1, densidadeDemografica2, pibPerCapita1, pibPerCapita2;
    int pontuacao1 = 0, pontuacao2 = 0;

    // Cadastro das Cartas:

    printf("Bem-vindos ao super trunfo!\nEscolha duas cartas, \nperguntas envolvendo números deve-se utilizar apenas digitos.\nBoa sorte!\n\n");

    printf("Qual é a primeira cidade? ");
    fgets(cidade1, 255, stdin);

    printf(" \n ");

    printf("Quantas pessoas vivem na primeira cidade? ");
    scanf("%d", &populacao1);
    printf("\n");

    printf("Qual é a área em km² da primeira cidade? ");
    scanf("%d", &area1);
    printf("\n");

    printf("Qual é o PIB da primeira cidade? ");
    scanf("%lu", &pib1);
    printf("\n");

    printf("Quantos pontos turísticos existem na primeira cidade? ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    getchar();

    printf("Qual é a segunda cidade? ");
    fgets(cidade2, 255, stdin);
    printf(" \n");

    printf("Quantas pessoas vivem na segunda cidade? ");
    scanf("%d", &populacao2);
    printf("\n");

    printf("Qual é a área em km² da segunda cidade? ");
    scanf("%d", &area2);
    printf("\n");

    printf("Qual é o PIB da segunda cidade? ");
    scanf("%lu", &pib2);
    printf("\n");

    printf("Quantos pontos turísticos existem na segunda cidade? ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    densidadeDemografica1 = (float) populacao1 / area1;
    densidadeDemografica2 = (float) pib2 / populacao2;
    pibPerCapita1 = (float) pib1 / populacao1;
    pibPerCapita2 = (float) populacao2 / area2;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidadeDemografica1 + pibPerCapita1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidadeDemografica2 + pibPerCapita2;

    
    // Exibição dos Dados das Cartas:

    printf("Carta A01\n");
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %d km²\n", area1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("PIB: R$ %lu,00\n", pontosTuristicos1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemografica1);
    printf("PIB per Capita: R$ %.2f \n\n\n", pibPerCapita1);

    printf("Carta A02\n");
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %d km²\n", area2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("PIB: R$ %lu,00\n", pontosTuristicos2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemografica2);
    printf("PIB per Capita: R$ %.2f \n\n\n", pibPerCapita2);

    // Duelo
    
    printf("Duelo de cidades\n");
    printf("Cidade %s vs cidade %s\n\n", cidade1, cidade2);

    printf("População:             %d vs %d\n", populacao1 > populacao2, populacao1 < populacao2);
    printf("Área:                  %d vs %d\n", area1 > area2, area1 < area2);
    printf("Pontos turísticos:     %d vs %d\n", pontosTuristicos1 > pontosTuristicos2, pontosTuristicos1 < pontosTuristicos2);
    printf("PIB:                   %d vs %d\n", pib1 > pib2, pib1 < pib2);
    printf("Densidade demográfica: %d vs %d\n", densidadeDemografica1 < densidadeDemografica2, densidadeDemografica1 > densidadeDemografica2);
    printf("PIB per Capita:        %d vs %d\n", pibPerCapita1 > pibPerCapita2, pibPerCapita1 < pibPerCapita2);
    printf("Super poder:           %d vs %d\n\n", superPoder1 > superPoder2, superPoder1 < superPoder2);

    pontuacao1 += populacao1 > populacao2;
    pontuacao1 += area1 > area2;
    pontuacao1 += pontosTuristicos1 > pontosTuristicos2;
    pontuacao1 += pib1 > pib2;
    pontuacao1 += densidadeDemografica1 < densidadeDemografica2;
    pontuacao1 += pibPerCapita1 > pibPerCapita2;
    pontuacao1 += superPoder1 > superPoder2;

    pontuacao2 += populacao1 < populacao2;
    pontuacao2 += area1 < area2;
    pontuacao2 += pontosTuristicos1 < pontosTuristicos2;
    pontuacao2 += pib1 < pib2;
    pontuacao2 += densidadeDemografica1 > densidadeDemografica2;
    pontuacao2 += pibPerCapita1 < pibPerCapita2;
    pontuacao2 += superPoder1 < superPoder2;

    printf("Pontuação final: Cidade %s com %d pontos e cidade %s com %d pontos\n\n\n", cidade1, pontuacao1, cidade2, pontuacao2);

    return 0;
}
