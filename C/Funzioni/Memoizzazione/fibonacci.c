#include <stdio.h>
#include "fibonacci.h"

void fibonacci_helper(int n, int cache[]);

void fibonacci_helper(int n, int cache[]){
  if(n==0 || n==1){
    cache[n] = n;
  }
  else{
    if(cache[n-1] == 0)
      fibonacci_helper(n-1, cache);

    cache[n] = cache[n-1] + cache[n-2];
  }
}

int fibonacci(int n){

  static int vett[50] = { 0 };

  if(n > 50 || n < 1){
    printf("Numero non valido");
    return -1;
  }

  fibonacci_helper(n, vett);

  return vett[n-1];
}


