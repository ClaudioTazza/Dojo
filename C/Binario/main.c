#include <stdio.h>
#include <math.h>

int main(){
  int n, dec = 0, conta = 0, bin, isbin, temp = 0;
 
  do{
    printf("Inserisci un numero binario: ");
    scanf("%d", &n);
 
    bin = n;
    isbin = 1;

    while(bin > 0){
      temp = bin % 10;
      if(temp != 0 && temp!= 1){
        isbin = 0;
        break;
      }
      bin /= 10;
    }

  }while(!isbin);
  
  bin = n;

  while(n > 0){
    dec += (n % 10) * pow(2, conta);
    n /= 10;
    conta++; 
  }

  printf("%d(2) = %d(10)\n",bin, dec);


  return 0;
}
