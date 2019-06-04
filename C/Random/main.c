#include <stdio.h>
#include <stdlib.h> /* Per rand e srand */
#include <time.h> 

int main(){

  srand( time(NULL) );

  printf("a.");
  for(int i = 0; i < 5; i++)
    printf("%d ", 50 + rand() % 6);

  printf("\nb.");
  for(int i = 0; i < 5; i++)
    printf("%d ", 2  + rand() % 9);

  printf("\nc.");
  for(int i = 0; i < 5; i++)
    printf("%d ", 3  + rand() % 9);
   
  printf("\nd.");
  for(int i = 0; i < 5; i++)
    printf("%d ", 6  + rand() % 17);

  printf("\n\n");

  return 0;
}
