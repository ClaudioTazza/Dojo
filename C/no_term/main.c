#include <stdio.h>

int main(){
  int addNum = 0, num = 0;
  FILE *f = fopen("sum.dat", "r");

  if(f){
    printf("Lettura dal file sum.dat in corso ...");
    fscanf(f, "%d", &num);
  }

  printf("Valore corrente: %d\n\n", num);

  printf("Inserisci il valore da sommare: ");
  scanf("%d", &addNum);

  if(f) fclose(f);
  f = fopen("sum.dat", "w");

  fprintf(f, "%d", num + addNum);
  printf("\nNuovo valore: %d\n"
	"Salvataggio nel file sum.dat in conrso...\n", num + addNum);

  fclose(f);
  return 0;
}
