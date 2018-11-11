#include <stdio.h>

int main(){
  int i, w, backup_i;

  printf("N\t  Bin\t  Oct\t  Hex\n");

  /* Istruzioni per ogni riga */
  for(i=0; i < 20; i++){
    printf("%d\t", i);            /* Stampa il numero della riga*/
  
    backup_i = i;
   
    /* Inizio Stampa binario */
    for(w = 128; w > 0 ; w/= 2){
      printf("%d", i/w);
      i %= w;
    }
    /* Fine stampa binario */
  
    printf("   ");
    i = backup_i;

    /* Inizio stampa ottale */

    for(w = 64; w > 0; w /= 8){
      printf("%d", i/w);
      i %= w;
    } 

    /* Fine stampa ottale */ 
   
    printf("   ");
    i = backup_i;

    /* Inizio stampa esadecimale */
    for(w = 16; w > 0; w /= 16){
      switch(i/w){
        case 10:
          printf("A");
          break;
        case 11:
          printf("B");
          break;
        case 12:
          printf("C");
          break;
        case 13:
          printf("D");
          break;
        case 14:
          printf("E");
          break;
        case 15:
          printf("F");
          break;
        default:
          printf("%d", i/w);
      } 
      i %= w;
    }
    /* Fine stampa esadecimale */

    i = backup_i;

    printf("\n");
  }

  printf("\n\n");
  return 0;
}
