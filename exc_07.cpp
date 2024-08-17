//7. Fa�a um programa que calcule e mostre a �rea de
//um c�rculo. Sabe-se que: �rea = p * R2.

#include <stdio.h>
#include <math.h>

int main() {
    float raio, area;
    const float PI = 3.14159; // Valor aproximado de p

    printf("Digite o raio do c�rculo: ");
    scanf("%f", &raio);

    area = PI * pow(raio, 2);

    printf("A �rea do c�rculo �: %.2f\n", area);

    return 0;
}
