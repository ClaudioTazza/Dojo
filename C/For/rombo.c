#include<stdio.h>

int main(){
  int n, i, j, j2; 
  int nAsterischi, nSpazi;
  
  printf("Rombo\n\n");

  do{
    printf("Numero di righe (dispari 1 - 19) ");
    scanf("%d", &n);
  }while(n < 1 || n > 19 || n%2 == 0);

  nSpazi = n/2;  
  nAsterischi = 1;

  for(i=0; i < n; i++){
    for(j=0; j < nSpazi ; j++)  
      putchar(' ');

    for(j2=0; j2 < nAsterischi ; j2++)
      putchar('*');

    if(i < n/2){
      nSpazi--;
      nAsterischi+=2;
    }
    else{
      nSpazi++;
      nAsterischi-=2;
    }
    
    putchar('\n');
  }

  

  return 0;
}
