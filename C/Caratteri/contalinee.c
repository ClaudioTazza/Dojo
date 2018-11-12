#include <stdio.h>

int main(){
  int conta = 0;
  char c;

  while( (c = getchar()) != EOF){
    if(c == '\n')
      conta++;
  }

  printf("Il numero di righe e' di %d\n\n", conta);

  return 0;
}
