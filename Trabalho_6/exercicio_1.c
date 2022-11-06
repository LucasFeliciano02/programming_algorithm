/* 1 - Escreva um programa que leia do teclado valores para dois vetores de 4 posiçõesde ponto flutuante, depois subtraia os dois vetores. Ao final da execução deverá serimpresso o resultado na tela */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float popula(int numb) {
    float num;

    printf("Digite um número para o vetor %d: ", numb);
    scanf("%f", &num);

    return num;
}

int main() {
    float vet1[4], vet2[4], vet3[4];

    for (int i = 0; i < 4; i++)
    {
        vet1[i] = popula(1);
    }

    for (int i = 0; i < 4; i++)
    {
        vet2[i] = popula(2);
    }

    for (int i = 0; i < 4; i++)
    {
        vet3[i] = vet1[i] - vet2[i];
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%.2f - %.2f = %.2f\n", vet1[i], vet2[i], vet3[i]);
    }
    
    return 0;
}