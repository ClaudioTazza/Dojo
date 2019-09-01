#include <stdio.h>

int somma(int, int);

int main(){

  printf("%d\n", somma(54, 3));

  return 0;
}

int somma(int n1, int n2){
  if(n1 < 0 || n2 < 0){
    printf("Inseriti numero/i negativo/i");
    return -1;
  }

  if(n1 > 0)
    return 1 + somma(n1-1, n2);
  else 
    return n2; 

}
