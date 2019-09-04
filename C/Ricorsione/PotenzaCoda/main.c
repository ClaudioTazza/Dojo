#include <stdio.h>

int potenza_helper(int, int, int);
int potenza(int, int);

int main(){
  printf("%d\n", potenza(10, 3));

  return 0;
}

int potenza_helper(int n1, int n2, int ris){
  if(n2 == 0)
    return ris;
  else{
    ris *= n1;
    return potenza_helper(n1, n2-1, ris);
  } 
}

int potenza(int n1, int n2){
  potenza_helper(n1, n2, 1);
}
