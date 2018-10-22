#include <stdio.h>
#include <math.h>

int main(){
  int n, crit = 0, original;
  int c1, c2, c3, c4; 

  printf("Inserisci un numero di quattro cifre: ");
  scanf("%d", &n);

  original = n;

  
  c4 = ((n%10) + 7) %10; /*Modifica la quarta cifra*/
  n /= 10;
  c3 = ((n%10) + 7) %10; /*Modifica la terza cifra*/
  n /= 10;
  c2 = ((n%10) + 7) %10; /*Modifica la terza cifra*/
  n /= 10;
  c1 = ((n%10) + 7) %10; /*Modifica la terza cifra*/
  n /= 10;

  crit = c3*1000 + c4*100 + c1*10 + c2;

  printf("Numero da crittografare: %d\n", original);
  printf("Numero crittografato: %d\n", crit);


  return 0;
}
