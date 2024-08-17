//10. O custo ao consumidor de um carro novo � a soma do
//pre�o de f�brica com o percentual de lucro do distribuidor e
//dos impostos aplicados ao pre�o de f�brica.
//Fa�a um programa que receba o pre�o de f�brica de um
//ve�culo, o percentual de lucro do distribuidor e o percentual
//de impostos, calcule e mostre:
//a) o valor correspondente ao lucro do distribuidor;
//b) o valor correspondente aos impostos;
//c) o pre�o final do ve�culo.

#include <stdio.h>

int main() {
    float preco_fabrica, percentual_lucro, percentual_impostos;
    float valor_lucro, valor_impostos, preco_final;

    printf("Digite o pre�o de f�brica do ve�culo: ");
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
    printf("Pre�o final do ve�culo: %.2f\n", preco_final);

    return 0;
}
