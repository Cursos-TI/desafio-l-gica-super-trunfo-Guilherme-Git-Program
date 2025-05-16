#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
//Declaração de variaveis
    char pais1[50], pais2[50];
    char estado1[50], estado2[50];
    char codigo1[3], codigo2[3];
    char cidade1[50], cidade2[50];
    int habitantes1, habitantes2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float pibpercapta1, pibpercapta2;
    float densidadepopulacional1, densidadepopulacional2;
    float SuperPoder1, SuperPoder2;
    int atributo1, atributo2;
    float soma1, soma2;

//Entrada de dados das cartas
    printf("Cadastro da Carta 1: \n");
    printf("Digite o nome do País: \n");
    scanf(" %s", &pais1);
    printf("Digite o nome do Estado: \n");
    scanf(" %s", &estado1);
    printf("Para definir o codigo da carta digite um numero de '01' a '04': \n");
    scanf(" %s", &codigo1);
    printf("Digite o nome da Cidade: \n");
    scanf(" %s", &cidade1);
    printf("Digite o numero de habitantes: \n");
    scanf(" %d", &habitantes1);
    printf("Digite a área em km²: \n");
    scanf(" %f", &area1);
    printf("Digite o PIB: \n");
    scanf(" %f", &pib1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pontosturisticos1);

    printf("\nCadastro da Carta 2: \n");
    printf("Digite o nome do País: \n");
    scanf(" %s", &pais2);
    printf("Digite o nome do Estado: \n");
    scanf(" %s", &estado2);
    printf("Para definir o codigo da carta digite um numero de '01' a '04': \n");
    scanf(" %s", &codigo2);
    printf("Digite o nome da Cidade: \n");
    scanf(" %s", &cidade2);
    printf("Digite o numero de habitantes: \n");
    scanf(" %d", &habitantes2);
    printf("Digite a área em km²: \n");
    scanf(" %f", &area2);
    printf("Digite o PIB: \n");
    scanf(" %f", &pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pontosturisticos2); 

//Verificando validade das informações
    if (habitantes1 == 0 || habitantes2 == 0 || area1 == 0 || area2 == 0) { printf("Erro: População ou área não pode ser zero.\n");
    return 1; }

//calculo de variaveis
densidadepopulacional1 = habitantes1 / area1 ;
densidadepopulacional2 = habitantes2 / area2 ;
pibpercapta1 = pib1 / habitantes1 ;
pibpercapta2 = pib2 / habitantes2 ;
SuperPoder1 = habitantes1 + area1 + pib1 + pontosturisticos1 + pibpercapta1 + (1 / densidadepopulacional1);
SuperPoder2 = habitantes2 + area2 + pib2 + pontosturisticos2 + pibpercapta2 + (1 / densidadepopulacional2);

//exibição das cartas
    printf("\ncarta1 \n");
    printf("País: %s \n", pais1);
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s-%s \n", estado1, codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", habitantes1);
    printf("Área: %.2fkm² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);
    printf("Densidade Demografica: %.2f \n", densidadepopulacional1);
    printf("PIB per Capita: %.2f \n", pibpercapta1);

    printf("\ncarta2 \n");
    printf("País: %s \n", pais2);
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s-%s \n", estado2, codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", habitantes2);
    printf("Área: %.2fkm² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
    printf("Densidade Demografica: %.2f \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f \n", pibpercapta2);

//Escolha do atributo de comparação
    printf("\nEscolha dois atributos para comparar as cartas\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha o Primeiro Atributo:");
    scanf("%d", &atributo1);
    if (atributo1 < 1 || atributo1 > 5) { printf("Atributo invalido\n");
    return 1; }
    printf("Escolha Um Segundo Atributo Diferente Do Primeiro:");
    scanf("%d", &atributo2);
    if (atributo1 == atributo2 || atributo2 < 1 || atributo2 > 5) { printf("Atributo invalido. Escolha um atributo diferente do primeiro\n");
    return 1; }

//Calculo dos indicadores
     if ((atributo1 == 1 && atributo2 == 2) || (atributo1 == 2 && atributo2 == 1)) { soma1 = habitantes1 + area1;                
                                                                                     soma2 = habitantes2 + area2; }
else if ((atributo1 == 1 && atributo2 == 3) || (atributo1 == 3 && atributo2 == 1)) { soma1 = habitantes1 + pib1;         
                                                                                     soma2 = habitantes2 + pib2; }
else if ((atributo1 == 1 && atributo2 == 4) || (atributo1 == 4 && atributo2 == 1)) { soma1 = habitantes1 + pontosturisticos1;
                                                                                     soma2 = habitantes2 + pontosturisticos2; }
else if ((atributo1 == 1 && atributo2 == 5) || (atributo1 == 5 && atributo2 == 1)) { soma1 = habitantes1 + densidadepopulacional1;
                                                                                     soma2 = habitantes2 + densidadepopulacional2; }
else if ((atributo1 == 2 && atributo2 == 3) || (atributo1 == 3 && atributo2 == 2)) { soma1 = area1 + pib1;
                                                                                     soma2 = area2 + pib2; }
else if ((atributo1 == 2 && atributo2 == 4) || (atributo1 == 4 && atributo2 == 2)) { soma1 = area1 + pontosturisticos1;
                                                                                     soma2 = area2 + pontosturisticos2; }
else if ((atributo1 == 2 && atributo2 == 5) || (atributo1 == 5 && atributo2 == 2)) { soma1 = area1 + densidadepopulacional1;
                                                                                     soma2 = area2 + densidadepopulacional2; }
else if ((atributo1 == 3 && atributo2 == 4) || (atributo1 == 4 && atributo2 == 3)) { soma1 = pib1 + pontosturisticos1;
                                                                                     soma2 = pib2 + pontosturisticos2; }
else if ((atributo1 == 3 && atributo2 == 5) || (atributo1 == 5 && atributo2 == 3)) { soma1 = pib1 + densidadepopulacional1;
                                                                                     soma2 = pib2 + densidadepopulacional2; }
else if ((atributo1 == 4 && atributo2 == 5) || (atributo1 == 5 && atributo2 == 4)) { soma1 = pontosturisticos1 + densidadepopulacional1;
                                                                                     soma2 = pontosturisticos2 + densidadepopulacional2; }
else {printf("null");}

//Case dos atributos1
    switch (atributo1) {
        case 1: printf("\nA opção escolhida para comparação foi *População*\n");
                printf("Carta 1 - %s (%s): %d \n", cidade1, estado1, habitantes1);
                printf("Carta 2 - %s (%s): %d \n", cidade2, estado2, habitantes2);
        if (habitantes1 >= habitantes2) {
        if (habitantes1 == habitantes2) { printf("Resultado: Houve um empate");} 
        else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}}
        else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}
        break;

        case 2: printf("\nA opção escolhida para comparação foi *Área*\n");
                printf("Carta 1 - %s (%s): %.2f \n", cidade1, estado1, area1);
                printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, area2);
        if (area1 >= area2) {
        if (area1 == area2) { printf("Resultado: Houve um empate");} 
        else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}}
        else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}
        break;

        case 3: printf("\nA opção escolhida para comparação foi *PIB*\n");
                printf("Carta 1 - %s (%s): %.2f \n", cidade1, estado1, pib1);
                printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, pib2);
        if (pib1 >= pib2) {
        if (pib1 == pib2) { printf("Resultado: Houve um empate");} 
        else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}}
        else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}
        break;

        case 4: printf("\nA opção escolhida para comparação foi *Número de Pontos Turisticos*\n");
                printf("Carta 1 - %s (%s): %d \n", cidade1, estado1, pontosturisticos1);
                printf("Carta 2 - %s (%s): %d \n", cidade2, estado2, pontosturisticos2);
        if (pontosturisticos1 >= pontosturisticos2) {
        if (pontosturisticos1 == pontosturisticos2) { printf("Resultado: Houve um empate");} 
        else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}}
        else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}
        break;

        case 5: printf("\nA opção escolhida para comparação foi *Densidade Demografica*\n");
                printf("Carta 1 - %s (%s): %.2f \n", cidade1, estado1, densidadepopulacional1);
                printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, densidadepopulacional2);
        if (densidadepopulacional1 >= densidadepopulacional2) {
        if (densidadepopulacional1 == densidadepopulacional2) { printf("Resultado: Houve um empate");} 
        else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}}
        else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}
        break;
        default: printf("Opção inválida\n");}
      
