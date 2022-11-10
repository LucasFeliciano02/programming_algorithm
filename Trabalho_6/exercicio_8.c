/* 8 - Escreva um programa que receba do teclado uma string de até 200 caracteres e umdeterminado caractere, e devolva a localização da última ocorrência desse caractere na
string. Se o caractere não aparecer na string, o programa deve exibir uma mensageminformando isso */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int ocorrencia=0;
    char palavra[201], caracter[2];

    printf("Digite uma string: ");
    fgets(palavra, 201, stdin);

    printf("Digite um caracter: ");
    fgets(caracter, 2, stdin);


    for(int i = 0; palavra[i] != '\0'; i++) 
    {
        if (palavra[i] == caracter[0])
        {
            ocorrencia = i;
        }
    }

    if (ocorrencia == 0)
    {
        printf("O caracter não aparece na string");
    } else
    {
        printf("O caracter %c aparece na posição: %d", palavra, ocorrencia);
    }
    
    


    return 0;
}