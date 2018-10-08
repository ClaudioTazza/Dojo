#include <stdio.h>
#include <math.h>

int main(){
  int n, crit = 0, original, i = 0;
  int c1, c2, c3, c4; 

  printf("Inserisci un numero di quattro cifre: ");
  scanf("%d", &n);

  original = n;

  while(n > 0){
    crit += (((n % 10) + 7) % 10) * pow(10, i) ;
    n /= 10;
    i++;
  }

  c4 = crit%10;
  crit /= 10;
  c3 = crit%10;
  crit /= 10; 
  c2 = crit%10;
  crit /= 10;
  c1 = crit%10;
  crit /= 10;

  crit = c3*1000 + c4*100 + c1*10 + c2;

  printf("Numero da crittografare: %d\n", original);
  printf("Numero crittografato: %d\n", crit);


  return 0;
}
