//12. Pedro comprou um saco de ra��o com peso em
//quilos. Ele possui dois gatos, para os quais fornece a
//quantidade de ra��o em gramas. A quantidade di�ria
//de ra��o fornecida para cada gato � sempre a mesma.
//Fa�a um programa que receba o peso do saco de ra��o
//e a quantidade de ra��o fornecida para cada gato,
//calcule e mostre quanto restar� de ra��o no saco ap�s
//cinco dias.

#include <stdio.h>

int main() {
    float peso_saco_kg, racao_diaria_g, racao_total_g;
    float racao_restante_g;
    const int NUM_GATOS = 2;
    const int DIAS = 5;

    printf("Digite o peso do saco de ra��o (em quilos): ");
    scanf("%f", &peso_saco_kg);

    printf("Digite a quantidade di�ria de ra��o fornecida para cada gato (em gramas): ");
    scanf("%f", &racao_diaria_g);

    racao_total_g = peso_saco_kg * 1000;
    float racao_consumida_g = DIAS * NUM_GATOS * racao_diaria_g;
    racao_restante_g = racao_total_g - racao_consumida_g;

    printf("Quantidade de ra��o restante ap�s 5 dias: %.2f gramas\n", racao_restante_g);

    return 0;
}
