#include <stdio.h>
#include "dado.h"

void printStars(int num);

int main(){
  int num[6] = { 0 };
  int roll_val = 0;

  dado_init();

  for(int i = 0; i < 100; i++){
    roll_val = dado_roll();
    num[roll_val - 1]++;
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
    putchar('*');
}
