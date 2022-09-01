#include <stdio.h>

/* https://www.onlinegdb.com/online_c_compiler */


int main(){
   
    int numero, resultado, contador;
   
    
    contador = 0;

    while (contador < 5) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        resultado = numero * 3;
        printf("Resultado: %d \n", resultado);
        
        contador += 1;
        
        
    }  
   
  return 0; 
}