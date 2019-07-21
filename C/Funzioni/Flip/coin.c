#include <stdio.h>
#include "coin.h"
#include "random.h"

void coin_init(){
  random_init();
}

int coin_flip(){
  return random_between(0, 2);
}

/*
void coin_simulation(int flips){
  int heads = 0, tails = 0, flip = 0;

  random_init();

  for(int i = 0; i < flips; i++){
    flip = random_between(0, 2);
    if(flip == 0)
      heads++;
    else
      tails++;
  }

  printf("Flips: %d\nHeads: %d\nTails: %d\n", flips, heads, tails);
}*/
