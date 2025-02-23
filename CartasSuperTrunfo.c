#include <stdio.h>
int main (){

    char estado[2]; //Declara a variavel que armazena a letra do estado (entre A e H)
    char codigo[5]; //Declara a variavel que armazena o código da carta (letra do estado + numero)
    char cidade[20];//Declara a variavel que armazena o nome da cidade
    float area; //Declara a variavel que armazena a area da cidade
    float pib; //Declara a variavel que armazena o PIB da cidade
    int turismo, populacao; //Declara as variaveis que armazenam o numero de pontos turisticos e a população

    

    printf("Seja bem-vindo ao Super Trunfo Países!!!\n"); // Boas-vindas ao programa

    printf("\nPara iniciar, digite a letra do Estado da Carta 1: ");
    scanf("%s", estado); 

    printf("Agora digite o código da sua carta: ");
    scanf("%s", codigo);

    printf("Qual é a cidade de sua carta? ");
    scanf("%s", cidade);

    printf("Insira o tamanho populacional aqui: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em KM2: ");
    scanf("%f", &area);

    printf("Agora digite quantos pontos turísticos tem sua cidade: ");
    scanf(" %d", &turismo);

    printf("E por último...digite o PIB: ");
    scanf(" %f", &pib);
    // Todas as linhas entre printf e scanf coletam e armazenam as variaveis declaradas no inicio do programa
    float densidade = populacao / area; //Faz o calculo de densidade populacional utilizando os dados coletados
    float capita = pib / populacao; //Faz o calculo de PIB per capita utilizando os dados coletados
    float inverso_densidade = 1 / densidade; //Faz o calculo inverso da densidade (tem que inverter pois vence a carta que tiver a menor densidade)
    float Super_poder = (float) populacao + area + pib + turismo + capita + inverso_densidade; //Faz a soma de todas as variaveis (incluindo a densidade invertida) para descobrir o super poder da carta
    while (getchar() != '\n'); // Limpa o Buffer para não ter erros

    
    char estado2[2];
    char codigo2[5];
    char cidade2[20];
    float area2;
    float pib2;
    int turismo2, populacao2; //declaração das variaveis da carta de numero 2, seguindo o padrão da numero 1

    printf("\nOk, dados da carta 1 armazenados, agora digite os dados da carta 2!\n"); //Informa que os dados da 1 foram coletados corretamente

    printf("\nPara iniciar, digite a letra do Estado da Carta 2: ");
    scanf(" %s", estado2);

    printf("Muito bem, agora me diga qual é o código da sua carta: ");
    scanf("%s", codigo2);

    printf("Ok, qual é a cidade da sua carta? Digite aqui: ");
    scanf("%s", cidade2);

    printf("Insira aqui o tamanho populacional: ");
    scanf("%d", &populacao2);

    printf("Estamos quase finalizando, qual é a área em KM2? Digite: ");
    scanf("%f", &area2);

    printf("Digite quantos pontos turísticos ela possui: ");
    scanf("%d", &turismo2);

    printf("Por último, digite o PIB da sua cidade: ");
    scanf("%f", &pib2);
    //Todas as linhas entre printf e scanf coletam e armazenam os dados das varivaveis,seguindo o padrão da carta 1
    
    float densidade2 = populacao2 / area2; //Calculo densidade carta 2
    float capita2 = pib2 / populacao2; //Calculo PIB Per Capita carta 2
    float inverso_densidade2 = 1 / densidade2;
    float Super_poder2 = (float) populacao2 + area2 + pib2 + turismo2 + capita2 + inverso_densidade2;

    


    printf("\nOk, todos os dados foram armazenados com sucesso!\n"); //Informa que os dados foram coletados de maneira correta
    printf("Aqui estão eles: \n");

    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", turismo);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", capita);
    printf("Super Poder: %.2f\n", Super_poder);


    printf("\nCarta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %f\n", capita2);
    printf("Super Poder: %.2f\n", Super_poder2);

    //Bloco 1 informa os dados + os calculos da carta 1
    // Bloco 2 informa os dados + os calculos da carta 2
    int vence_populacao = (populacao > populacao2);
    int vence_area = (area > area2);
    int vence_pib = (pib > pib2);
    int vence_turismo = (turismo > turismo2);
    int vence_densidade = (densidade < densidade2);
    int vence_capita = (capita > capita2);
    int vence_super_poder = (Super_poder > Super_poder2);
    //Declara as variaveis que serão necessárias para comparar carta 1 com carta 2 e faz a comparação entre as estatisticas, linha por linha sendo comparada para exibir o resultado vencedor (1 para carta 1 e 0 para carta 2)

    printf("\n*** Resultado de vencedores ***\n (1 vence a Primeira carta, 0 vence a segunda carta)\n Aqui estão os resultados: \n");
    printf("\nVence em População: %d\n", vence_populacao);
    printf("Vence em área: %d\n", vence_area);
    printf("Venc em PIB: %d\n", vence_pib);
    printf("Vence em Pontos Turisticos: %d\n", vence_turismo);
    printf("Vence em Densidade Populacional: %d\n", vence_densidade);
    printf("Vence em PIB Per Capita: %d\n", vence_capita);
    printf("Vence em Super Poder: %d\n", vence_super_poder);
    //Exibe na tela o resultado das comparações, mostrando assim a carta vencedora



    return 0;
}