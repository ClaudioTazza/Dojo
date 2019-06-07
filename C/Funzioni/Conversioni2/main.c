#include <stdio.h>

void converti(int num, int base);

int main(){
  int decimale = 0, base = 0;

  fputs("Decimale: ", stdout);
  scanf("%d", &decimale);

  fputs("Base: ", stdout);
  scanf("%d", &base);

  converti(decimale, base);
  puts("\n");

  return 0;
}

void converti(int num, int base){

  int n = base;
  int digit = 0;

  if(base < 2 || base > 36){
    puts("Base non appropriata");
    return;
  }
  
  while(n < 255){
    n *= base;
  }
  n /= base;
  
  for(int bitVal = n; bitVal >= 1; bitVal/=base){

    if(num >= bitVal){
      digit = num/bitVal;
      num %= bitVal;

      if(digit < 9)
        printf("%d", digit);
      else
	printf("%c", (digit - 10) + 'A'); 
    }
    else
      printf("0");
  }
  
}
