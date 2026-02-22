#include <stdio.h>

int main(){

//Definindo as variáveis 

    int carta1numero, carta1pop, carta1turismo;
    char carta1estado;
    char carta1codigo[4], carta1cidade[20];
    float carta1pib, carta1area;
    int carta2numero, carta2pop, carta2turismo;
    char carta2estado;
    char carta2codigo[4], carta2cidade[20];
    float carta2pib, carta2area;

//Lendo os dados da carta 1

    printf("Digite o numero da carta (1-4): ");
    scanf("%d", &carta1numero);

    printf("Digite o Estado desta carta (A-H): ");
    scanf(" %c", &carta1estado);

    sprintf(carta1codigo, "%c%02d", carta1estado, carta1numero);

    printf("Codigo gerado: %s\n", carta1codigo);
    printf("Digite o nome da Cidade:");
    scanf (" %[^\n]", carta1cidade);

    printf ("Digite a população da cidade: ");
    scanf ("%d", &carta1pop);

    printf ("Digite a área da cidade: ");
    scanf ("%f", &carta1area);

    printf ("Digite o Pib da cidade: ");
    scanf ("%f", &carta1pib);

    printf ("Digite o número de pontos turísticos da cidade: ");
    scanf ("%d", &carta1turismo);

    printf("\nCarta cadastrada com sucesso!\n");

//Lendo dados da carta 2

    //Lendo os dados da carta 1

    printf("Digite o numero da carta (1-4): ");
    scanf("%d", &carta2numero);

    printf("Digite o Estado desta carta (A-H): ");
    scanf(" %c", &carta2estado);

    sprintf(carta2codigo, "%c%02d", carta2estado, carta2numero);

    printf("Codigo gerado: %s\n", carta2codigo);
    printf("Digite o nome da Cidade:");
    scanf (" %[^\n]", carta2cidade);

    printf ("Digite a população da cidade: ");
    scanf ("%d", &carta2pop);

    printf ("Digite a área da cidade: ");
    scanf ("%f", &carta2area);

    printf ("Digite o Pib da cidade: ");
    scanf ("%f", &carta2pib);

    printf ("Digite o número de pontos turísticos da cidade: ");
    scanf ("%d", &carta2turismo);

    printf("\nCarta cadastrada com sucesso!\n");
    return 0;
}