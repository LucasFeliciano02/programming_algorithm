/* 4 - Escreva um programa que crie um vetor de números inteiros de 6 posições e povoeesse vetor com valores lidos do teclado. O programa deverá aceitar somente númerospares entre 1 e 20. Ao final, imprima todos os valores salvos no vetor, além da média dosvalores, o menor e o maior valor */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int popula() {
    int num;

    do
    {
    printf("Digite um número para o vetor: ");
    scanf("%d", &num);
    } while (num > 20 || num < 1 || num % 2 != 0);

    return num;
}

int main() {
    int vet1[6], maior, menor, soma=0;
    float media;

    for (int i = 0; i < 6; i++)
    {
        vet1[i] = popula();
    }

    for (int i = 0; i < 6; i++)
    {
        printf("Vetor %d: %d\n", i, vet1[i]);
    }
    

    maior = vet1[0];
    menor = vet1[0];

    for (int i = 0; i < 6; i++)
    {
        soma += vet1[i];

        if (vet1[i] < menor)
        {
            menor = vet1[i];
        }

        if (vet1[i] > maior)
        {
            maior = vet1[i];
        }
        
    }

    media = soma / 6;

    printf("Média: %.2f\n", media);
    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);
    
    return 0;
}