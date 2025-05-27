#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    char estado1[50], estado2[50], cod1[5], cod2[5], cidade1[50], cidade2[50];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        printf("Digite um Estado: \n");
    scanf("%s", &estado1);

    printf("Digite um codigo, com uma letra para representar o estado e um número 0 e 1: \n");
    scanf("%s", &cod1);

    printf("Digite uma cidade deste Estado: \n");
    scanf("%s", &cidade1);
    
    printf("Digite a população desta cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área desta cidade: \n");
    scanf("%f", &area1);

    printf("Digite o pib desta cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos1);



    printf("Digite outro Estado: \n");
    scanf("%s", &estado2);

    printf("Digite um codigo, com uma letra para representar o estado e um número 0 e 1: \n");
    scanf("%s", &cod2);

    printf("Digite uma cidade deste Estado: \n");
    scanf("%s", &cidade2);
   
    printf("Digite a população desta cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área desta cidade: \n");
    scanf("%f", &area2);

    printf("Digite o pib desta cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     printf("Carta 1: \n Estado: %s \n Codigo: %s \n Cidade: %s \n População: %d \n Area: %f \n Pib: %f \n Pontos Turisticos: %d \n", estado1, cod1, cidade1, populacao1, area1, pib1, pontos1);

    printf("Carta 2: \n Estado: %s \n Codigo: %s \n Cidade: %s \n População: %d \n Area: %f \n Pib: %f \n Pontos Turisticos: %d \n", estado2, cod2, cidade2, populacao2, area2, pib2, pontos2);

    return 0;
}
