#include <stdio.h>
int main (){
char estado[2];
char codigo[5];
char cidade[20];
float area;
float pib;
int turismo, populacao;
// Declara as variaveis que serão utilizadas

printf("Seja bem vindo ao Super Trunfo Paises!!!\n");

printf("Para iniciar, digite a letra do Estado da Carta 1: ");
scanf("%s", estado);

printf("Agora digite o código da sua carta: ");
scanf("%s", codigo);

printf("Qual é a cidade de sua carta ? ");
scanf("%s", cidade);

printf("Insira o tamanho populacional aqui: ");
scanf("%d", &populacao);

printf("Digite a área da cidade em KM2: ");
scanf("%f", &area);



printf("Para iniciar, digite quantos pontos turisticos tem sua cidade: ");
scanf("%d", &turismo);

printf("Digite o PIB: ");
scanf("%f", &pib);































}