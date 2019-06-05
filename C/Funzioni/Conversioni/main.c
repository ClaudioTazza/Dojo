#include <stdio.h>

void menu();
void converti_in_binario(int num);
void converti_in_ottale(int num);
void converti_in_esadecimale(int num);

int main(){
  int scelta = 0, decimale = 0;
  
  puts("Conversione da decimale a binario, ottale ed esadecimale\n");

  do{
    printf("Inserisci il numero da convertire (0-255): ");
    scanf("%d", &decimale);
  }while(decimale < 0 || decimale > 2555);

  putchar('\n');
  
  menu();

  putchar('\n');

  do{ 
    printf("Scelta: ");
    scanf("%d", &scelta);
  }while(scelta < 1 || scelta > 4);

  switch(scelta){
    case 1:
      printf("%d (10) ",decimale);

      converti_in_binario(decimale);
      puts(" (2)");

      break;

    case 2:
      printf("%d (10) ",decimale);

      converti_in_ottale(decimale);
      puts(" (8)");

      break;
    case 3:
      printf("%d (10) ",decimale);

      converti_in_esadecimale(decimale);
      puts(" (16)");


      break;
  } 

  return 0;
}

void menu(){
  puts("Scegli la base:");
  puts("1) Binario\n2) Ottale\n3) Esadecimale");
}

void converti_in_binario(int num){

  for(int bitVal = 128; bitVal >= 1; bitVal/=2){

    if(num >= bitVal){
      printf("1");
      num -= bitVal;
    }
    else
      printf("0");
  }
}

void converti_in_ottale(int num){

  for(int bitVal = 64; bitVal >= 1; bitVal/=8){

    if(num >= bitVal){
      printf("%d", num/bitVal);
      num %= bitVal;
    }
    else
      printf("0");
  }
}

void converti_in_esadecimale(int num){
  int digit;
  
  for(int bitVal = 16; bitVal >= 1; bitVal/=16){

    if(num >= bitVal){
      digit = num/bitVal;
      num %= bitVal;

      switch(digit){
        case 10:
	  putchar('A');
	  break;
	case 11:
	  putchar('B');
	  break;
        case 12:
	  putchar('C');
	  break;
        case 13:
	  putchar('D');
	  break;
        case 14:
	  putchar('E');
	  break;
        case 15:
	  putchar('F');
	  break;
        default:
	  printf("%d", digit);
      }
    }
    else
      printf("0");
  }

}
