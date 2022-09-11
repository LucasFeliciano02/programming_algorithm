/* Ler n = 0 do teclado até que n seja 0. Para cada n lido,
imprimir n asteriscos com condicao para numeros negativos*/

#include <stdio.h>

int main() {

    int num = 1, i;
    
    while (num != 0) {
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &num);
        
        if(num > 0) {
            for (i = 1;  i <= num; i++) {
                printf("*");
            }
        } else {
            printf("Erro! Digite numeros positivos!");
        }
    }
    
  return 0;
}