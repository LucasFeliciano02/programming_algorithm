/* fatorial menor pro maior */

#include <stdio.h>

int main() {

    int numero, fatorial = 1;
    
    for (numero = 1; numero <= 5; numero++) {
        fatorial = fatorial *  numero;
        
        printf("num: %d  fatorial: %d \n", numero, fatorial);
    }
    
    printf("Fatorial: %d", fatorial);
    
  return 0;
}