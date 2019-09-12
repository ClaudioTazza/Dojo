#include <stdio.h>
#include "myvect_serch.h"

int myvect_serch(const int v[], const int size, const int key){

  for(int i=0; i < size; i++){
    if(v[i] == key)
      return i;
  }

  puts("Numero da cercare non presente");
  return -1;
}
