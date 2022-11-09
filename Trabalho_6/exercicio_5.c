/* 5 - Escreva um programa que contenha um vetor de 8 valores lidos do teclado. Vocêdeve garantir que os valores lidos sejam inteiros positivos. Em seguida, o programa deverá solicitar um número do teclado e verificar se esse número está contido ou não no vetor */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int popula() {
    int num;

    do
    {
    printf("Digite um número para o vetor: ");
    scanf("%d", &num);
    } while (num < 0);

    return num;
}

int main() {
    int vet1[8], num, contem=0;

    for (int i = 0; i < 8; i++)
    {
        vet1[i] = popula();
    }

    printf("Digite um número para verificar no vetor: ");
    scanf("%d", &num);

    for (int i = 0; i < 8; i++)
    {
        if (num == vet1[i])
        {
            printf("Contém no Vetor %d", i);
            contem = 1;
            break;
        } 
    }
    
    if (contem == 0)
    {
        printf("Não contém");
    }
    
    
    return 0;
}