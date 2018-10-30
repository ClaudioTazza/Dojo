#include <stdio.h>
#include <math.h>

int main(){
  double myexp= 1., x, myx;
  int i, fatt = 1;

  printf("Inserire la x: ");
  scanf("%lf", &x);
  
  myx = x; 

  for(i=1; i <= 10; i++){
    myexp += myx/fatt;
  
    fatt *= i+1;
    myx *= x;
  }
 
  printf("exp con 10 termini: %f\n", myexp);
  printf("exp con la libreria math.h %f\n", exp(x));

  return 0;
}

