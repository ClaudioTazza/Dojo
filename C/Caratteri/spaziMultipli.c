#include <stdio.h>

int main(){

  int NORM = 0 ,SPAZIO= 1, c; 
  int stato = NORM;

  while((c = getchar()) != EOF){
   
    if(stato == NORM){
      if(c != ' ')
        putchar(c);
      else{
        putchar(' ');
        stato = SPAZIO;
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
