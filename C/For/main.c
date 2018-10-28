#include<stdio.h>

int main(){
  int i, n, selector = 1;
  double pi=4;
  
  printf("Approssimazione di Pi Greco\n"
		  "mediante la serie:\n\n"
		  "4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...\n\n"
		  "Quanti termini vuoi utilizzare? ");
  scanf("%d", &n);

  for(i=3; i < (n*2) + 3; i+=2){
    if(selector%2 == 1)
      pi -= 4./i;
    else
      pi += 4./i;

    selector += 1;
  }  

  printf("PI: %f\n", pi);

  return 0;
}
