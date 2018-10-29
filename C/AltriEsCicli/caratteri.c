#include <stdio.h>

int main(){
  char c=' ', str[]= "Hello";
  int i;
  
  for(i=0; c != '\0'; i++){
    printf("str[%d] = %c\n", i, str[i]);
    c = str[i+1];
  }
  
  printf("\n\n");

  return 0;
}
