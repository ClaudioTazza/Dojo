#include <stdio.h>

int main(){
  int c, spazi = 0, altri = 0, i;
  int numeri[10];

  /* Inizializzo il vettore */
  for(i = 0; i < 10; i++){
    numeri[i] = 0;
  }

  while((c = getchar()) != EOF){
    switch(c){
      case 1: 
      case 2: 
      case 3: 
      case 4: 
      case 5: 
      case 6: 
      case 7: 
      case 8: 
      case 9:
      case 0:
        numeri[c]++;
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
