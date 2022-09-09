/* ler valores ate que o produto desses valores ultrapasse 100 */

#include <stdio.h>

int main() {

  int num = 0, multiplicacao = 1;

  do {
    printf("\n Digite um numero: ");
    scanf("%d", &num);

    multiplicacao = multiplicacao * num;
    printf("num: %d   multiplicacao: %d \n", num, multiplicacao);
  } while (multiplicacao <= 100);

  return 0;
}