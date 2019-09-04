#include <stdio.h>

int somma_helper(int, int, int);
int somma(int, int);

int main(){
  printf("%d\n", somma_helper(54, 3, 0));

  return 0;
}

int somma_helper(int n1, int n2, int ris){

  if(n1 == 0 && n2 == 0)
    return ris; 

  else{
    ris += 1;

    if(n1 != 0)
      somma_helper(n1-1, n2, ris);
    else
      somma_helper(0 , n2-1, ris);
  }
}

int somma(int n1, int n2){
  if(n1 < 0 || n2 < 0){
    printf("Inseriti numero/i negativo/i");
    return -1;
  }

  somma_helper(n1, n2, 0);
}
