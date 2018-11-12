#include <stdio.h>

int main(){
  int conta = 0;

  while(getchar() != EOF){
    conta++;
  }

  printf("Ci sono %d caratteri\n\n", conta);

  return 0;
}
