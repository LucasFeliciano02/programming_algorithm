#include <stdio.h>
#include <math.h>


typedef struct{
    char nome[50];
    float peso;
    float altura;
    float IMC;
}funcaox;

int main() {
    funcaox x[5];
    for(int i = 0; i < 5; i++){
    printf("Digite o nome: ");
        scanf("%s", x[i].nome);
    printf("Digite peso: ");
        scanf("%f", &x[i].peso);
    printf("Digite altura: ");
        scanf("%f", &x[i].altura);

    x[i].IMC = x[i].peso / (x[i].altura * x[i].altura);
}

    for(int i = 0; i < 5; i++){

    printf("Nome: %s\n", x[i].nome);
    printf("Peso: %.2f\n", x[i].peso);
    printf("Altura: %.2f\n", x[i].altura);
    printf("IMC: %.2f\n", x[i].IMC);
}
return 0;
}