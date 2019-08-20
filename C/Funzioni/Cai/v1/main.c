#include <stdio.h>
#include "cai.h"

int main(){
  int num1 = 0, num2 = 0, answer = 0, correct_an;

  cai_init();

  while(1){
    num1 = cai_estrai_num();
    num2 = cai_estrai_num();

    do{
      printf("Quanto fa %d per %d\n", num1, num2);
      scanf("%d", &answer);

      correct_an = num1 * num2;

      if(answer != correct_an)
        cai_sbagliato();

    }while(answer != correct_an);

    cai_giusto();
  }

  return 0;
}
