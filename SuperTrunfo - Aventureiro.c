#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Definição de variáveis
    char nome1[50], nome2[50];
    char estado1, estado2;
    char cod_estado1[4], cod_estado2[4];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade_pop1, densidade_pop2, pib_p1, pib_p2;
    int p_turistico1, p_turistico2;
    int opcao_comparacao;

    // Inserção de dados da primeira cidade
    printf("Insira os dados da primeira carta:\n");
    printf("Insira uma letra de A-H para representar o código do estado:\n");
    scanf(" %c", &estado1); // espaço antes para consumir o '\n'
    printf("Insira o código do estado seguido de um número de 01-04 (EX: A01, B02):\n");
    scanf(" %3s", cod_estado1); // Leitura de até 3 caracteres
    printf("Insira o nome da cidade:\n");
    scanf(" %[^\n]s", nome1); // Leitura de string com espaços
    printf("Insira a quantidade de habitantes:\n");
    scanf("%d", &populacao1);
    printf("Insira a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);
    printf("Insira o Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos na cidade:\n");
    scanf("%d", &p_turistico1);
    densidade_pop1 = populacao1 / area1;
    pib_p1 = pib1 / populacao1;

    printf("\n\n");

    // Inserção de dados da segunda cidade
    printf("Insira os dados da segunda carta:\n");
    printf("Insira uma letra de A-H para representar o código do estado:\n");
    scanf(" %c", &estado2);
    printf("Insira o código do estado seguido de um número de 01-04 (EX: A01, B02):\n");
    scanf(" %3s", cod_estado2);
    printf("Insira o nome da cidade:\n");
    scanf(" %[^\n]s", nome2);
    printf("Insira a quantidade de habitantes:\n");
    scanf("%d", &populacao2);
    printf("Insira a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);
    printf("Insira o Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos na cidade:\n");
    scanf("%d", &p_turistico2);
    densidade_pop2 = populacao2 / area2;
    pib_p2 = pib2 / populacao2;

    // Menu de comparação
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Densidade Populacional\n5. Pontos Turísticos\n");
    scanf("%d", &opcao_comparacao);

    // Comparação com switch
    switch (opcao_comparacao) {
        case 1: // Comparar população
            if (populacao1 > populacao2) {
                printf("A cidade %s venceu com a maior população.\n", nome1);
            } else if (populacao1 < populacao2) {
                printf("A cidade %s venceu com a maior população.\n", nome2);
            } else {
                printf("As cidades têm a mesma população.\n");
            }
            break;
        case 2: // Comparar área
            if (area1 > area2) {
                printf("A cidade %s venceu com a maior área.\n", nome1);
            } else if (area1 < area2) {
                printf("A cidade %s venceu com a maior área.\n", nome2);
            } else {
                printf("As cidades têm a mesma área.\n");
            }
            break;
        case 3: // Comparar PIB
            if (pib1 > pib2) {
                printf("A cidade %s venceu com o maior PIB.\n", nome1);
            } else if (pib1 < pib2) {
                printf("A cidade %s venceu com o maior PIB.\n", nome2);
            } else {
                printf("As cidades têm o mesmo PIB.\n");
            }
            break;
        case 4: // Comparar densidade populacional
            if (densidade_pop1 < densidade_pop2) { // Menor densidade vence
                printf("A cidade %s venceu com a menor densidade populacional.\n", nome1);
            } else if (densidade_pop1 > densidade_pop2) {
                printf("A cidade %s venceu com a menor densidade populacional.\n", nome2);
            } else {
                printf("As cidades têm a mesma densidade populacional.\n");
            }
            break;
        case 5: // Comparar pontos turísticos
            if (p_turistico1 > p_turistico2) {
                printf("A cidade %s venceu com o maior número de pontos turísticos.\n", nome1);
            } else if (p_turistico1 < p_turistico2) {
                printf("A cidade %s venceu com o maior número de pontos turísticos.\n", nome2);
            } else {
                printf("As cidades têm o mesmo número de pontos turísticos.\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}