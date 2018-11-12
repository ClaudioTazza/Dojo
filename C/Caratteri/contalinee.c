#include <stdio.h>

int main(){
  int c, conta = 0; 

  while( (c = getchar()) != EOF){
    if(c == '\n')
      conta++;
  }

  printf("Il numero di righe e' di %d\n\n", conta);

  return 0;
}
