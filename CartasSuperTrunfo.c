#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
        char estado1, estado2, nome1[20], nome2[20];
        char code1[4], code2[4];
        int population1, turismo1, population2, turismo2;
        float area1, pib1, area2, pib2;
        
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
    
        //população
        printf ("INSIRA A POPULAÇÃO DA CIDADE 1:\n");
          scanf (" %d", &population1);
        printf ("INSIRA A POPULUÇÃOE DA CIDADE 2:\n");
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
        printf ("INSIRA QUANTIDADE DE PONTOS TURÍSTICOS DA CIDADE 1:\n");
          scanf (" %d", &turismo1);
        printf ("INSIRA QUANTIDADE DE PONTOS TURÍSTICOS DA CIDADE 2:\n");
          scanf (" %d", &turismo2);
    
    //dados
        printf ("CIDADE 1: \n");
        printf ("ESTADO: %c \n", estado1);
        printf ("CÓDIGO CARTA: %s \n", code1);
        printf ("NOME: %s \n", nome1);
        printf ("POPULAÇÂO: %d \n", population1);
        printf ("AREA: %f km quadrados \n", area1);
        printf ("PIB: %f bilhões de reais \n", pib1);
        printf ("PONTOS TURÌSTICOS: %d \n", turismo1);
        
        printf ("==============================\n");
        
        printf ("CIDADE 2: \n");
        printf ("ESTADO: %c \n", estado2);
        printf ("CÓDIGO CARTA: %s \n", code2);
        printf ("NOME: %s \n", nome2);
        printf ("POPULAÇÂO: %d \n", population2);
        printf ("AREA: %f km quadrados \n", area2);
        printf ("PIB: %f bilhões de reais \n", pib2);
        printf ("PONTOS TURÌSTICOS: %d \n", turismo2);


    return 0;
}
