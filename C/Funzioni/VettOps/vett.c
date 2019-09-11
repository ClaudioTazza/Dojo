#include <stdio.h>
#include "vett.h"

void vett_init(int *pv, int n){
  for(int i = 0; i < n; i++)
    *(pv+i) = i;
}

void vett_raddoppia(int *pv, int n){
  for(int i = 0; i < n; i++)
    *(pv+i) *= 2;
}

void vett_stampa(int *pv, int n){
  for(int i = 0; i < n; i++)
    printf("%d ", *(pv+i));
  putchar('\n');
}
