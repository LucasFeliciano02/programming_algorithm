/* Aparece os numeros seguintes doinicio ao fim COM FUNÇÃO */

#include <stdio.h>


int lerValor () {
    int valor;
    
    printf("Digite un número: ");
    scanf("%d", &valor);
    
    return valor;
}

int main() {
    
    int a, b, i;
    char decisao = 'S';
    
    while ((decisao == 'S') || (decisao == 's')) {
        do{
            a = lerValor();
            b = lerValor();
           } while (a >= b); 
        
            for (i = a; i <= b; i++) { /* for (Inicialização; condição; incremento/decremento) */
                printf("%d ", i);
           }
           
        printf("\nDeseha continuar? [S/N]: ");
        scanf(" %c", &decisao);
        }
        
    return 0;
}