#include <stdio.h>
#include <time.h>

int CrazyRandom();
void initCrazyRandom();

int main(){
  initCrazyRandom();

  puts("Crazy Random \n\n");

  puts("Estrae tre numeri pari:");
  for(int i = 0 ; i < 3; i++)
    printf("%d\n", CrazyRandom());

  puts("D'ora in avanti estrae solo numeri dispari:");
  for(int i = 0 ; i < 3; i++)
    printf("%d\n", CrazyRandom());


  return 0;
}

void initCrazyRandom(){
  srand(time(NULL));
}

int CrazyRandom(){
  static int counter = 0;

  counter++;
  if(counter > 3)
    return ( (rand() % 5) * 2) + 1;
    /* Numero casuale dispari da 1 a 9 */
  else
    return ((rand() % 5) + 1) * 2;
    /* Numero casuale pari da 2 a 10*/
}
