#include "cai.h"
#include "random.h"

static int errorCount = 0;
static int rightCount = 0;

void cai_init(){
  random_init();
}

void cai_sbagliato(){
  int num = random_between(0, 4);
  errorCount++;

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
  rightCount++;

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

void cai_statistics(){
  int perRispEsatte = (rightCount / (errorCount + rightCount)) * 100;
  if(perRispEsatte < 75)
    printf("Please ask your instructor for extra help\n");
}
