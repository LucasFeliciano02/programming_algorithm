#include <stdio.h>

typedef struct{
    char data[10];
    char casa[50];
    char visitante[50];
    int gol_mand;
    int gol_visit;
} brasileirao;

int main() {
    brasileirao b[5];
for(int i = 0; i < 5; i++){
    printf("Data do jogo: ");
        scanf("%s", &b[i].data);
    printf("Digite o time da casa: ");
        scanf("%s", b[i].casa);
    printf("Digite o time visitante: ");
        scanf("%s", b[i].visitante);
    printf("Quantidade de gols (time da casa): ");
        scanf("%d", &b[i].gol_mand);
    printf("Quantidade de gols do visitante: ");
        scanf("%d", &b[i].gol_visit);
    printf("\n");
}
    for(int i = 0; i < 5; i++){
        printf("Data : %s\n", b[i].data);
        printf("Mandante: %s\n", b[i].casa);
        printf("Visitante: %s\n", b[i].visitante);
        printf("Gols Mandante: %d\n", b[i].gol_casa);
        printf("Gols Visitante: %d\n", b[i].gol_visit);
    if(b[i].gol_casa > b[i].gol_visit){
        printf("Time %s foi o vencedor!\n", b[i].casa);
}else if(b[i].gol_casa < b[i].gol_visit){
    printf("Time %s foi o vencedor!\n", b[i].visitante);
}else{
    printf("Empatou!\n");
}
    printf("\n");
}


return 0;
}