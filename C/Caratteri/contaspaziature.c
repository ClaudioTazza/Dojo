#include <stdio.h>

int main(){
  int spazi = 0, tabulazioni = 0, newline = 0, c;

  while((c = getchar()) != EOF){
    switch(c){ 
      case '\n':
        newline++;
        break;

      case '\t':
        tabulazioni++;
        break;

      case ' ':
        spazi++;
        break;

      default:
        ;
    }
  }

  printf("Il numero di spazi e' di %d\n"
         "Il numero di tabulazioni e' di %d\n"
         "Il numero di newline e' di %d\n", spazi, tabulazioni, newline);

  return 0;
}
