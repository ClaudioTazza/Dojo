#include <stdio.h>

int main(){
  int num = 0;

  FILE* f = fopen("myfile.txt", "r");
  /* f punta ad un file in modalita' lettura */

  fscanf(f, "%d%", &num);
  /* Legge un valore intero da f e lo inserisce dentro num*/

  printf("ho letto il valore %d\n", num);

  fclose(f);

  return 0;
}

