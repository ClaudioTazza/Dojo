#include <stdio.h>
#include "swap.h"

int main(){
  int a = 1, b = 3 ;

  puts("Valori iniziali");
  printf("a: %d\nb: %d\n\n", a, b);

  swap(&a, &b);

  puts("Dopo lo scambio");
  printf("a: %d\nb: %d\n", a, b);

  return 0;
}
