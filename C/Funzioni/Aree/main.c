#include <stdio.h>

double area_quadrato(double lato);
double area_cerchio(double raggio);

int main(){
  int lato = 0, area_q = 0;
  int raggio = 0, area_c = 0;

  fputs("Inserisci lato del quadrato\n", stdout);
  scanf("%d",&lato);

  fputs("Inserisci il raggio del cerchio\n", stdout);
  scanf("%d",&raggio);


  area_q = area_quadrato(lato);
  area_c = area_cerchio(raggio);

  printf("Area quadrato = %d\n", area_q);
  printf("Area cerchio= %d\n", area_c);

  return 0;
}

double area_quadrato(double lato){
    return lato * lato;
}

double area_cerchio(double raggio){
    return (raggio*raggio)*3.14;
}
