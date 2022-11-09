/* 7 - Escreva um programa que leia uma string do teclado (com tamanho máximo de 200 caracteres) e conte quantas ocorrências de cada vogal existem nessa string */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int a=0, e=0, i=0, o=0, u=0;
    char plv[201], letra;

    printf("Digite uma string: ");
    fgets(plv, 201, stdin);


    for(int j = 0; plv[j] != '\0'; j++) 
    {   
        letra = plv[j];

        if (letra == 'a' || letra == 'A')
        {
            a++;
        } else
        {
            if (letra == 'e' ||  letra == 'E')
            {
                e++;
            } else if (letra == 'i' || letra == 'I')
            {
                i++;
            }   else if (letra == 'o' || letra == 'O')
            {
                o++;
            } else if (letra == 'u' || letra == 'U')
            {
                u++;
            }
        }
    }

    printf("A: %d\nE: %d\nI: %d\nO: %d\nU: %d", a, e, i, o, u);
    
    return 0;
}