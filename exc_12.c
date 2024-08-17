//12. Pedro comprou um saco de ração com peso em
//quilos. Ele possui dois gatos, para os quais fornece a
//quantidade de ração em gramas. A quantidade diária
//de ração fornecida para cada gato é sempre a mesma.
//Faça um programa que receba o peso do saco de ração
//e a quantidade de ração fornecida para cada gato,
//calcule e mostre quanto restará de ração no saco após
//cinco dias.

#include <stdio.h>

int main() {
    float peso_saco_kg, racao_diaria_g, racao_total_g;
    float racao_restante_g;
    const int NUM_GATOS = 2;
    const int DIAS = 5;

    printf("Digite o peso do saco de ração (em quilos): ");
    scanf("%f", &peso_saco_kg);

    printf("Digite a quantidade diária de ração fornecida para cada gato (em gramas): ");
    scanf("%f", &racao_diaria_g);

    racao_total_g = peso_saco_kg * 1000;
    float racao_consumida_g = DIAS * NUM_GATOS * racao_diaria_g;
    racao_restante_g = racao_total_g - racao_consumida_g;

    printf("Quantidade de ração restante após 5 dias: %.2f gramas\n", racao_restante_g);

    return 0;
}
