#include <stdio.h>

int main(){
  int numero, maggiore = 0, i = 0;

  printf("Inserisci 10 numeri, trovero' per te quello piu' grande\n");

  while(i < 10){
    printf("%d: ", i+1);
    scanf("%d", &numero);

    if( !(i == 0) ){
      if(numero > maggiore)
        maggiore = numero;
    }
    else 
      maggiore = numero;

    i += 1;
  }/*Esegue il ciclo 10 volte*/

  printf("Il maggiore e' %d\n", maggiore);

  return 0;
}
