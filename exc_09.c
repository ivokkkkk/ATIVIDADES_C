//9. Sabe-se que:
//pé = 12 polegadas
//1 jarda = 3 pés
//1 milha = 1,760 jarda
//Faça um programa que receba uma medida em pés, faça
//as conversões a seguir e mostre os resultados.
//a) polegadas;
//b) jardas;
//c) milhas.

#include <stdio.h>

int main() {
    float pes;
    const float PE_PARA_POLEGADAS = 12; // 1 pé = 12 polegadas
    const float PE_PARA_JARDAS = 1.0 / 3; // 1 jarda = 3 pés, então 1 pé = 1/3 jarda
    const float JARDAS_PARA_MILHAS = 1.0 / 1760; // 1 milha = 1760 jardas

    printf("Digite a medida em pés: ");
    scanf("%f", &pes);

    float polegadas = pes * PE_PARA_POLEGADAS;
    float jardas = pes * PE_PARA_JARDAS;
    float milhas = jardas * JARDAS_PARA_MILHAS;

    printf("Medida em polegadas: %.2f\n", polegadas);
    printf("Medida em jardas: %.2f\n", jardas);
    printf("Medida em milhas: %.6f\n", milhas);

    return 0;
}
