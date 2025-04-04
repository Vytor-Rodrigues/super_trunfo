#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estadoum;
    char codigodacarta1[3];
    char nomedacidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numerodept1;
    float pibpercapita1;
    float densidadep1;

    // Carta 2
    char estado2;
    char codigodacarta2[3];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numerodept2;
    float pibpercapita2 = populacao2 / pib2;
    float densidadep2 = populacao2 / area2;


    printf("****SUPER TRUNFO****\n\n");

    // Carta 1
    printf("Escolha o estado da cidade da carta 1 (uma letra de A a H): ");
    scanf(" %c", &estadoum);

    printf("Qual será o código da carta? Escolha um número de 01 a 04: ");
    scanf("%s", codigodacarta1);

    printf("Qual será o nome da cidade? ");
    scanf("%s", &nomedacidade1);

    printf("Qual a população desta cidade? ");
    scanf("%d", &populacao1);

    printf("Qual a área desta cidade? ");
    scanf("%f", &area1);

    printf("Qual o PIB desta cidade? ");
    scanf("%f", &pib1);

    printf("Qual o número de pontos turísticos desta cidade? ");
    scanf("%d", &numerodept1);

    pibpercapita1 = populacao1 / pib1;
    densidadep1 = populacao1 / area1;

    // Exibir informações da carta 1
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estadoum);
    printf("Código Da Carta: %s\n", codigodacarta1);
    printf("Nome Da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", numerodept1);
    printf("Pib Per Capita: %.2f\n", pibpercapita1);
    printf("Densidade Populacional: %.2f\n\n", densidadep1);

    // Carta 2
    printf("Agora vamos criar a carta 2.\n");
    printf("Escolha o estado da cidade da carta 2: ");
    scanf(" %c", &estado2);

    printf("Qual será o código da carta? Escolha um número de 01 a 04: ");
    scanf("%s", codigodacarta2);

    printf("Qual será o nome da cidade? ");
    scanf("%s", &nomedacidade2);

    printf("Qual a população desta cidade? ");
    scanf("%d", &populacao2);

    printf("Qual a área desta cidade? ");
    scanf("%f", &area2);

    printf("Qual o PIB desta cidade? ");
    scanf("%f", &pib2);

    printf("Qual o número de pontos turísticos desta cidade? ");
    scanf("%d", &numerodept2);

    pibpercapita2 = populacao2 / pib2;
    densidadep2 = populacao2 / area2;

    // Exibir informações da carta 2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código Da Carta: %s\n", codigodacarta2);
    printf("Nome Da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", numerodept2);
    printf("Pib Per Capita: %.2f\n", pibpercapita2);
    printf("Densidade Populacional: %.2f\n\n", densidadep2);

    // Conclusão
    printf("PARABÉNS! VOCÊ CONCLUIU SUAS CARTAS.\n");

    return 0;
}
