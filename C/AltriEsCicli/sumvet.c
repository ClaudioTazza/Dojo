#include <stdio.h>

int main(){
  int numbers[10], i;
  int somma = 0;
  double media;
  
  printf("Somma e Media\n\n\n"
         "Inserisci dieci vallori interi:\n");
  for(i=0; i < 10; i++){
    printf("? ");
    scanf("%d", &numbers[i]);
  }

  printf("\n\nDati iniziali:\n");
  for(i=0; i < 10; i++){
    printf("numbers[%d] = %d\n", i, numbers[i]);

    somma += numbers[i];
  }
  putchar('\n');

  media = somma / 10.;


  printf("Somma : %d\n"
         "Media : %.2f\n", somma, media);

  return 0;
}
