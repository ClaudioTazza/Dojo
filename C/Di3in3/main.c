#include <stdio.h>

int main(){
  int i = 0, num = 0;

  printf("Conta di 3in3\n\n");

  printf("Numero di partenza: ");
  scanf("%d", &num);

  while(i < 5){
    printf("%d\n", num);
    
    num += 3;
    i += 1;
  }

  return 0;
}
  
