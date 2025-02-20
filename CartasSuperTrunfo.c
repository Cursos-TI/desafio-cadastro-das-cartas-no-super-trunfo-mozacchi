#include <stdio.h>

int main() {

    //declarando variáveis

    char estado, codigodacarta[4], nomedacidade[50];
    int populacao, pontosturisticos;
    float  area, pib;

    char estado2, codigodacarta2[4], nomedacidade2[50];
    int populacao2, pontosturisticos2;
    float  area2, pib2;

    //Foi sofrido, mas deu certo. Agradeço à Deus e ao colega de turma pela ajuda.

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

    printf("Digite o nome de um estado: \n");
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

    printf("Carta1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);

    printf("Carta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;  
}
