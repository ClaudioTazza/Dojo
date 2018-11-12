#include <stdio.h>

int main()
{
    /* per un singolo carattere
     * meglio usare il tipo 'int'*/
    int c;

    printf("Inserisci un carattere: ");
    c = getchar();
    printf("Inserisci un carattere: ");
    c = getchar();
    printf("Inserisci un carattere: ");
    c = getchar();



    printf("Hai inserito il carattere: %c\n", c);

    return 0;
}
