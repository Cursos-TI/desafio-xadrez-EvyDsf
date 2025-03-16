#include <stdio.h>

int main () {

    int bispo = 1;
    int rainha = 1;
    int torre  = 1;
    int cavalo = 1;
    int opcao;

    printf ("      XADREZ      \n");
    printf (" 1 - Quero mover a rainha \n");
    printf (" 2 - Quero mover a torre \n");
    printf (" 3 - Quero mover o bispo \n");
    printf (" 4 - Quereo mover o cavalo \n");
    printf (" 5 - Sair do jogo \n ");
    printf ("\n");
    printf ("Digite uma opção:");
    scanf ("%d", &opcao);


    switch (opcao){

    case 1: 

    printf ("Você escolheu a rainha \n");
    while (rainha <= 5) {
    printf ("Direita \n");
    rainha++;
    }

    break;

    case 2: 

    printf ("Você escolheu a torre \n");
    
    int i = 0, j = 0;

    while (i < 5) {
    
    i++;

    j=0;

    while (j<5) {

        printf ("Direita \n");
        j++;
    }


    break;

    case 3: 

    printf ("Você escolheu o bispo \n");

    for (bispo; bispo<=8; bispo++) {
    printf ("Diagonal superior direita \n");
    }
 
    break;

    case 4: 
    
    printf ("Você escolheu o cavalo \n");

    for (int i= 0;  i<2; i++) {

        printf ("Baixo \n");
 }

    for (int j=0; j<1; j++) {

    printf ("Direita \n");; }

    break;

    }


    case 5: 

    printf ("Você está saindo do jogo...");
    break;


    default:

    printf ("Opção inválida, tente novamente.");
    break;
    }
}










