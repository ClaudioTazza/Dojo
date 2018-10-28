#include<stdio.h>

int main(){
  int a, a2;
  int b, b2;
  int c, c2, c3;
  int d, d2, d3; 


  for(a=0; a < 10; a++){
    for(a2=0; a2 <= a; a2++)  
      putchar('*');	
    putchar('\n');
  }

  putchar('\n');

  for(b=0; b < 10; b++){
    for(b2=9; b2 >= b; b2--)  
      putchar('*');	
    putchar('\n');
  }

  putchar('\n');

  for(c=0; c < 10; c++){
    for(c3=0; c3 < c; c3++)  
      putchar(' ');

    for(c2=9; c2 >= c; c2--)  
      putchar('*');	

    putchar('\n');
  } 

  putchar('\n');

  for(d=0; d < 10; d++){
    for(d3=0; d3 < (9-d); d3++)  
      putchar(' ');

    for(d2=0; d2 <= d; d2++)  
      putchar('*');	

    putchar('\n');
  } 
  return 0;
}
