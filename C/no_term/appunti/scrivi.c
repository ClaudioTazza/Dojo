#include <stdio.h>

int main(){
  FILE *f = fopen("sum.dat", "w");
  /* fopen ritorna un puntatore al file */
  /* 'w' sta per scrittura, creando il file se non esiste*/

  fprintf(f, "Hello, World!\n");
  /* Scrive nel file f le parole tra virgolette */

  fclose(f); /* Chiude un il file 'f' */

  return 0;
}

