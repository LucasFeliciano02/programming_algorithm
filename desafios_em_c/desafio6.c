#include <stdio.h>


/Do while media notas/


int main() {
    
    float media, notaA, notaB;
    
    do {
        
        printf("Digite a nota A: ");
        scanf("%f", &notaA);
        
    } while ((notaA < 0.0) || (notaA > 10.0));
    
    do {
    
        printf("Digite a nota B: ");
        scanf("%f", &notaB);
        
    } while ((notaB < 0.0) || (notaB > 10.0));
    
    media = (notaA + notaB) / 2;
    printf("A média é: %.1f", media);
    
    return 0; 
}