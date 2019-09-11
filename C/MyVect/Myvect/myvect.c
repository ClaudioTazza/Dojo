#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myvect.h"

void myvect_init(){
  srand(time(NULL));
}

void myvect_zeroes(int v[], const int size){
  for(int i = 0; i < size; i++)
    v[i] = 0;
}

void myvect_ones(int v[], const int size){
  for(int i = 0; i < size; i++)
    v[i] = 1;
}

void myvect_sequence(int v[], const int size, const int start, const int step){
  for(int i = 0; i < size; i++)
    v[i] = start + (step * i);
}

void myvect_random(int v[], const int size, const int min, const int max){
  for(int i = 0; i < size; i++)
    v[i] = (rand() % (max - min)) + min;
}

void myvect_print(const int v[], const int size){
  for(int i = 0; i < size; i++)
    printf("%d ", v[i]);
  putchar('\n');
}

void myvect_reverse(int v[], const int size){
  int temp;

  for(int i = 0; i < size/2; i++){
    temp = v[i];
    v[i] = v[size - (i + 1)];
    v[size - (i + 1)] = temp;
  }
}
