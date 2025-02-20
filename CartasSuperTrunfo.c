#include <stdio.h>
int main (){

    char estado[2];
char codigo[5];
char cidade[20];
float area;
float pib;
int turismo, populacao;
// Declara as variaveis que serão utilizadas

printf("Seja bem vindo ao Super Trunfo Paises!!!\n"); // Boas vindas ao programa

printf("\nPara iniciar, digite a letra do Estado da Carta 1: ");
scanf("%s", estado); 

printf("Agora digite o código da sua carta: ");
scanf("%s", codigo);

printf("Qual é a cidade de sua carta ? ");
scanf("%s", cidade);

printf("Insira o tamanho populacional aqui: ");
scanf("%d", &populacao);

printf("Digite a área da cidade em KM2: ");
scanf("%f", &area);


printf("Agora digite quantos pontos turisticos tem sua cidade: ");
scanf(" %d", &turismo);

printf("E por ultímo...digite o PIB: ");
scanf(" %f", &pib);

// Todas as linhas anteriores solicitam/armazenam os dados inseridos pelo usuario no terminal




while (getchar() != '\n'); // Limpa o Buffer para não ter erros

char estado2[2];
char codigo2[5];
char cidade2[20];
float area2;
float pib2;
int turismo2, populacao2;
// Variaveis da carta 2


printf("\nOk, dados da carta 1 armazenados, agora digite os dados da carta 2!\n");

printf("\nPara iniciar, digite a letra do Estado da Carta 2: ");
scanf(" %s", estado2);

printf("Muito bem, agora me diga qual é o código da sua carta: ");
scanf("%s", codigo2);

printf("Ok, qual é a cidade da sua carta ? Digite aqui: ");
scanf("%s", cidade2);

printf("Insira aqui o tamanho populacional: ");
scanf("%d", &populacao2);

printf("Estamos quase finalizando, qual é a área em KM2 ? Digite: ");
scanf("%f", &area2);

printf("Digite quantos pontos turisticos ela possui: ");
scanf("%d", &turismo2);

printf("Por ultimo, digite o PIB da sua cidade: ");
scanf("%f", &pib2);

// Todas as linhas anteriores solicitam/armazenam os dados inseridos pelo usuario no terminal

printf("\nOk, todos os dados foram armazenados com sucesso!\n");
printf("Aqui estão eles: \n");

printf("\nCarta 1: \n");
printf("Estado: %s\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("PIB: %f\n", pib);
printf("Número de pontos turisticos: %d\n", turismo);

printf("\nCarta 2: \n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("população: %d\n", populacao2);
printf("Área: %f\n", area2);
printf("PIB: %f\n", pib2);
printf("Número de pontos turisticos: %d\n", turismo2);

//Exibe os dados das variaveis que foram coletadas ao longo do programa



















}