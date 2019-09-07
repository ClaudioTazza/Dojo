#include <stdio.h>
#include "vettore.h"

int main(){
  int vett[10];
 
  initVet(vett, 10);

  stampa(vett, 10);
  putchar('\n');

  raddoppia(vett, 10);

  stampa(vett, 10);
  putchar('\n');

  return 0;
}

