#include <stdio.h>


int main(){
   
    int numero, resultado, soma;
    char continua;  // Tipo char se usa aspas simples
     
    continua = 'c';
    soma = 0;
    
    while ((continua == 'C') || (continua == 'c')) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        resultado = numero * 3;
        printf("Resultado: %d \n", resultado);
        
        soma = soma + resultado;
        
        printf("Digite 'c' para continuar ou 's' para sair: ");
        scanf(" %c", &continua);  // Tem q ter espaço por ser char
    }  
   
    printf("Soma: %d \n", soma);
    
   
    return 0; 
}