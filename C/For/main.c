#include<stdio.h>

int main(){
  int a, b, c, d;
 
  printf("a. ");
  for(a=0; a < 8; a++){
    printf("%d, ", a); 
  }
  printf("%d", a);

  printf("\nb. ");
  for(b=3; b < 23; b+=5){
    printf("%d, ", b); 
  } 
  printf("%d", b);

  printf("\nc. ");
  for(c=20;  c > -10; c-=6){
    printf("%d, ", c); 
  } 
  printf("%d", c);

  printf("\nd. ");
  for(d=19; d < 51; d+=8){
    printf("%d, ", d); 
  } 
  printf("%d", d);

  printf("\n\n");

  return 0;
}
