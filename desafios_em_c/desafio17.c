// leia três valores do teclado e diga qual
// é maior
// função para leitura de valores e para
// análise de qual é maior
// COM FUNÇÕES


#include <stdio.h>

int leNumero() {
  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  return numero;
}

int compara(int a, int b, int c) {
  int maior;

  maior = a;
  if (b > maior)
    maior = b;
  if (c > maior)
    maior = c;

  return maior;
}

int main() {

  int a, b, c, maior;

  a = leNumero();
  b = leNumero();
  c = leNumero();

  maior = compara(a, b, c);

  printf("Maior numero: %d", maior);

  return 0;
}