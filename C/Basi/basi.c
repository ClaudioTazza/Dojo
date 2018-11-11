#include <stdio.h>

int main(){
  int i, i2, backup_i;

  printf("N\t  Bin\t  Oct\t  Hex\n");

  /* Istruzioni per ogni riga */
  for(i=0; i < 10; i++){
    printf("%d\t", i);            /* Stampa il numero della riga*/
  
    backup_i= i;
   
    /* Inizio Stampa binario */
    for(i2 = 128; i2 > 0 ; i2/= 2){
      if(backup_i - i2 > -1){
        putchar('1');
        backup_i -= i2;
      } 
      else
        putchar('0');
    }
    /* Fine stampa binario */
  
    printf("   ");

    /* Inizio stampa ottale */
    backup_i = i;

    for(i2 = 64; i2 > 0; i2 /= 8){
      printf("%d", backup_i/i2);
      backup_i %= i2;
    } 

    /* Fine stampa ottale */ 

    printf("\n");
  }

  printf("\n\n");
  return 0;
}
