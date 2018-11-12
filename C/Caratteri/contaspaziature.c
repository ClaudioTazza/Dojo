#include <stdio.h>

int main(){
  int conta, c;

  while((c = getchar()) != EOF){
    if(c == ' ')
      conta++;
  }

  printf("Il numero di spazi e' di %d\n\n", conta);

  return 0;
}
