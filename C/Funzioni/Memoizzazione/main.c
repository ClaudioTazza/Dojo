#include <stdio.h>
#include "fibonacci.h"

int main(){
  int n = 0;

  puts("Imaggino tu voglia vedere i primi...");
  scanf("%d", &n);
  puts("Numeri :)");

  fibonacci(n);

  return 0;
}
