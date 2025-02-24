#include <stdio.h>

int main() {

    //SUPER TRUNFO nível mestre 
    

    char estado, codigodacarta[4], nomedacidade[50];
    int populacao, pontosturisticos;
    float  area, pib, densidade , pibpc;

    char estado2, codigodacarta2[4], nomedacidade2[50];
    int populacao2, pontosturisticos2;
    float  area2, pib2, densidade2, pibpc2;


    //================ CARTA 1 ================

    printf("Seja muito bem-vindo ao desafio do Super-Trunfo!\n");

    printf("Digite o nome de um estado em forma de letras ( A - H ): \n");
    scanf(" %c", &estado); 

    printf("Digite o código da cidade: \n");
    scanf(" %s", codigodacarta); 

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomedacidade);

    printf("Digite qual a população dessa cidade: \n");
    scanf(" %d", &populacao);

    printf("Digite a área dessa cidade: \n");
    scanf(" %f", &area); 

    printf("Digite qual o PIB dessa cidade: \n");
    scanf(" %f", &pib); 

    printf("Digite quantos pontos turísticos essa cidade tem: \n");
    scanf(" %d", &pontosturisticos); 

    // Calculando densidade e pibpc carta1

        densidade = (float) populacao / area;
        pibpc = (pib * 1e9) / populacao;


    //================ CARTA 2 ================
    
    printf("Digite o nome de um estado em forma de letras ( A - H ): \n");
    scanf(" %c", &estado2); 

    printf("Digite o código da cidade: \n");
    scanf(" %s", codigodacarta2); 

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomedacidade2);

    printf("Digite qual a população dessa cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área dessa cidade: \n");
    scanf(" %f", &area2); 

    printf("Digite qual o PIB dessa cidade: \n");
    scanf(" %f", &pib2); 

    printf("Digite quantos pontos turísticos essa cidade tem: \n");
    scanf(" %d", &pontosturisticos2); 

    // Calculando densidade e pibpc carta2

        densidade2 = (float) populacao2 / area2;
        pibpc2 = (pib2 * 1e9) / populacao2;



    //Área de exibição das cartas 


    printf("\n---Carta1---\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("PIB per capita: R$ %.2f\n", pibpc);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("Pontos Turísticos: %d\n", pontosturisticos);

    printf("\n=============================\n");

    printf("\n---Carta2---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("PIB per capita: R$ %.2f\n", pibpc2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);


    return 0;  
}
