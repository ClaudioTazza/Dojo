#include <stdio.h>

int main(){
  int numeri[10], maggiore = 0, i = 0;

  printf("Inserisci 10 numeri, trovero' per te quello piu' grande\n");

  while(i < 10){
    printf("%d: ", i+1);
    scanf("%d", &numeri[i]);

    if( !(i == 0) ){
      if(numeri[i] > maggiore)
        maggiore = numeri[i];
    }
    else 
      maggiore = numeri[i];

    i += 1;
  }/*Esegue il ciclo 10 volte*/

  printf("Il maggiore e' %d\n", maggiore);

  return 0;
}
