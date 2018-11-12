#include <stdio.h>

int main(){
  int numero, maggiore = 0, i = 1;

  printf("Inserisci 10 numeri, trovero' per te quello piu' grande\n");

  printf("%d: ", i);
  scanf("%d", &maggiore); /* Poniamo che il primo numero sia il piu' grande*/


  while(i < 10){
    printf("%d: ", i+1);
    scanf("%d", &numero);

    if(numero > maggiore){
      maggiore = numero;
    }

    i += 1;
  }/*Confrontiamo il primo con il secondo e troviamo il maggiore. 
     Continua fino al decimo*/

  printf("Il maggiore e' %d\n", maggiore);

  return 0;
}
