#include <stdio.h>

int main(){
  int i, i2, temp_i;
  int ott3bit, ott2bit;

  printf("N\t  Bin\t  Oct\t  Hex\n");

  /* Istruzioni per ogni riga */
  for(i=0; i < 10; i++){
    printf("%d\t", i);            /* Stampa il numero della riga*/
  
    temp_i = i;
   
    /* Inizio Stampa binario */
    for(i2 = 128; i2 > 0 ; i2/= 2){
      if(temp_i - i2 > -1){
        putchar('1');
        temp_i -= i2;
      } 
      else
        putchar('0');
    }
    /* Fine stampa binario */
  
    printf("   ");

    /* Inizio stampa ottale */
    temp_i = i;
    ott3bit = 0;
    ott2bit = 0;

    while(temp_i - 64 > -1){
      ott3bit += 1;
      temp_i -= 64;
    }
    printf("%d", ott3bit);

    while(temp_i - 8 > -1){
      ott2bit += 1;
      temp_i -= 8;
    }
    printf("%d", ott2bit);
    printf("%d", temp_i);
    /* Fine stampa ottale */ 

    printf("\n");
  }

  printf("\n\n");
  return 0;
}
