//4. Fa�a um programa que receba o sal�rio de um
//funcion�rio, calcule e mostre o novo sal�rio,
//sabendo-se que este sofreu um aumento de 25%.

#include <stdio.h>

int main() {
    float salario, novo_salario;

    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%f", &salario);

    novo_salario = salario * 1.25;

    printf("O novo sal�rio com aumento de 25%% �: %.2f\n", novo_salario);

    return 0;
}
