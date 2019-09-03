#include <stdio.h>

void hanoi(int, int, int, int);
/*Numero dischi da spostare ; Punto Iniziale; Punto Finale; Punto di appoggio*/

int main(){
  puts("Spostamento di 3 dischi dal paletto 1 al paletto 3"); 

  hanoi(3, 1, 3, 2);
}

void hanoi(int num_d, int P_In, int P_Fin, int P_temp){

  if(num_d == 1)
    printf("%d --> %d\n", P_In, P_Fin); 

  else{
    hanoi(num_d - 1, P_In, P_temp, P_Fin);
    hanoi(1, P_In, P_Fin, P_temp);
    hanoi(num_d - 1, P_temp, P_Fin, P_In);
  }
}
