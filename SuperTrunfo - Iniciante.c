
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Aluno: Otniel Neres de Melo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Variáveis para armazenar os dados das cidades
    char nome1[50], nome2[50];
    char estado1, estado2;
    char cod_estado1[4], cod_estado2[4];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade_pop1, densidade_pop2, pib_p1, pib_p2;
    int p_turistico1, p_turistico2;
    int opcao_comparacao;

   //inserção de dados da primeira carta
	printf ("Insira os dados da primeira carta:\n");
	printf ("Insira uma letra de A-H para representar o codigo do estado:\n");
	scanf (" %c", &estado1); //espaço antes da leitura da variavel para consumir o \n da entrada
	printf ("Insira o codigo do estado seguido de um numero de 01-04 (EX: A01, B02):\n");
	scanf (" %3s", cod_estado1); //%3s para leitura de 3 dados na string, espaço antes da leitura pra consumir o buffer e nao dar problema em pular condigo
	printf ("Insira o nome da cidade:\n");
	scanf (" %[^\n]s", nome1); //%[^\n] serve para ler a string com espaços
	printf ("Insira a quantidade de habitantes:\n");
	scanf ("%d", &populacao1);
	printf ("Insira a area da cidade em quilometros quadrados:\n");
	scanf ("%f", &area1);
	printf ("Insira o Produto Interno Bruto da cidade:\n");
	scanf ("%f", &pib1);
	printf ("Insira o numero de pontos turisticos na cidade:\n");
	scanf ("%d", &p_turistico1);
	densidade_pop1 = populacao1 / area1;
	pib_p1 = pib1 / populacao1;
	
	printf ("\n\n");
	
	
	//inserção de dados da segunda carta
	printf ("Insira os dados da segunda carta:\n");
	printf ("Insira uma letra de A-H para representar o codigo do estado:\n");
	scanf (" %c", &estado2);
	printf ("Insira o codigo do estado seguido de um numero de 01-04 (EX: A01, B02):\n");
	scanf (" %3s", cod_estado2);
	printf ("Insira o nome da cidade:\n");
	scanf (" %[^\n]s", nome2);
	printf ("Insira a quantidade de habitantes:\n");
	scanf ("%d", &populacao2);
	printf ("Insira a area da cidade em quilometros quadrados:\n");
	scanf ("%f", &area2);
	printf ("Insira o Produto Interno Bruto da cidade:\n");
	scanf ("%f", &pib2);
	printf ("Insira o numero de pontos turisticos na cidade:\n");
	scanf ("%d", &p_turistico2);
	densidade_pop2 = populacao2 / area2;
	pib_p2 = pib2 / populacao2;

    // Menu de comparação
    printf("Escolha o atributo para comparação:\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos turisticos\n");
    scanf("%d", &opcao_comparacao);

    // Comparação das cidades
    switch (opcao_comparacao) {
        case 1: // Comparar população
            if (populacao1 > populacao2) {
                printf("A cidade %s venceu com a maior populacao.\n", nome1);
            } else if (populacao1 < populacao2) {
                printf("A cidade %s venceu com a maior populacao.\n", nome2);
            } else {
                printf("As cidades tem a mesma população.\n");
            }
            break;
        case 2: // Comparar área
            if (area1 > area2) {
                printf("A cidade %s venceu com a maior area.\n", nome1);
            } else if (area1 < area2) {
                printf("A cidade %s venceu com a maior area.\n", nome2);
            } else {
                printf("As cidades tem a mesma area.\n");
            }
            break;
        case 3: // Comparar PIB
            if (pib1 > pib2) {
                printf("A cidade %s venceu com o maior PIB.\n", nome1);
            } else if (pib1 < pib2) {
                printf("A cidade %s venceu com o maior PIB.\n", nome2);
            } else {
                printf("As cidades tem o mesmo PIB.\n");
            }
            break;
        case 4: // Comparar pontos turísticos
            if (p_turistico1 > p_turistico2) {
                printf("A cidade %s venceu com o maior numero de pontos turisticos.\n", nome1);
            } else if (p_turistico1 < p_turistico2) {
                printf("A cidade %s venceu com o maior numero de pontos turisticos.\n", nome2);
            } else {
                printf("As cidades tem o mesmo numero de pontos turisticos.\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}