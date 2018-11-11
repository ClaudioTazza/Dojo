#include <stdio.h>

int main(){
  int i, w, backup_i;

  printf("N\t  Bin\t  Oct\t  Hex\n");

  /* Istruzioni per ogni riga */
  for(i=0; i < 10; i++){
    printf("%d\t", i);            /* Stampa il numero della riga*/
  
    backup_i= i;
   
    /* Inizio Stampa binario */
    for(w = 128; w > 0 ; w/= 2){
      printf("%d", backup_i/w);
      backup_i %= w;
    }
    /* Fine stampa binario */
  
    printf("   ");
    backup_i = i;
    
    /* Inizio stampa ottale */

    for(w = 64; w > 0; w /= 8){
      printf("%d", backup_i/w);
      backup_i %= w;
    } 

    /* Fine stampa ottale */ 
   
    printf("   ");
    backup_i = i;

    /* Inizio stampa esadecimale */
    /* Fine stampa esadecimale */

    printf("\n");
  }

  printf("\n\n");
  return 0;
}
