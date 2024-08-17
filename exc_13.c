//13. Cada degrau de uma escada tem X de altura. Fa�a
//um programa que receba essa altura e a altura que o
//usu�rio deseja alcan�ar subindo a escada, calcule e
//mostre quantos degraus ele dever� subir para atingir
//seu objetivo, sem se preocupar com a altura do
//usu�rio. Todas as medidas fornecidas devem estar em metros. 

#include <stdio.h>
#include <math.h>

int main() {
    float altura_degrau, altura_desejada;
    int num_degraus;

    printf("Digite a altura de cada degrau (em metros): ");
    scanf("%f", &altura_degrau);

    printf("Digite a altura que deseja alcan�ar (em metros): ");
    scanf("%f", &altura_desejada);

    num_degraus = ceil(altura_desejada / altura_degrau);

    printf("N�mero de degraus necess�rios: %d\n", num_degraus);

    return 0;
}
