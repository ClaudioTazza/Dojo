#include <stdio.h>

int main(){
  double e = 1., ePrec=0;
  int i, fatt = 1;

  for(i=1; i <= 10; i++){
    e += 1./fatt;
    fatt *= i+1;
  }
 
  printf("Numero di nepero con 10 termini: %f\n", e);

  e = 1.;
  fatt = 1;

  for(i=1; e > ePrec; i++){
    ePrec = e + 0.001;

    e += 1./fatt;
    fatt *= i+1;
    
  }

  printf("Numero di nepero con %d termini: %f\n", i, e); 

  return 0;
}

