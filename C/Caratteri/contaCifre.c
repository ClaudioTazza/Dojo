#include <stdio.h>

int main(){
  int c, cifre = 0, spaziature = 0, altri = 0;

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
        cifre++;
        break;

      case ' ':
      case '\t':
      case '\n':
        spaziature++;
        break;

      default:
        altri++;
    }
        
  }

  printf("Il numero delle cifre: %d\n"
         "Il numero di spaziature: %d\n"
         "Il numero dei caratteri restanti: %d\n", cifre, spaziature, altri);

  return 0;
}
