#include <stdio.h>
#include "guess.h"

int main(){
  int rispostaEsatta = 0;
  int tentativo = 0;

  guess_init();

  rispostaEsatta = guess_getAnswer();

  while(1){

    putchar('\n');

    puts("I gave a number between 1 and 1000.");
    puts("Can you guess my number?");
    puts("Please type your first guess.");
    printf("(Risposta esatta = %d).\n", rispostaEsatta);

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
  return 0;
}
