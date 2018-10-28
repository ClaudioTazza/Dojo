#include <stdio.h>

int main(){
  int vet[10], i;

  for(i=0; i < 10; i++)
    printf("indirizzo di num[%d]: %p\n", i, vet+i);

  return 0;
}



