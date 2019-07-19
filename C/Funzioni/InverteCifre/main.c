#include <stdio.h>

int InvertiCifre(int );

int main(){
  int n = 0, reversed = 0;

  puts("Inverte Cifre\n\n");

  fputs("Inserisci un numero: ", stdout);
  scanf("%d", &n);

  reversed = InvertiCifre(n);

  printf("A cifre invertite: %d\n", reversed);

  return 0;
}


int InvertiCifre(int n){
  _Bool neg = 0;
  int reversed = 0;

  if(n < 0){
    neg = 1;
    n *= -1;
  }

  for(; n > 0 ; n /= 10){
    reversed *= 10;
    reversed += n % 10;
  }

  if(neg == 1)
    reversed *= -1;

  return reversed;
}

