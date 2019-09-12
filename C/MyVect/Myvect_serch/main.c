#include <stdio.h>
#include "myvect.h"
#include "myvect_serch.h"

int main(){
  const int arraySize = 10;
  int vet[arraySize];
  int cerca = 0, indiceNum= 0;

  myvect_init();

  myvect_random(vet, arraySize, 1, 30);
  myvect_print(vet, arraySize);

  scanf("%d", &cerca);
  indiceNum= myvect_serch(vet, arraySize, cerca);

  if(indiceNum != -1)
    printf("Il numero si trova nella casella di indice %d\n", indiceNum);

	
  return 0;
}
