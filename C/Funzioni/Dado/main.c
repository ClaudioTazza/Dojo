#include <stdio.h>
#include "dado.h"

void printStars(int num);

int main(){
  int num[6] = { 0 };

  dado_init();

  for(int i = 0; i < 100; i++){
    switch( dado_roll() ){
      case 1:
        num[0]++;
        break;
      case 2:
        num[1]++;
        break;
      case 3:
        num[2]++;
        break;
      case 4:
        num[3]++;
        break;
      case 5:
        num[4]++;
        break;
      case 6:
        num[5]++;
        break;
    }
  }

  for(int i = 0; i < 6; i++){

    printf("#%d)\t[%d]  ", i+1, num[i]);
    printStars(num[i]);

    puts("");
  }
  return 0;
}

void printStars(int num){
  for(int i = 0; i < num; i++)
    printf("*");
}
