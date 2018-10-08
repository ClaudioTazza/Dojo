#include <stdio.h>

int main(){
  double A = 0., C = 0., p = 3.14159, r = 0.;

  do{
    printf("Inserisci il raggio (non negativo): ");
    scanf("%lf", &r);
  }while(r < 0);

  A = p * r * r;
  C = 2*p * r; 

  printf("La circonferenza e' : %lf\nLa superfice e'     : %lf\n", C, A);
          
  return 0;
}
