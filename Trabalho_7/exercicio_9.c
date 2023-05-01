#include <stdio.h>


typedef struct{
char nome[50];
float altura;

}alunos;
    int main(void) {
    alunos a[10];
    float soma = 0, media = 0;

    for(int i = 0; i < 10; i++){
    printf("Digite o nome do aluno: ");
        scanf("%s", a[i].nome);
    printf("Digite a altura do aluno: ");
        scanf("%f", &a[i].altura);
    printf("\n");
}
    for(int i = 0; i < 10; i++){
        if(a[i].altura <= 1.50){
            printf("Nome: %s\n\n", a[i].nome);
            printf("Altura: %f\n\n", a[i].altura);
}else{
    printf("Nao contem alunos com 1,50 ou menor!\n\n");
}
}
    for(int i = 0; i < 10; i++){
        if(a[i].altura > 1.50){
            printf("Nome: %s\n\n", a[i].nome);
            printf("Altura: %f\n\n", a[i].altura);
}else{
    printf("Nao contem alunos com mais de 1,50!\n\n");

}
}
    for(int i = 0; i < 10; i++){
        if((a[i].altura > 1.50) && (a[i].altura < 1.80)){
            printf("Nome: %s\n", a[i].nome);
            printf("Altura: %f\n\n", a[i].altura);
}else{
    printf("Nao contem alunos entre 1,50 e 1,80!\n\n");
}
}
    for(int i = 0; i < 10; i++){
        soma = soma + a[i].altura;
}
    media = soma / 10;

    for(int i = 0; i < 10; i++){
        if(a[i].altura > media){
            printf("Nome: %s\n", a[i].nome);
            printf("Altura: %f\n\n", a[i].altura);
}else{
    printf("Nao contem alunos acima da media de altura!\n\n");
}

}

return 0;

}