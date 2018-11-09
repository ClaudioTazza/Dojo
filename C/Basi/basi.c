#include <stdio.h>

int main(){
  int i, i2, temp_i;

  printf("N\t  Bin\t  Oct\t  Hex\n");

  /* Istruzioni per ogni riga */
  for(i=0; i < 10; i++){
    printf("%d\t", i);            /* Stampa il numero della riga*/
  
    temp_i = i;
    
    for(i2 = 128; i2 > 0 ; i2/= 2){
      if(temp_i - i2 > -1){
        putchar('1');
        temp_i -= i2;
      } 
      else
        putchar('0');
    }/* Calcola e stampa il valore binario della riga*/

    printf("\n");
  }

  printf("\n\n");
  return 0;
}
