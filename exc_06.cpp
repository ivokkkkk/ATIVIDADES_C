//6. Fa�a um programa que calcule e mostre a �rea de
//um tri�ngulo. Sabe-se que: �rea = (base * altura)/2.

#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base do tri�ngulo: ");
    scanf("%f", &base);

    printf("Digite a altura do tri�ngulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A �rea do tri�ngulo �: %.2f\n", area);

    return 0;
}
