#include <stdio.h>

int main(){
  char str[]= "Hello";
  int i;
  
  for(i=0; str[i] != '\0'; i++)
    printf("str[%d] = %c\n", i, str[i]);
 
  
  printf("\n\n");

  return 0;
}
