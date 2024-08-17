//8. Fa�a um programa que receba um n�mero positivo e
//maior que zero, calcule e mostre:
//a) o n�mero digitado ao quadrado;
//b) o n�mero digitado ao cubo;
//c) a raiz quadrada do n�mero digitado;
//d) a raiz c�bica do n�mero digitado.

#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um n�mero positivo e maior que zero: ");
    scanf("%f", &numero);

    // Verifica se o n�mero � positivo e maior que zero
    if (numero <= 0) {
        printf("O n�mero deve ser positivo e maior que zero.\n");
        return 1;
    }

    float quadrado = pow(numero, 2);
    float cubo = pow(numero, 3);
    float raiz_quadrada = sqrt(numero);
    float raiz_cubica = cbrt(numero);

    printf("O n�mero ao quadrado �: %.2f\n", quadrado);
    printf("O n�mero ao cubo �: %.2f\n", cubo);
    printf("A raiz quadrada do n�mero �: %.2f\n", raiz_quadrada);
    printf("A raiz c�bica do n�mero �: %.2f\n", raiz_cubica);

    return 0;
}
