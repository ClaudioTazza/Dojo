#include <stdio.h>

void menu();
double area_quadrato(double lato);
double area_cerchio(double raggio);

int main(){
  int scelta = 0;
  double lato = 0., area_q = 0.;
  double raggio = 0., area_c = 0.;

  puts("Calcola l'area di figure geomentriche\n\n");

  menu();
  scanf("%d", &scelta);
  if(scelta < 1 || scelta > 2){
    puts("Scelta non valida");
    return 0;
  }

  puts("\n");

  switch(scelta){
    case 1:
      puts("Inserisci lato del quadrato");
      scanf("%lf",&lato);

      area_q = area_quadrato(lato);
      printf("Area quadrato = %lf\n", area_q);
      break;

    case 2:
      puts("Inserisci il raggio del cerchio");
      scanf("%lf",&raggio);

      area_c = area_cerchio(raggio);
      printf("Area cerchio= %lf\n", area_c);
      break;

    default:
      puts("Qualcosa e' andato storto");
  }



  return 0;
}

void menu(){
  fputs("Scegli la figura geometrica:\n1) Quadrato\n2) Cerchio\nScegli: ", stdout);
}

double area_quadrato(double lato){
    return lato * lato;
}

double area_cerchio(double raggio){
    return (raggio*raggio)*3.14;
}
