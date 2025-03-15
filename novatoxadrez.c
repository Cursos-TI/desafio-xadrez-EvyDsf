#include <stdio.h>

int main () {

    int bispo = 1;
    int rainha = 1;
    int torre  = 1;
    int opcao;

    printf ("      XADREZ      \n");
    printf (" 1 - Quero mover a rainha \n");
    printf (" 2 - Quero mover a torre \n");
    printf (" 3 - Quero mover o bispo \n");
    printf (" 4 - Sair do jogo \n");
    printf ("Digite uma opção: \n");
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
    do {
    printf ("Direita \n");
    torre++;
    } while (torre <=5);

    break;

   case 3: 

          printf ("Você escolheu o bispo \n");

          for (bispo; bispo<=8; bispo++) {
              printf ("Diagonal superior direita \n");
        
          }
 
          break;

        case 4: 

        printf ("Você está saindo do jogo...");
        break;


          default:

          printf ("Opção inválida, tente novamente.");
          break;


}
}










