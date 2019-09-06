#include <stdio.h>
#include "vettore.h"

void raddoppia(int vett[], int n){
  int i = 0;

  for(i=0; i<n; i++)
    vett[i] *= 2;

}

void stampa(int vett[], int n){
  int i = 0;

  for(i=0; i<n; i++)
    printf("%d ", vett[i]);

}

void initVet(int vett[], int n){
  int i = 0;

  for(i=0; i<n; i++)
    vett[i] = i;
}
