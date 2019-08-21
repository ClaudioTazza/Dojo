#include <stdio.h>
#include "random.h"

void guess_init(){
  random_init();
}

int guess_getAnswer(){
  return random_between(1, 1000 + 1);
}

void guess_low(){
  puts("Too low. Try again");
}

void guess_high(){
  puts("Too high. Try again");
}

void guess_right(){
  puts("Nice!!");
}


