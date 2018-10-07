#include <stdio.h>

int main(){
  int lato = 0, i = 0, j = 0;
  printf("Inserisci il lato (min 1, max 20): ");
  scanf("%d", &lato);

  if(lato > 0){
    while(i < lato){ 
      while(j < lato){
        printf("*");
        j++;
      }
      printf("\n");
      j = 0;
      i++;
    }
  }
  else{
    printf("Io un quadrato del genere non lo so disegnare.\n");
  }

  return 0;
}
