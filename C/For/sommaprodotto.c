#include<stdio.h>

int main(){
  int i, j, somma = 0, prodotto = 1;

  for(i=0; i < 30; i+=2){
    somma += i;
  }
    
  for(j=1; j < 15; j+=2){
    prodotto *= j;
  }

  printf("Il prodotto e' %d\n", prodotto);
  printf("La somma e' %d\n", somma);

  return 0;
}
