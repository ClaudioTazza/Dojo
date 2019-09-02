#include <stdio.h>

int potenza(int, int);

int main(){

  printf("%d\n", potenza(10, 3));

  return 0;
}

int potenza(int base, int pot){
  if(pot < 0){
    printf("Inseriti numero/i negativo/i");
    return -1;
  }

  if(pot == 1)
    return base; 
  else 
    return  base * potenza(base, pot-1);
}
