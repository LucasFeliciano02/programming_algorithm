#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int prod_A(int a) {
    float total;

    total = a * 10;

    total = total - (total * 0.1);
    return total;
}
int prod_B(int b) {
    float total;

    total = b * 20;

    total = total - (total * 0.1);
    return total;
}
float prod_AB(int a, int b) {
    float total;

    total = (a * 10) + (b * 20);
    printf("%f\n", total);

    total = total - (total * 0.15);
    printf("%f\n", total);

    return total;
}
int main() {
    int a=0, b=0, produto;
    float total;

    do
    {
        printf("Digite 1 para produto A ou 2 para produto B [outro número p/ parar]: ");
        scanf("%d", &produto);

        switch (produto)
        {
        case 1:
            a++;
            break;
    
        case 2:
            b++;
            break;
        }
    
    } while (produto == 1 || produto == 2);

    if (a >= 1 && b >= 1)
    {
        total = prod_AB(a, b);
    } else
    {
        if (a >= 1)
        {
            total = prod_A(a);
        } else if (b >= 1)
        {
            total = prod_B(b);
        } else
        {
            printf("Nenhum produto adquirido");
        }
    }

    printf("Sacola:\nItens A:%d\nItens B:%d\nTotal:%f", a, b, total);

    return 0;
}