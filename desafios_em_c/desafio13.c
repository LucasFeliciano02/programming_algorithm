/* Aparece os numeros seguintes doinicio ao fim */

#include <stdio.h>

int main() {
    
    int a, b, i;
    char decisao = 'S';
    
    while ((decisao == 'S') || (decisao == 's')) {
        do{
            printf("Digite un número: ");
            scanf("%d", &a);
            
            printf("Digite outro número: ");
            scanf("%d", &b);
        
           } while (a >= b); 
            
        
            for (i = a; i <= b; i++) { /* for (Inicialização; condição; incremento/decremento) */
                printf("%d ", i);
           }
           
        printf("\nDeseha continuar? [S/N]: ");
        scanf(" %c", &decisao);
        }
        
    return 0;
}