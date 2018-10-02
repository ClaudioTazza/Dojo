#include <stdio.h>

int main(){
  int conto = 0;

  printf("Inserisci il numero da dove vuoi cominciare: ");
  scanf("%d", &conto);

  if(conto < 0) printf("Non so contare partendo da qui :S");

  while(conto != 0){
    printf("%d\n", conto);
    conto -= 1;
  }

  printf("Lanciato!!!!\n");
  return 0;
}
