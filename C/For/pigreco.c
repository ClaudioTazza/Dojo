#include<stdio.h>

int main(){
  int i, n, divisore = 3;
  double pi=4;
  
  printf("Approssimazione di Pi Greco\n"
		  "mediante la serie:\n\n"
		  "4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...\n\n");
  
  do{
	  printf("Quanti termini vuoi utilizzare? ");
    scanf("%d", &n);
  }while(n < 1);

  for(i=0; i < n; i++){
      pi -= 4./divisore;
      divisore += 2;

      pi += 4./divisore;
      divisore += 2;

  }  

  printf("PI: %f\n", pi);

  return 0;
}
