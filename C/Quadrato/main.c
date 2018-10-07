#include <stdio.h>

int main(){
  int lato = 0, i = 0, j = 0;
  printf("Inserisci il lato (min 1, max 20): ");
  scanf("%d", &lato);

  while(lato < 0){
    printf("Io un quadrato del genere non lo so disegnare.\n");
    scanf("%d", &lato);
  }
  while(i < lato){ 
    while(j < lato){
      printf("*");
      j++;
    }
    printf("\n");
    j = 0;
    i++;
  }

  return 0;
}
