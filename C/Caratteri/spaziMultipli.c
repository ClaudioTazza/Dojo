#include <stdio.h>

int main(){

  int NORM = 0 ,SPAZIO= 1, c; 
  int stato = NORM;

  while((c = getchar()) != EOF){
   
    if(stato == NORM){
      if(c != ' ')
        putchar(c);
      else{
        stato = SPAZIO;
        putchar(' ');
      }
    }
    
    else{ 
      if(c != ' '){
        stato = NORM; 
        putchar(c);
      } 
    }
  }

  return 0;
}
