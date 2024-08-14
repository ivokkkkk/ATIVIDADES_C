//1. Faça um programa que receba quatro números inteiros,
//calcule e mostre a soma desses números.
#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4;
  
  printf("Digite o primeiro valor: ");
  scanf("%d", &n1);

  printf("Digite o segundo valor: ");
  scanf("%d", &n2);

  printf("Digite o terceiro valor: ");
  scanf("%d", &n3);

  printf("Digite o quarto valor: ");
  scanf("%d", &n4);

  int soma = n1 + n2 + n3 + n4;

  printf("A soma dos quatro valores é: %d\n", soma);

  
  return 0;
}