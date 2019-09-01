#include <stdio.h>

void reverse(int);

int main(){

  reverse(1234567890);
  putchar('\n');

  return 0;
}

void reverse(int num){
    if(num == 0)
      ;
    else{
      printf("%d", num%10);
      reverse(num/10);
    }
}

