/* 6 - Escreva um programa que leia uma string do teclado e a escreva na tela ao contrário(do final para o início) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    char plv[101];

    printf("Digite uma palavra: ");
    fgets(plv, 101, stdin);


    for(int i = strlen(plv) - 2; i >= 0; i--) 
    {
        printf("Elemento %d: %c \n", i, plv[i]);
    } 
    
}