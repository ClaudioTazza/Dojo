#include <stdio.h>
#include "guess.h"

int main(){
  int rispostaEsatta = 0;
  int tentativo = 0;
  double again = 'n';

  guess_init();

  do{
    rispostaEsatta = guess_getAnswer();
    puts("I gave a number between 1 and 1000.");
    puts("Can you guess my number?");
    puts("Please type your first guess.");
    printf("(Risposta esatta = %d).\n", rispostaEsatta);
 
    while(1){
      putchar('\n');

      scanf("%d", &tentativo);

      putchar('\n');

      if(tentativo < rispostaEsatta)
        guess_low();
      else if(tentativo > rispostaEsatta)
        guess_high();
      else{
        guess_right();
        break;
      }
    }

    /* Vuoi giocare ancora? */
    puts("Would you like to play again (y or n)?");
    do{
      again = getchar();
    }while(again != 'n' && again != 'y');

  }while(again == 'y');
    return 0;
}
