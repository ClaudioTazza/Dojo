#include <stdio.h>
#include <math.h>

int main(){
  int i, num, fatt=1;

  printf("Inserire un numero (positivo) per calcolarne il fattoriale\n\n ");

  do{
    printf("num: ");
    scanf("%d", &num);
  }while(fatt < 0);


  for(i=1; i <= num; i++){
    fatt *= i;
  }

  printf("Il fattoriale di 'num' e' %d\n\n", fatt);

  printf("\n\n");

  return 0;
}
