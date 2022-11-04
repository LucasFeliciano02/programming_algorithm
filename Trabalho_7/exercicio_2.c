/* 2 Defina uma matriz com 3 linhas e 5 colunas e imprima o somatório dos elementos de sua última coluna */

#include <stdio.h>

int main() {
    int tab[3][5], soma = 0;


    for(int l = 0; l < 3; l++) {
        for(int c = 0; c < 5; c++) {
            
            tab[l][c] = c + 1 + 5;
        }
    }
    
    for(int l = 0; l < 3; l++) {
    soma = soma + tab[l][4];
    }
    
    printf("%d", soma);
    
    return 0;
}