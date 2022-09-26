* Leia três valores do teclado e imprima o maior valor dentre os três.
Escreva uma função para leitura dos valores do teclado e uma função para decidir
qual dos números é maior */


#include <stdio.h>

int main() {
    
    int a, b, c, maior;
    
    printf("Digite um número: ");
    scanf("%d", &a);
    
    printf("Digite um número: ");
    scanf("%d", &b); 
    
    printf("Digite um número: ");
    scanf("%d", &c);
    
    maior = a;
        if (b > maior)
            maior = b;
        if (c > maior)
            maior = c;
    
        printf("Maior numero: %d", maior);
    
    return 0;
}