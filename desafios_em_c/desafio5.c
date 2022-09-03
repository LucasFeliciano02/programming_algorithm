#include <stdio.h>


/* Do while media */


int main() {
   
    float numero, resposta, soma, media;
    char continua;
    int contador;
    
    contador = 0;
    soma = 0.0;
    
    do {
        printf("Digite um numero: ");
        scanf("%f", &numero);
        
        resposta = numero * 3;
        printf("Resultado: %f \n", resposta);
        
        soma = soma + resposta;
        
        printf("Deseja continuar?: ");
        scanf(" %c", &continua);
        
        contador = contador + 1;
        
    } while ((continua == 'c') || (continua == 'C'));
    
    
    media = soma / contador;
    printf("A media entre os resultados e: %.2f", media);
    
    return 0; 
}