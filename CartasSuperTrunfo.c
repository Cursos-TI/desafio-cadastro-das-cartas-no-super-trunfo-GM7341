#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char nomec[20];
    int pontosT;
    float pib, area, populacao;
    char cod1;
    int cod2;
    printf("Digite o código da cidade: ");
    scanf("%c %d",&cod1, &cod2);

    printf("\nDigite o nome da cidade: ");
    scanf("%s",&nomec);

    printf("\nDigite a população: ");
    scanf("%f",&populacao);

    printf("\nDigite a área: ");
    scanf("%f",&area);

    printf("\nDigite o PIB: ");
    scanf("%f",&pib);

    printf("\nDigite o número de pontos turísticos: ");
    scanf("%d",&pontosT);


    printf("\n\nCódigo da cidade: %c%d\n", cod1, cod2);
    printf("Nome: %s\n", nomec);
    printf("População: %f\n", populacao);
    printf("Área: %fKm²\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de pontos turísticos %d\n", pontosT);


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
