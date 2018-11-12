#include <stdio.h>

int main(){
  int conta, c;

  while((c = getchar()) != EOF){
    switch(c){ 
      case '\n':
      case '\t':
      case ' ':
        conta++;
        break;
      default:
        ;
    }
  }

  printf("Il numero di spazi e' di %d\n\n", conta);

  return 0;
}