//Case dos atributos2
    switch (atributo2) {
        case 1: printf("\nA opção escolhida para comparação foi *População*\n");
                printf("Carta 1 - %s (%s): %d \n", cidade1, estado1, habitantes1);
                printf("Carta 2 - %s (%s): %d \n", cidade2, estado2, habitantes2);
        if (habitantes1 >= habitantes2) {
        if (habitantes1 == habitantes2) { printf("Resultado: Houve um empate");} 
        else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}}
        else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}
        break;

        case 2: printf("\nA opção escolhida para comparação foi *Área*\n");
                printf("Carta 1 - %s (%s): %.2f \n", cidade1, estado1, area1);
                printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, area2);
        if (area1 >= area2) {
        if (area1 == area2) { printf("Resultado: Houve um empate");} 
        else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}}
        else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}
        break;

        case 3: printf("\nA opção escolhida para comparação foi *PIB*\n");
                printf("Carta 1 - %s (%s): %.2f \n", cidade1, estado1, pib1);
                printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, pib2);
        if (pib1 >= pib2) {
        if (pib1 == pib2) { printf("Resultado: Houve um empate");} 
        else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}}
        else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}
        break;

        case 4: printf("\nA opção escolhida para comparação foi *Número de Pontos Turisticos*\n");
                printf("Carta 1 - %s (%s): %d \n", cidade1, estado1, pontosturisticos1);
                printf("Carta 2 - %s (%s): %d \n", cidade2, estado2, pontosturisticos2);
        if (pontosturisticos1 >= pontosturisticos2) {
        if (pontosturisticos1 == pontosturisticos2) { printf("Resultado: Houve um empate");} 
        else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}}
        else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}
        break;

        case 5: printf("\nA opção escolhida para comparação foi *Densidade Demografica*\n");
                printf("Carta 1 - %s (%s): %.2f \n", cidade1, estado1, densidadepopulacional1);
                printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, densidadepopulacional2);
        if (densidadepopulacional1 >= densidadepopulacional2) {
        if (densidadepopulacional1 == densidadepopulacional2) { printf("Resultado: Houve um empate");} 
        else {printf("Resultado: carta 2 (%s) Venceu! \n", cidade2);}}
        else {printf("Resultado: carta 1 (%s) Venceu! \n", cidade1);}
        break;
        default: printf("Opção inválida\n");}

//Resultado final
        printf("\nResultado Definitivo Da Roda\n");
        printf("Soma Dos Atributos Da Carta 1 - %s (%s): %.2f \n", cidade1, estado1, soma1);
        printf("Soma Dos Atributos Da Carta 2 - %s (%s): %.2f \n", cidade2, estado2, soma2);
        if (soma1 >= soma2) {
        if (soma1 == soma2) { printf("Resultado: A Rodada Empatou");} 
        else {printf("Resultado: Carta 1 (%s) Venceu A Rodada! \n", pais1);}}
        else {printf("Resultado: Carta 2 (%s) Venceu A Rodada! \n", pais2);}

return 0;
}