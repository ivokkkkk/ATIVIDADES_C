//10. O custo ao consumidor de um carro novo é a soma do
//preço de fábrica com o percentual de lucro do distribuidor e
//dos impostos aplicados ao preço de fábrica.
//Faça um programa que receba o preço de fábrica de um
//veículo, o percentual de lucro do distribuidor e o percentual
//de impostos, calcule e mostre:
//a) o valor correspondente ao lucro do distribuidor;
//b) o valor correspondente aos impostos;
//c) o preço final do veículo.

#include <stdio.h>

int main() {
    float preco_fabrica, percentual_lucro, percentual_impostos;
    float valor_lucro, valor_impostos, preco_final;

    printf("Digite o preço de fábrica do veículo: ");
    scanf("%f", &preco_fabrica);

    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f", &percentual_lucro);

    printf("Digite o percentual de impostos: ");
    scanf("%f", &percentual_impostos);

    valor_lucro = preco_fabrica * (percentual_lucro / 100);
    valor_impostos = preco_fabrica * (percentual_impostos / 100);
    preco_final = preco_fabrica + valor_lucro + valor_impostos;

    printf("Valor correspondente ao lucro do distribuidor: %.2f\n", valor_lucro);
    printf("Valor correspondente aos impostos: %.2f\n", valor_impostos);
    printf("Preço final do veículo: %.2f\n", preco_final);

    return 0;
}
