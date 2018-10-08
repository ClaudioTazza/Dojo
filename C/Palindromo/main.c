#include <stdio.h>
#include <math.h>

int main(){
  int n, ver2 = 0, i = 4, sentinella;

  do{
    printf("Inserisci un intero positivo di 5 cifre: ");
    scanf("%d", &n);
  }while(n < 10000 || n > 99999);

  sentinella = n;
  do{
    ver2 += (sentinella % 10) * pow(10, i);
    printf("Valore corrente di ver2: %d\n", ver2);
    sentinella /= 10;
    i--;
  }while(sentinella > 0);

  if(n == ver2)
    printf("E' un palindromo\n");
  else
    printf("NON e' un palindromo\n");

  return 0;
}
