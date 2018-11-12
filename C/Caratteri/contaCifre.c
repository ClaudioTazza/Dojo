#include <stdio.h>

int main(){
  int c, spazi = 0, altri = 0;
  int numeri[10] = {0};

  while((c = getchar()) != EOF){
    switch(c){
      case '1':
        numeri[1]++;
      case '2':
        numeri[2]++;
      case '3':
        numeri[3]++;
      case '4':
        numeri[4]++;
      case '5': 
        numeri[5]++;
      case '6':
        numeri[6]++;
      case '7':
        numeri[7]++;
      case '8':
        numeri[8]++;
      case '9':
        numeri[9]++;
      case '0':
        numeri[0]++;
        break;

      case ' ':
        spazi++;
        break;

      default:
        altri++;
    }
        
  }

  printf("Quantita' di:\n"
         "1: %d\n"
         "2: %d\n"
         "3: %d\n"
         "4: %d\n"
         "5: %d\n"
         "6: %d\n"
         "7: %d\n"
         "8: %d\n"
         "9: %d\n"
         "0: %d\n"
         "Il numero di spazi: %d\n"
         "Il numero dei caratteri restanti: %d\n", 
         numeri[1], numeri[2], numeri[3], numeri[4], numeri[5], numeri[6],
         numeri[7], numeri[8], numeri[9], numeri[0], spazi, altri);

  return 0;
}
