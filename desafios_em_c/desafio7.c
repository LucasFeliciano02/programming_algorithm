#include <stdio.h>

/* Mostra os numeros de 1 a 100 */

int main()
{
    int soma = 0, contador = 0;
    
    
    while(contador < 100) {
        soma = soma + contador;
        contador++;
        printf("contador: %d  soma: %d \n", contador, soma);
    }

    return 0;
}