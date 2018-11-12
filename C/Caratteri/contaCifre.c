#include <stdio.h>

int main(){
  char c;
  int conta = 0;

  while((c = getchar()) != EOF){
    switch(c){
      case '1':
      case '2':
      case '3':
      case '4':
      case '5': 
      case '6':
      case '7':
      case '8':
      case '9':
      case '0':
        conta++;
        break;
      
      default:
        ;
    }
        
  }

  printf("Il numero delle cifre nel file sono %d\n\n", conta);

  return 0;
}
