/*
 * Ascêncio, Fernanda. Exercício Proposto 23 - Página 93
 * Programa para calcular o valor total de uma nota fiscal com desconto.
 * Author: Renan Costa Alencar
 * Date: 2026-03-08
 * Version: 1.0
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int codigoProduto, quantidade;
    float valorUnitario, valorTotal, desconto, valorTotalFinal;

    printf("Código do produto: ");
    scanf("%d", &codigoProduto);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    if (codigoProduto >= 1 && codigoProduto <= 10)
        valorUnitario = 10.0;
    else if (codigoProduto >= 11 && codigoProduto <= 20)
        valorUnitario = 15.0;
    else if (codigoProduto >= 21 && codigoProduto <= 30)
        valorUnitario = 20.0;
    else if (codigoProduto >= 31 && codigoProduto <= 40)
        valorUnitario = 30.0;
    else
    {
        printf("Código do produto inválido.\n");
        return 1;
    }

    valorTotal = quantidade * valorUnitario;

    if (valorTotal <= 250.0)
        desconto = valorTotal * 0.05;
    else if (valorTotal > 250.0 && valorTotal <= 500.0)
        desconto = valorTotal * 0.1;
    else
        desconto = valorTotal * 0.15;

    valorTotalFinal = valorTotal - desconto;

    printf("Preço unitário: R$ %.2f\n", valorUnitario);
    printf("Valor total da nota: R$ %.2f\n", valorTotal);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Preço final com desconto: R$ %.2f\n", valorTotalFinal);

    return 0;
}