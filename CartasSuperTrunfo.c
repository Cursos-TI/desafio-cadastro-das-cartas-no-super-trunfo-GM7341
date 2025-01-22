#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //váriaveis
    char nomec[20];
    int pontosT;
    float pib, area, populacao;
    char cod1;
    int cod2;
    float pibc, densidade;

    double superpoder;

    //Entrada de dados
    printf("Digite o código da cidade (por exemplo, A01, A02, B01, B02): ");
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

    //Cálculos
    densidade = populacao / area;
    pibc = pib / populacao;
    superpoder = populacao + area + pib + pontosT + pibc + densidade;

    //Saída de dados
    printf("\n\nCódigo da cidade: %c%d\n", cod1, cod2);
    printf("Nome: %s\n", nomec);
    printf("População: %.3f\n", populacao);
    printf("Área: %.3fKm²\n", area);
    printf("PIB: %.3f\n", pib);
    printf("Número de pontos turísticos %d\n", pontosT);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per capita: %.4f\n", pibc);
    printf("Super poder: %f", superpoder);
    return 0;
}
