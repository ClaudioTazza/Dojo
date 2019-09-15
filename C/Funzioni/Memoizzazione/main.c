#include <stdio.h>
#include "fibonacci.h"

int main(){
  for(int i = 0; i < 10; i++)
    printf("%d ", fibonacci(i + 1) );

  putchar('\n');

  return 0;
}
