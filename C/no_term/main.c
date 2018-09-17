#include <stdio.h>

int main(){
  int addNum = 0, num = 0;
  FILE *f = fopen("sum.dat", "r");

  printf("Lettura dal file sum.dat in corso ...");
  fscanf(f, "%d", &num);

  printf("Valore corrente: %d\n\n", num);

  printf("Inserisci il valore da sommare: ");
  scanf("%d", &addNum);

  fclose(f);
  f = fopen("sum.dat", "w");

  fprintf(f, "%d", num + addNum);

  fclose(f);
  return 0;
}
