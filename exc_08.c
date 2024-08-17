//8. Faça um programa que receba um número positivo e
//maior que zero, calcule e mostre:
//a) o número digitado ao quadrado;
//b) o número digitado ao cubo;
//c) a raiz quadrada do número digitado;
//d) a raiz cúbica do número digitado.

#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um número positivo e maior que zero: ");
    scanf("%f", &numero);

    // Verifica se o número é positivo e maior que zero
    if (numero <= 0) {
        printf("O número deve ser positivo e maior que zero.\n");
        return 1;
    }

    float quadrado = pow(numero, 2);
    float cubo = pow(numero, 3);
    float raiz_quadrada = sqrt(numero);
    float raiz_cubica = cbrt(numero);

    printf("O número ao quadrado é: %.2f\n", quadrado);
    printf("O número ao cubo é: %.2f\n", cubo);
    printf("A raiz quadrada do número é: %.2f\n", raiz_quadrada);
    printf("A raiz cúbica do número é: %.2f\n", raiz_cubica);

    return 0;
}
