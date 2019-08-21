#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

void random_init(){
  srand(time(NULL));
}

int random_between(int min, int max){
  int diff = max - min;

  if(diff < 0){
    puts("Valore di max superiore al valore di min");
    return -1;
  }

  if(diff == 0)
    return min;

  return min + (rand() % diff) ;
}
