//7. Faça um programa que calcule e mostre a área de
//um círculo. Sabe-se que: Área = p * R2.

#include <stdio.h>
#include <math.h>

int main() {
    float raio, area;
    const float PI = 3.14159; // Valor aproximado de p

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = PI * pow(raio, 2);

    printf("A área do círculo é: %.2f\n", area);

    return 0;
}
