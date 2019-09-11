#include <stdio.h>
#include "vett.h"

int main(){
  const int arraySize = 10;
  int vett[arraySize];

  vett_init(vett, arraySize);
  vett_stampa(vett, arraySize);

  vett_raddoppia(vett, arraySize);
  vett_stampa(vett, arraySize);

  return 0;
}
