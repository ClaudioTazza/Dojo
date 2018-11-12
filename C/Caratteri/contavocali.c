#include <stdio.h>

int main(){
  int conta = 0, c;

  while((c = getchar()) != EOF){
    switch(c){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u': 
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        conta++;
        break;
      
      default:
        ;
    }
        
  }

  printf("Le vocali presenti nel file sono %d\n\n", conta);

  return 0;
}
