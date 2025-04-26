#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include <stdio.h>

int main()
{
	char  estado1, estado2, nome1[20], nome2[20];
	char  code1[4], code2[4];
	unsigned long int   population1, population2;
	int   turismo1, turismo2;
	float area1, pib1, area2, pib2, pibcapita1, pibcapita2, densidade1, densidade2;

//estado
	printf ("INSIRA O ESTADO(DE a A h) DA CIDADE 1:\n");
	scanf (" %c", &estado1);
	printf ("INSIRA O ESTADO(DE a A h) DA CIDADE 2:\n");
	scanf (" %c", &estado2);

//codigo
	printf ("INSIRA O CÓDIGO DA CIDADE 1: \n");
	scanf (" %s", &code1);
	printf ("INSIRA O CÓDIGO DA CIDADE 2:\n");
	scanf (" %s", &code2);

//nome
	printf ("INSIRA O NOME DA CIDADE 1:\n");
	scanf (" %s", &nome1);
	printf ("INSIRA O NOME DA CIDADE 2:\n");
	scanf (" %s", &nome2);

//populaC'C#o
	printf ("INSIRA A POPULAÇÃO DA CIDADE 1:\n");
	scanf (" %d", &population1);
	printf ("INSIRA A POPULAÇÃO DA CIDADE 2:\n");
	scanf (" %d", &population2);

//area
	printf ("INSIRA A ÁREA DA CIDADE 1:\n");
	scanf (" %f", &area1);
	printf ("INSIRA A ÁREA DA CIDADE 2:\n");
	scanf (" %f", &area2);

//PIB
	printf ("INSIRA O PIB DA CIDADE 1:\n");
	scanf ("%f", &pib1);
	printf ("INSIRA O PIB DA CIDADE 2:\n");
	scanf ("%f", &pib2);

//turismo
	printf ("INSIRA QUANTIDADE DE PONTOS TURCSTICOS DA CIDADE 1:\n");
	scanf (" %d", &turismo1);
	printf ("INSIRA QUANTIDADE DE PONTOS TURCSTICOS DA CIDADE 2:\n");
	scanf (" %d", &turismo2);

	pibcapita1 = pib1 / population1;
	pibcapita2 = pib2 / population2;

	densidade1 = population1 / area1;
	densidade2 = population2 / area2;
	
	float superpower1 = population1 + area1 + pib1 + turismo1 + pibcapita1 - densidade1;
    float superpower2 = population2 + area2 + pib2 + turismo2 + pibcapita2 - densidade2;

//dados
	printf ("==============================\n");


	printf ("CIDADE 1: \n");
	printf ("ESTADO: %c \n", estado1);
	printf ("CÓDIGODIGO CARTA: %s \n", code1);
	printf ("NOME: %s \n", nome1);
	printf ("POPULAÇÃO: %d \n", population1);
	printf ("AREA: %.2f km quadrados \n", area1);
	printf ("PIB: %.2f \n", pib1);
	printf ("PONTOS TURíSTICOS: %d \n", turismo1);
	printf ("PIB PER CAPITA: %.2f \n", pibcapita1);
	printf ("DENSIDADE POPULACIONAL: %.2f hab/km2 \n", densidade1);
	printf ("SuperPoder: %.2f \n", superpower1);

	printf ("==============================\n");

	printf ("CIDADE 2: \n");
	printf ("ESTADO: %c \n", estado2);
	printf ("CóDIGO CARTA: %s \n", code2);
	printf ("NOME: %s \n", nome2);
	printf ("POPULAÇÃO: %d \n", population2);
	printf ("AREA: %.2f km quadrados \n", area2);
	printf ("PIB: %.2f bilhC5es de reais \n", pib2);
	printf ("PONTOS TURiSTICOS: %d \n", turismo2);
	printf ("PIB PER CAPITA: %.2f \n", pibcapita2);
	printf ("DENSIDADE POPULACIONAL: %.2f hab/km2\n", densidade2);
	printf ("SuperPoder: %.2f \n", superpower2);

	printf ("==============================\n");
	
	if (population1 > population2) {
	  printf ("População: Cidade 1 venceu (1)\n");
	}
	else {
	  printf ("População: Cidade 2 venceu(0)\n");
	}
	
	if (area1 > area2) {
	  printf ("Área: Cidade 1 venceu (1)\n");
	}
	else {
	  printf ("Área: Cidade 2 venceu(0)\n");
	}
	
	if ( pib1 > pib2 ) {
	  printf ("PIB: Cidade 1 venceu (1)\n");
	}
	else {
	  printf ("PIB: Cidade 2 venceu(0)\n");
	}
	
	if ( turismo1 > turismo2 ) {
	  printf ("P. Turísticos: Cidade 1 venceu (1)\n");
	}
	else {
	  printf ("P. Turísticos: Cidade 2 venceu(0)\n");
	}

	if ( densidade1 < densidade2 ) {
	  printf ("Densidade Populacional: Cidade 1 venceu (1)\n");
	}
	else {
	  printf ("Densidade Populacional: Cidade 2 venceu(0)\n");
	}
	
	if ( pibcapita1 > pibcapita2) {
	  printf ("PIB percapita: Cidade 1 venceu (1)\n");
	}
	else {
	  printf ("PIB percapita: Cidade 2 venceu(0)\n");
	}
	
	if ( superpower1 > superpower2 ) {
	  printf ("Super Poder: Cidade 1 venceu (1)\n");
	}
	else {
	  printf ("Super Poder: Cidade 2 venceu(0)\n");
	}
	
	return 0;
}