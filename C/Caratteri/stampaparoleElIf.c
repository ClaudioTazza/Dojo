#include <stdio.h>

/* Stato        Input           Output         Next
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * NORM    c > 32 && c < 127       c           PAROLA
 * NORM         else               -             =
 *
 * PAROLA  c > 32 && c < 127       c             =
 * PAROLA       else               \n           NORM
*/

int main(){
  int c;

  int NORM = 0;
  int PAROLA = 1;
  int STATO = NORM;

  while(( c=getchar() ) != EOF){
    if(STATO == NORM){
      if(c > 32 && c < 127){
        STATO = PAROLA;
        putchar(c);
      } 
    } 

    else if(STATO == PAROLA){
      if( c > 32 && c < 127 )
        putchar(c);
       
      else{
        STATO = NORM;
        putchar('\n');
      }
    }
  }

    return 0;
}




