#include <stdio.h>

int main(){
  char c;
  int conta = 0;

  while((c = getchar()) != EOF){
    conta++;
  }

  printf("Ci sono %d caratteri\n\n", conta);

  return 0;
}
