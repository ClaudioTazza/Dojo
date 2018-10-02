#include <stdio.h>

int main(){
  int i = 1, j = 1;

  while(i <= 10){                   /*Esegue 10 volte*/

    while(j <= 10){
      printf("%3d  ", j*i);
      j += 1; 
    }      
    j = 1;

    printf("\n");                    
    i += 1;
  }

  return 0;
}
