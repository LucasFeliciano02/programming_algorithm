/* fatorial maior pro menor !*/

#include <stdio.h>

int main() {

    int numero, fatorial = 1;
    
    for (numero = 5; numero >= 1; numero--) {
        fatorial = fatorial *  numero;
        
        printf("num: %d  fatorial: %d \n", numero, fatorial);
    }
    
    printf("Fatorial: %d", fatorial);
    
  return 0;
}