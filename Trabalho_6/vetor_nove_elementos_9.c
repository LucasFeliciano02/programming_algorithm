/* 
9. Seja um vetor de inteiros de nove elementos. Escreva um programa que realize aseguinte sequência de ações, na ordem indicada:

a. preenchimento do vetor por leitura de valores positivos;
b. impressão dos elementos do vetor em uma linha, usando dois espaços embranco para separar os valores de cada elemento;
c. rotação dos elementos do vetor, com o deslocamento de todos os valoresdos elementos para a posição seguinte, exceto o último valor, que deve sercolocado na posição do primeiro elemento;
d. repetição do item b;
e. soma do índice de cada elemento ao conteúdo da posição correspondente;
f. repetição do item b;
g. leitura de um valor inteiro e apresentação do número de ocorrências dessevalor no vetor.
*/



#include <stdio.h>

int main() {
    
int vet[9], aux = 0, i, n, cont = 0;
    
    
    for (i = 0; i < 9; i++) {
        printf("Digite um numero int positivo: ");
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 9; i++) {
        printf("%d ", vet[i]);
        
        aux = vet[8];
    }
    for (i = 7; i >= 0; i--) {
        vet[i + 1] = vet[i];
    }
    vet[0] = aux;
    
    printf("\n");
        
    for (i = 0; i < 9; i++)
        printf("%d  ", vet[i]);
        
   for (i = 0; i < 9; i++)
        vet[i] = vet[i] + i;
    
    printf("\n");
    
    for(i = 0; i < 9; i++)
        printf("%d  ", vet[i]);
        
    printf("\nDigite o número que será verificado: ");
    scanf("%d", &n);