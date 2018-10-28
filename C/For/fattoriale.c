#include<stdio.h>

int main(){
  int i, fatt=1; 

  printf("1!\t2!\t3!\t4!\t5!\n");

  for(i=1; i < 6; i++){
    fatt *= i;
    printf("%d\t", fatt);
  }
  
  printf("\n\n");

  return 0;
}
