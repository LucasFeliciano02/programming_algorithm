#include <stdlib.h>
#include <stdio.h>
#include <math.h>


typedef struct 
{
    char chave_pix[50];
    float valor_transacao;
} transacao;


void linha () {
    printf("-----------------\n");
}


int main () {
float saldo;


transacao transaction[5];

    printf("Digite o saldo da conta: ");
    scanf("%f", &saldo);

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a chave pix: ");
        scanf("%s", &transaction[i].chave_pix);

        printf("Digite o valor da transacao: ");
        scanf("%f", &transaction[i].valor_transacao);



        if (transaction[i].valor_transacao > saldo) {
            printf("\nERRO:\nO valor da transacao eh maior que o saldo disponivel-> \n");
            break;
            return 0;
        } else {
            saldo = saldo - transaction[i].valor_transacao;
        }

        printf("Saldo restante em conta: %.2f\n", saldo);
        linha();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Chave pix: %c | Valor enviado: %.2f\n", transaction[i].chave_pix, transaction[i].valor_transacao);
    }

return 0;
}