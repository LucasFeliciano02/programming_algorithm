#include <stdio.h>


int main() {
    float salarios[3][6], soma[3] = {0, 0, 0}, media = 0;

int qtde_func = 0;
    for (int l = 0; l < 3; l++) {
    for (int f = 0; f < 6; f++) {
        printf("Funcionario %d: ", f + 1);
        scanf("%f", &salarios[l][f]);
}
    printf("\n");
}
    for (int l = 0; l < 3; l++) {
    for (int f = 0; f < 6; f++) {
    printf("Funcionario %d: R$ %.2f\n", f + 1, salarios[l][f]);
}
    printf("\n");
}
    for (int l = 0; l < 3; l++) {
    for (int f = 0; f < 6; f++) {
    soma[l] = soma[l] + salarios[l][f];
}
    printf("Loja %d: %f\n", l + 1, soma[l]);
}
    for (int f = 0; f < 6; f++) {
    if (salarios[0][f] > 2000.00) {
    qtde_func++;
}
};
    if (qtde_func > 0) {
        printf("%d funcionarios da 1 loja ganham mais de R$2.000,00.\n\n", qtde_func);
} else {
    printf("Na primeira loja ninguem ganha mais que 2mil\n\n");
}
    media = soma[1] / 6;
    printf("Segunda media salarial : %.2f", media);

return 0;
}
