#include <stdio.h>

int main(){
  int n = 0, conta = 0;
 
  do{
    printf("Inserisci il numero: ");
    scanf("%d", &n);
  }while(n < 0);

  do{
    if(n%10 == 7) conta++;
    n /= 10; 
  }while(n > 0);

  printf("Il numero 7 e' uscito %d volte\n", conta);

  return 0;
}
