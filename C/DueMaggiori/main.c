#include <stdio.h>

int main(){
  int numero, maggiore = 0, maggiore2 = 0, i = 1, temp;

  printf("Inserisci 10 numeri, trovero' per te i 2 numeri piu' grandi\n");

  printf("%d: ", i);
  scanf("%d", &maggiore); /* Poniamo che il primo numero sia il piu' grande*/


  while(i < 10){
    printf("%d: ", i+1);
    scanf("%d", &numero);

    if(numero > maggiore2){
      maggiore2 = numero;
    
      if(maggiore2 > maggiore){
        temp = maggiore2;
        maggiore2 = maggiore;
        maggiore = temp;
      }
    }    

    i += 1;
  }/*Confrontiamo il primo con il secondo e troviamo il maggiore. Continua fino al decimo*/

  printf("Il maggiore e' %d\n", maggiore);
  printf("Il secondo maggiore e' %d\n", maggiore2);

  return 0;
}
