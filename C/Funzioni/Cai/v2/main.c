#include <stdio.h>
#include "cai.h"


int main(){
  int num1 = 0, num2 = 0, answer = 0, correct_an = 0;
  int count = 0;

  int contaErrori = 0;

  cai_init();

  while(1){
    num1 = cai_estrai_num();
    num2 = cai_estrai_num();

    do{
      printf("Quanto fa %d per %d (CTRL+C per uscire) ", num1, num2);
      scanf("%d", &answer);
      count++;

      correct_an = num1 * num2;

      if(answer != correct_an)
        contaErrori++;

      if (count == 10)
        if( ((float)contaErrori / count) * 100 >= 75)
          puts("Please ask your instructor for extra help.");

    }while(answer != correct_an);

    cai_giusto();

  }

  return 0;
}
