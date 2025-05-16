#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char estado1, estado2;;
    char codigo1[3], codigo2[3];
    char cidade1[50], cidade2[50];
    int habitantes1, habitantes2;
    float area1, area2;
    float pib1, pib2;
    int turisiticos1, turisiticos2;
    float pibpercapta1, pibpercapta2;
    float densidadepopulacional1, densidadepopulacional2;
    float SuperPoder1, SuperPoder2;
    int opcao;

//codigo referente a entrada de informações da carta 1
    printf("Cadastro da Carta 1: \n");

    printf("Para representar o Estado digite uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado1);

    printf("Para definir o codigo da carta digite um numero de '01' a '04': \n");
    scanf(" %s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade1);
 
    printf("Digite o numero de habitantes: \n");
    scanf(" %d", &habitantes1);

    printf("Digite a área em km²: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &turisiticos1);

//codigo referente a entrada de informações da carta 2
    printf("\nCadastro da Carta 2: \n");

    printf("Para representar o Estado digite uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado2);

    printf("Para definir o codigo da carta digite um numero de '01' a '04': \n");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade2);

    printf("Digite o numero de habitantes: \n");
    scanf(" %d", &habitantes2);

    printf("Digite a área em km²: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &turisiticos2); 

//criar a funçao de media da carta 1 e carta 2
    densidadepopulacional1 = habitantes1 / area1 ;
    pibpercapta1 = pib1 / habitantes1 ;
    densidadepopulacional2 = habitantes2 / area2 ;
    pibpercapta2 = pib2 / habitantes2 ;

//calcular o super poder da carta 1 e carta 2
    SuperPoder1 = habitantes1 + area1 + pib1 + turisiticos1 + pibpercapta1 + (1 / densidadepopulacional1);
    SuperPoder2 = habitantes2 + area2 + pib2 + turisiticos2 + pibpercapta2 + (1 / densidadepopulacional2);

//cogigo referente a saida de informação da carta 1
    printf("\ncarta1 \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %c%s \n", estado1, codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", habitantes1);
    printf("Área: %.2fkm² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", turisiticos1);
    printf("Densidade Demografica: %.2f \n", densidadepopulacional1);
    printf("PIB per Capita: %.2f \n", pibpercapta1);

//codigo referente a saida de informação da carta 2
    printf("\ncarta2 \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %c%s \n", estado2, codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", habitantes2);
    printf("Área: %.2fkm² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turisiticos2);
    printf("Densidade Demografica: %.2f \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f \n", pibpercapta2);

//Escolha do atributo de comparação
    printf("\nEscolha um atributo para comparar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    scanf("%d", &opcao);

//Case População
    switch (opcao) {
        case 1: printf("\nA opção escolhida para comparação foi *População*\n");
                printf("Carta 1 - %s (%c): %d \n", cidade1, estado1, habitantes1);
                printf("Carta 2 - %s (%c): %d \n", cidade2, estado2, habitantes2);
            if (habitantes1 >= habitantes2) {
            if (habitantes1 == habitantes2) { printf("Resultado: Houve um empate");} 
            else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}}
            else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}
            break;

//Case Área
        case 2: printf("\nA opção escolhida para comparação foi *Área*\n");
                printf("Carta 1 - %s (%c): %.2f \n", cidade1, estado1, area1);
                printf("Carta 2 - %s (%c): %.2f \n", cidade2, estado2, area2);
            if (area1 >= area2) {
            if (area1 == area2) { printf("Resultado: Houve um empate");} 
            else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}}
            else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}
            break;

//Case PIB
        case 3: printf("\nA opção escolhida para comparação foi *PIB*\n");
                printf("Carta 1 - %s (%c): %.2f \n", cidade1, estado1, pib1);
                printf("Carta 2 - %s (%c): %.2f \n", cidade2, estado2, pib2);
            if (pib1 >= pib2) {
            if (pib1 == pib2) { printf("Resultado: Houve um empate");} 
            else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}}
            else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}
            break;

//Case Pontos Turiticos
        case 4: printf("\nA opção escolhida para comparação foi *Número de Pontos Turisticos*\n");
                printf("Carta 1 - %s (%c): %d \n", cidade1, estado1, turisiticos1);
                printf("Carta 2 - %s (%c): %d \n", cidade2, estado2, turisiticos2);
            if (turisiticos1 >= turisiticos2) {
            if (turisiticos1 == turisiticos2) { printf("Resultado: Houve um empate");} 
            else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}}
            else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}
            break;

//Case Densidade Demografica
        case 5: printf("\nA opção escolhida para comparação foi *Densidade Demografica*\n");
                printf("Carta 1 - %s (%c): %.2f \n", cidade1, estado1, densidadepopulacional1);
                printf("Carta 2 - %s (%c): %.2f \n", cidade2, estado2, densidadepopulacional2);
            if (densidadepopulacional1 >= densidadepopulacional2) {
            if (densidadepopulacional1 == densidadepopulacional2) { printf("Resultado: Houve um empate");} 
            else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}}
            else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}
            break;

//Qualquer outra opção será tida como invalida
        default: printf("Opção inválida\n");}

    return 0;
}