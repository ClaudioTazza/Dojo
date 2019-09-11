#include <stdio.h>
#include "myvect.h"

int main(){
  int arraySize = 11;
  int vett[arraySize];
  myvect_init();

  myvect_zeroes(vett, arraySize);
  myvect_print(vett, arraySize);

  myvect_sequence(vett, arraySize, 1, 1);
  myvect_print(vett, arraySize);

  myvect_reverse(vett, arraySize);
  myvect_print(vett, arraySize);

  return 0;
}
