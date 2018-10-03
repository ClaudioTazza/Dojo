#include <stdio.h>

int main(){
  int numero, maggiore = 0, maggiore2 = 0, i = 0, temp;

  printf("Inserisci 10 numeri, trovero' per te i 2 numeri piu' grandi\n");

  printf("%d: ", i + 1);
  scanf("%d", &maggiore); /* Poniamo che il primo numero sia il piu' grande*/
  i++;

  printf("%d: ", i + 1);
  scanf("%d", &maggiore2);
  i++;

  if(maggiore2 > maggiore){
    temp = maggiore;
    maggiore = maggiore2;
    maggiore2 = maggiore;
  }  
  
  while(i < 10){
    printf("%d: ", i+1);
    scanf("%d", &numero);

    if(numero >  maggiore2){
      if(numero > maggiore){ 
        maggiore2 = maggiore;
        maggiore = numero;
      } 
      else maggiore2 = numero;
    }    
    i += 1;
  }
  printf("Il maggiore e' %d\n", maggiore);
  printf("Il secondo maggiore e' %d\n", maggiore2);

  return 0;
}
