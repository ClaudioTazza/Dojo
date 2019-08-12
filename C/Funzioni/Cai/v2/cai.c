#include "cai.h"
#include "random.h"


void cai_init(){
  random_init();
}

void cai_sbagliato(){
  int num = random_between(0, 4);

  switch(num){
    case 0:
      puts("No. Please try again.");
      break;
    case 1:
      puts("Wrong. Try once more.");
      break;
    case 2:
      puts("Don't give up!");
      break;
    case 3:
      puts("No. Keep trying.");
      break;
  }

}

void cai_giusto(){
  int num = random_between(0, 4);

  switch(num){
    case 0:
      puts("Very Good!");
      break;
    case 1:
      puts("Excellent!");
      break;
    case 2:
      puts("Nice work!");
      break;
    case 3:
      puts("Keep up the good work!");
      break;
  }
}

int cai_estrai_num(){
  return random_between(1, 10);
}

