#include <stdio.h>

int main(){
  int lato = 0, i = 0, j = 0;
  printf("Inserisci il lato (min 1, max 20): ");

  do{
    if(lato < 0) printf("No.\n");
    scanf("%d", &lato);
  }while(lato < 0 || lato > 20);

  while(i < lato){ 
    while(j < lato){
      if(i == 0 || i == (lato-1) || j == 0 || j == (lato - 1))
        printf("*");
      else
        printf(" ");
      j++;
    }
    printf("\n");
    j = 0;
    i++;
  }

  return 0;
}
