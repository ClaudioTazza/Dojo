#include <stdio.h>

/* Tabella stati
 * Stato         Input         Output   NuovoStato
 * =================================================
 * NORM    c > 32 && c < 127     NULL     PAROLA 
 * NORM          else            NULL       = 
 *
 * PAROLA  c > 32 && c < 127     NULL       =
 * PAROLA        else            NULL      NORM 
*/ 
int main(){
  int c;
  int contaCar = 0, contaRig = 0, contaPar = 0;

  int NORM = 0;
  int PAROLA = 1;
  int STATO = NORM;

  while(( c=getchar() ) != EOF){
    if(STATO == NORM){
      if(c > 32 && c < 127) 
        STATO = PAROLA;
    } 

    else if(STATO == PAROLA){
      if( !(c > 32 && c < 127) ){
        STATO = NORM;
        contaPar++;
      } 
    }
      
    if(c == '\n') contaRig++;
    contaCar++;
    
    putchar(c);
  }

  printf("Le parole sono: %d\n"
         "Le righe sono:%d \n"
         "I caratteri sono: %d\n", contaPar, contaRig, contaCar);

  return 0;
}





