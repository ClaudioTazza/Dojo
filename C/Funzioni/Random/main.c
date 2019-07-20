#include <stdio.h>
#include "random.h"

int main(){
  int min = 1, max = 1;
  random_init();

  puts("Random");
  puts("Modulo per la generazione di numero pseudocasuali\n");

  for(int i = 0; i < 4; i++){
    printf("5 numeri compresi tra %d e %d:\n", min, max);
    for(int i2 = 0; i2 < 5; i2++)
      printf("%d\n", random_between(min, max) );

    puts("");

    if(max == 3){
      min = 100;
      max = 150;
    }

    else
      max++;
  }

  return 0;
}
