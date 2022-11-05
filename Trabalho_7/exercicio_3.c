/* 3 Defina uma matriz de 4 linhas por 4 colunas e imprima a multiplicação de sua diagonal principal */

#include <stdio.h>

int main() {
    int tab[4][4];
    int mult = 1;

    for(int l = 0; l < 4; l++) {
        for(int c = 0; c < 4; c++) {
            tab[l][c] = c + l + 1 * 2 + 3;
            printf("%d ", tab[l][c]);
        }
        printf("\n");
    }

    printf("\n");
    
    for(int l = 0; l < 4; l++) {
        for(int c = 0; c < 4; c++) {
            if(l == c) {
            mult = mult * tab[l][c];
            }
        }
    }
    printf("%d", mult);
    
    return 0;
}