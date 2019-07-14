#include <stdio.h>
#include <math.h>

double ipotenusa(double lato1, double lato2);

int main(){

  puts("Calcola l'ipotenusa di triangoli rettangoli\n");
  puts("Triangolo\tLato 1\tLato2\tIpotenusa");

  printf("        1\t3.0\t4.0\t%lf\n", ipotenusa(3., 4.));
  printf("        1\t5.0\t12.0\t%lf\n", ipotenusa(5., 12.));
  printf("        1\t6.0\t15.0\t%lf\n", ipotenusa(6., 15.));

  return 0;
}


double ipotenusa(double lato1, double lato2){
  return sqrt(lato1*lato1 + lato2*lato2);
}
