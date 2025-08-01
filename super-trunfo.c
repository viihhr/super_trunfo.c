#include <stdio.h>

int main(){
    char numero_da_carta = '1';
    char estado [] = "A";
    char codigo [20]= "A01";

    char nome_da_cidade [20] = "Hamburgo";

    int populacao = 18000000;

    float area = 15000.11;

    float pib = 699.28;

    int numero_de_pontos_turisticos = 50;


    printf("Carta: %c\n", numero_da_carta);
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", nome_da_cidade);
    printf("População em base: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turisticos: %d\n\n", numero_de_pontos_turisticos);



    char numero_da_carta2 = '2';
    char estado2 [] = "B";
    char codigo2 [20]= "A02";

    char nome_da_cidade2 [20] = "Busan";

    int populacao2 = 17080000;

    float area2 = 18550.11;

    float pib2 = 899.28;

    int numero_de_pontos_turisticos2 = 58;


    printf("Carta: %c\n", numero_da_carta2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("População em base: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", numero_de_pontos_turisticos2);



    return 0;  
 
}