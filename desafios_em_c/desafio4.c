/* Do while */

int main() {
   
    int numero, resposta;
    char continua;
    
    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        resposta = numero * 3;
        
        printf("Resultado: %d \n", resposta);
        
        printf("Deseja continuar?: ");
        scanf(" %c", &continua);
        
    } while ((continua == 'c') || (continua == 'C'));
    
    
    
    return 0; 
}