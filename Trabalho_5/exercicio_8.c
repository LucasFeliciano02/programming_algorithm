#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void produtos() {
    printf("======================\n");
    printf("Lanches\nCoxinha[1] - R$ 5,50\nPastel[2] - R$ 6,50\nEmpada[3] - R$ 4,50\nCafé[4] - R$ 3,50\nSuco de Laranja[5] - R$ 8,50\n");
    printf("======================\n");
}

void subtotal(int cox, int past, int empad, int cafe, int suco) {

    printf("Coxinha R$ 5,50 x %d: %.2f\nPastel R$ 6,50 x %d: %.2f\nEmpada R$ 4,50 x %d: %.2f\nCafé R$ 3,50 x %d: %.2f\nSuco de Laranja R$ 8,50 x %d: %.2f\n", cox, cox*5.5, past, past*6.5, empad, empad*4.5, cafe, cafe*3.5, suco, suco*8.5);
    printf("======================\n");
}

float total_final(int coxinha, int pastel, int empada, int cafe, int suco) {
    float total=0;

    total = (coxinha*5.5) + (pastel*6.5) + (empada*4.5) + (cafe*3.5) + (suco*8.5);

    return total;
}

int main() {
    int coxinha=0, pastel=0, empada=0, cafe=0, suco=0, produto;
    float total=0;

    produtos();
    
    do
    {
        printf("Faça seu pedido [Opções de 1 a 5] ou outro número p/ sair: ");
        scanf("%d", &produto);

        switch (produto)
        {
        case 1:
            coxinha++;
            break;
        
        case 2:
            pastel++;
            break;

        case 3:
            empada++;
            break;

        case 4:
            cafe++;
            break;

        case 5:
            suco++;
            break;
        }

        subtotal(coxinha, pastel, empada, cafe, suco);

    } while (produto >= 1 && produto <= 5);

    total = total_final(coxinha, pastel, empada, cafe, suco);

    printf("Total dos pedidos: %.2f", total);

    return 0;
}