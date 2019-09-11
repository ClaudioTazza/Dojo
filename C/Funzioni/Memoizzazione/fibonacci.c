#include <stdio.h>
#include "fibonacci.h"

int fibonacci_helper(int n, int cache[]){
  if(n==0 || n==1){
    cache[n] = n;
    return n;
  }
  else{
    return cache[n-1] + cache[n-2];
  }
}

void fibonacci(int n){
  int vett[n];

  for(int i=0; i < n; i++)
    vett[i] = 0;

  for(int i=0; i < n; i++){
    vett[i] = fibonacci_helper(i, vett);
    printf("%d ", vett[i]);
  }

  putchar('\n');
}


