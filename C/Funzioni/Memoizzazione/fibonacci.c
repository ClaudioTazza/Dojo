#include <stdio.h>
#include "fibonacci.h"

void fibonacci_helper(int n, int cache[]);

void fibonacci_helper(int n, int cache[]){
  if(n==0 || n==1){
    cache[n] = n;
  }
  else{
    cache[n] = cache[n-1] + cache[n-2];
  }
}

int fibonacci(int n){

  int vett[50] = { 0 };

  for(int i = 0; i < n + 1; i++)
    fibonacci_helper(i, vett);

  return vett[n];
}

