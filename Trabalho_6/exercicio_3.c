/* 3 - Escreva um programa que apresente os dados de um vetor na ordem inversa emque eles foram inseridos */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main() {
    int i, vet[10];

    srand(time(NULL));
  
    for (i = 0; i < 10; i++)
    {
        vet[i] = rand() % 100;
    }

    for (i = 9; i >= 0; i--)
    {
        printf("Vetor %d: %d\n", i, vet[i]);
    }
  
    return 0;
}