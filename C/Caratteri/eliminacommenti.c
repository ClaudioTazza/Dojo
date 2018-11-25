#include <stdio.h>

/* Stato          Input            Output           Next
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * NORM          c == '/'            -             SLASH
 * NORM          c == '"'            c             STRINGA
 * NORM           else               c               = 
 *
 * STRINGA       c != '"'            c               = 
 * STRINGA        else               c             NORM  
 *
 * SLASH         c != '*'         '/', c           NORM 
 * SLASH          else               -             COMMENTO
 *
 * COMMENTO      c != '*'            -               - 
 * COMMENTO       else               -             ASTERISCO
 *
 * ASTERISCO     c != '/'            -             COMMENTO
 * ASTERISCO      else               -             NORM 
 */

int main(){
  int c;
  int NORM = 0, SLASH = 1, COMMENTO = 2, ASTERISCO =  3, STRINGA = 4;
  int STATO = NORM;

  while( (c = getchar()) != EOF){
    if(STATO == NORM){
      if(c == '/')
        STATO = SLASH;
      else if(c == '"'){
        STATO = STRINGA;
        putchar(c);
      }
      else
        putchar(c);
    }
   
    else if(STATO == STRINGA){
      if(c != '"')
        putchar(c);
      else{
        putchar(c);
        STATO = NORM;
      }
    }

    else if(STATO == SLASH){
      if(c != '*'){
        putchar('/');
        putchar(c);

        STATO = NORM;
      }else STATO = COMMENTO;
    }

    else if(STATO == COMMENTO){
      if(c == '*') STATO = ASTERISCO;
    }

    else if(STATO == ASTERISCO){
      if(c != '/')
        STATO = COMMENTO;
      else
        STATO = NORM;
    }
  }

  return 0;
}



