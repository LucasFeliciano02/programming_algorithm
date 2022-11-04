/* Crie uma matriz de 11 linhas e 11 colunas que contenha a tabuada dos números de 0 a 10 */

#include <stdio.h>

int main() {
    int tabela[11][11];
    
    int c, l;
    
    for(l = 0; l < 11; l++) {
        for(c = 0; c < 11; c++) {
            tabela[l][c] = l * c;
            
            printf("%d ", tabela[l][c]);
            
        }
        
        printf("\n");
    }
    
    return 0;
}