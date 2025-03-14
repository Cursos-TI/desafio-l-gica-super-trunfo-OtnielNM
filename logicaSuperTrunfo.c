
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Aluno: Otniel Neres de Melo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
	char estado1, estado2, cod_estado1[4], cod_estado2[4], nome1[20], nome2[20];
	int populacao1, populacao2, p_turistico1, p_turistico2, cont_carta1, cont_carta2;
	float area1, area2, pib1, pib2, densidade_pop1, densidade_pop2, pib_p1, pib_p2;
	

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
	

	//Aplicando um contador para ver quem venceu mais quesitos
	cont_carta1 = 0;
	cont_carta2 = 0;
	
	
	//condições para cada situação, caso alguma das cartas ganhe nas condições, é acrescentado ++ no contador da devida carta
	if (populacao1 > populacao2){
		cont_carta1++;
	}else{
		cont_carta2++;
	}
	
	if (area1 > area2){
		cont_carta1++;
	}else{
		cont_carta2++;
	}
	
	if (pib1 > pib2){
		cont_carta1++;
	}else{
		cont_carta2++;
	}
	
	if (densidade_pop1 > densidade_pop2){
		cont_carta1++;
	}else{
		cont_carta2++;
	}
	
	if (pib_p1 > pib_p2){
		cont_carta1++;
	}else{
		cont_carta2++;
	}
	
	if (densidade_pop1 < densidade_pop2){
		cont_carta1++;
	}else{
		cont_carta2++;
	}
	
	//condição para ver qual a carta ganhadora e ver se existe um empate entre as cartas
	if (cont_carta1 == cont_carta2){
		printf ("As cidades empataram!\n");
	}else{
		if (cont_carta1 > cont_carta2){
			printf ("A carta 1: Cidade de %s ganhou!\n", nome1);
		}else{
			printf ("A carta 2: Cidade de %s ganhou!\n", nome2);
		}
	}
	
	
	return 1;
	
}
