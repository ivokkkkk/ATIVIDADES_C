//5. Fa�a um programa que receba o sal�rio de um
//funcion�rio e o percentual de aumento, calcule e
//mostre o valor do aumento e o novo sal�rio.

#include <stdio.h>

int main() {
    float salario, percentual_aumento, valor_aumento, novo_salario;

    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento (sem o s�mbolo %): ");
    scanf("%f", &percentual_aumento);

    valor_aumento = salario * (percentual_aumento / 100);
    novo_salario = salario + valor_aumento;

    printf("O valor do aumento �: %.2f\n", valor_aumento);
    printf("O novo sal�rio �: %.2f\n", novo_salario);

return 0;
}
