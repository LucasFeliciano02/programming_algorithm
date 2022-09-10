/* Ler n = 0 do teclado até que n seja 0. Para cada n lido,
imprimir n asteriscos */

#include <stdio.h>

int main() {

    int num = 1, i;
    
    while (num != 0) {
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &num);
        
        for (i = 1;  i <= num; i++) {
            printf("*");
        }
    }
  
  return 0;
}