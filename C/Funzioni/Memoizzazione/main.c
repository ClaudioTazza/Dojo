#include <stdio.h>
#include "fibonacci.h"

int main(){
  for(int i = 0; i < 10; i++)
    printf("%d ", fibonacci(i) );

  putchar('\n');

  return 0;
}
