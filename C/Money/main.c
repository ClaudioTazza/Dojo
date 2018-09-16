#include <stdio.h>

int main(){
  int Money;

  printf("Money\nDetermina il numero minimo di banconote.\n\n");

  printf("Importo (dollari): ");
  scanf("%d", &Money);

  printf("\nbiglietti da $20: %d\n", Money/20);
  Money %= 20;
  printf("biglietti da $10: %d\n", Money/10);
  Money %= 10;
  printf("biglietti da $5: %d\n", Money/5);
  Money %= 5;
  printf("biglietti da $1: %d\n", Money);

  return 0;
}
