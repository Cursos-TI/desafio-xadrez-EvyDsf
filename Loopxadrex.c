
#include <stdio.h>



    void movimento (int xadrez) {
    if (xadrez > 0 ) { 
        printf("Esquerda \n");
        movimento (xadrez -1);
        return; 
    }
}

    void movimento2 (int torre ) {
  if (torre>0) {
    printf ("Direita \n");
    movimento2 (torre -1);

  }
}

    void movimento3 (int bispo) {
    if (bispo >0) {

    printf ("Diagonal direita \n");
    movimento3 (bispo -1);
}

}

    int main () {

    int bispo = 5;
    int rainha = 8;
    int torre  = 5;
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
    movimento (rainha);

    break;

    case 2: 

    printf ("Você escolheu a torre \n");
    movimento3 (torre);


    break;

    case 3: 

    printf ("Você escolheu o bispo \n");

    for (bispo; bispo<=8; bispo++) {
    printf ("Diagonal superior direita \n");
    }
 
    break;

    case 4: 
    
    printf("Você escolheu o cavalo \n");

    for (int i = 0, j = 0; i < 2 || j < 1;) {
        if (i < 2) { 
            printf("Cima\n", i + 1);
            i++;
        }
        if (i == 2 && j < 1) { 
            printf("Direita \n", j + 1);
            j++;
        }
    }

    break;

    case 5: 

    printf ("Você está saindo do jogo...");
    break;
    


    default:

    printf ("Opção inválida, tente novamente.");
    break;
    }

}













