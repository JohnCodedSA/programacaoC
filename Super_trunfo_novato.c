#include <stdio.h>

int main(){
    //Declarando variáveis.

//Primeira carta.
char estado1,codcard1[3],cidade1[30];
int populacao1, pontosturisticos1;
float area1, pib1;

//Segunda Carta.
char estado2,codcard2[3],cidade2[30];
int populacao2, pontosturisticos2;
float area2, pib2;

//Cadastro da primeira carta
printf("Digite o estado (A-H): ");
scanf(" %c", &estado1);

printf("Digite o código da carta (ex: A01,B02): ");
scanf("%s",&codcard1);

printf("Digite o nome da cidade: ");
scanf("%s", &cidade1);

printf("População: ");
scanf("%d", &populacao1);

printf("Área (em km²): ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f",&pib1);

printf("Número de pontos turísticos: ");
scanf("%d", &pontosturisticos1);

//Cadastro da segunda carta
printf("Digite o estado (A-H): ");
scanf(" %c", &estado2);

printf("Digite o código da carta (ex: A01,B02): ");
scanf("%s",&codcard2);

printf("Digite o nome da cidade: ");
scanf("%s", &cidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área (em km²): ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f",&pib2);

printf("Número de pontos turísticos: ");
scanf("%d", &pontosturisticos2);

//Exibição dos dados da primeira carta
printf("\nInformações da primeira carta: \n");
printf("\nEstado: %c\n",estado1);
printf("\nCódigo da carta: %s\n",codcard1);
printf("\nCidade: %s\n",cidade1);
printf("\nPopulação: %d\n",populacao1);
printf("\nÁrea (em km²): %.2f\n",area1);
printf("\nPIB: %.2f\n",pib1);
printf("\nNúmero de pontos turísticos: %d\n",pontosturisticos1);

//Exibição dos dados da segunda carta
printf("\nInformações da primeira carta: \n");
printf("\nEstado: %c\n",estado2);
printf("\nCódigo da carta: %s\n",codcard2);
printf("\nCidade: %s\n",cidade2);
printf("\nPopulação: %d\n",populacao2);
printf("\nÁrea (em km²): %.2f\n",area2);
printf("\nPIB: %.2f\n",pib2);
printf("\nNúmero de pontos turísticos: %d\n",pontosturisticos2);

return 0;





}