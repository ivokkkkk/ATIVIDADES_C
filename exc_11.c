//salário a receber, seguindo estas regras:
//a) a hora trabalhada vale a metade do salário mínimo.
//b) o salário bruto equivale ao número de horas
//trabalhadas multiplicado pelo valor da hora trabalhada.
//c) o imposto equivale a 3% do salário bruto.
//d) o salário a receber equivale ao salário bruto menos o
//imposto.

#include <stdio.h>

int main() {
    float horas_trabalhadas, salario_minimo;
    float valor_hora, salario_bruto, imposto, salario_a_receber;

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);

    valor_hora = salario_minimo / 2;

    salario_bruto = horas_trabalhadas * valor_hora;

    imposto = salario_bruto * 0.03;

    salario_a_receber = salario_bruto - imposto;

    printf("Valor da hora trabalhada: %.2f\n", valor_hora);
    printf("Salário bruto: %.2f\n", salario_bruto);
    printf("Imposto (3%%): %.2f\n", imposto);
    printf("Salário a receber: %.2f\n", salario_a_receber);

    return 0;
}
