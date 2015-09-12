#include <stdio.h>

int main(){

  float valor = 0;
  printf("Digite o valor do iPhone 6S: ");
  scanf("%f", &valor);
  printf("O valor de cada parcela em 10x sem juros é: %.2f\n", valor / 10.0);

  return 0;

}
