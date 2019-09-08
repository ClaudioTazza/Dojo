#include <stdio.h>
#include "vettore.h"
#include "raddoppiaInt.h"

void raddoppia(int vett[], int n){
  int i = 0;

  for(i=0; i<n; i++)
    raddoppiaInt(&vett[i]);

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

