#include <stdio.h>
#include "coin.h"

int main(){
  int heads = 0 , tails = 0;

  coin_init();

  for(int i = 0; i < 100; i++){

  if(coin_flip() == 0)
    heads += 1;
  else
    tails += 1;

  }

  printf("Heads: %d\nTails: %d\n", heads, tails);

  return 0;
}
