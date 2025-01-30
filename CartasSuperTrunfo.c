#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    unsigned int populacao1, populacao2, area1, area2, pontosTuristicos1, pontosTuristicos2;
    long unsigned int pib1, pib2;
    char cidade1[255], cidade2[255];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Bem-vindos ao super trunfo!\nEscolha duas cartas, \nperguntas envolvendo números deve-se utilizar apenas digitos.\nBoa sorte!\n\n");

    printf("Qual é a primeira cidade? ");
    scanf("%s", &cidade1);
    printf("\n");

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

    printf("Qual é a segunda cidade? ");
    scanf("%s", &cidade2);
    printf("\n");

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
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta A01\n");
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %d km²\n", area1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("PIB: R$ %lu,00\n\n\n", pontosTuristicos1);

    printf("Carta A02\n");
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %d km²\n", area2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("PIB: R$ %lu,00\n\n\n", pontosTuristicos2);

    return 0;
}
