//9. Sabe-se que:
//p� = 12 polegadas
//1 jarda = 3 p�s
//1 milha = 1,760 jarda
//Fa�a um programa que receba uma medida em p�s, fa�a
//as convers�es a seguir e mostre os resultados.
//a) polegadas;
//b) jardas;
//c) milhas.

#include <stdio.h>

int main() {
    float pes;
    const float PE_PARA_POLEGADAS = 12; // 1 p� = 12 polegadas
    const float PE_PARA_JARDAS = 1.0 / 3; // 1 jarda = 3 p�s, ent�o 1 p� = 1/3 jarda
    const float JARDAS_PARA_MILHAS = 1.0 / 1760; // 1 milha = 1760 jardas

    printf("Digite a medida em p�s: ");
    scanf("%f", &pes);

    float polegadas = pes * PE_PARA_POLEGADAS;
    float jardas = pes * PE_PARA_JARDAS;
    float milhas = jardas * JARDAS_PARA_MILHAS;

    printf("Medida em polegadas: %.2f\n", polegadas);
    printf("Medida em jardas: %.2f\n", jardas);
    printf("Medida em milhas: %.6f\n", milhas);

    return 0;
}
