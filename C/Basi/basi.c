#include <stdio.h>
#include <math.h>

int main(){
  int i, i2, temp_i;
  int bin[8] ;

  printf("N\t  Bin\t  Oct\t  Hex\n");

  /* Istruzioni per ogni riga */
  for(i=0; i < 256; i++){
    printf("%d\t", i);            /* Stampa il numero della riga*/
  
    temp_i = i;

    for(i2 = 0; i2 < 8; i2++){
      bin[i2] = temp_i % 2;
      temp_i /= 2;
     }/* Inserisce il valore binario nel vettore */
     for(i2 = 7; i2 >= 0; i2--){ 
       printf("%d", bin[i2]);
     }/* Stampa il numero binario */

    printf("\n");
  }

  printf("\n\n");
  return 0;
}
