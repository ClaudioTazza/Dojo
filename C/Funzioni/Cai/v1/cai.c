#include "cai.h"
#include "random.h"

void cai_init(){
  random_init();
}

void cai_sbagliato(){
  puts("No. Please Try Again");
}

void cai_giusto(){
  puts("Very Good");
}

int cai_estrai_num(){
  return random_between(1, 10);
}
