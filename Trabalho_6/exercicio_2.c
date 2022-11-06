/* 2 - Implemente um programa que exiba os conteúdos dos itens de índice par de um vetor */


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

    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("Vetor %d: %d\n", i, vet[i]);
        }
        
    }
  
    return 0;
}