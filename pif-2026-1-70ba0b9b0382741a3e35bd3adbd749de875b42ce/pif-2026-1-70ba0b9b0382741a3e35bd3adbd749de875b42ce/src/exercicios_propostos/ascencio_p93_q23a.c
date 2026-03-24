/*
 * Ascêncio, Fernanda. Exercício Proposto 23 - Página 93
 * Programa para calcular o valor total de uma nota fiscal com desconto.
 * Author: Renan Costa Alencar
 * Date: 2026-03-08
 * Version: 1.0
 */
#include <stdio.h>

int main()
{
    int codigoProduto;
    int quantidade;
    float valorUnitario;
    float precoTotalNota;
    float desconto;
    float precoTotalFinal;

    printf("Código produto: ");
    scanf("%d%*c", &codigoProduto);
    printf("Quantidade: ");
    scanf("%d%*c", &quantidade);

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
        printf("Código do produto inválido!");
        return 10;
    }

    precoTotalNota = quantidade * valorUnitario;

    if (precoTotalNota <= 250.0)
        desconto = precoTotalNota * 0.05;
    else if (precoTotalNota > 250.0 && precoTotalNota <= 500.0)
        desconto = precoTotalNota * 0.1;
    else
        desconto = precoTotalNota * 0.15;

    precoTotalFinal = precoTotalNota - desconto;

    printf("Preço unitário: R$ %.2f", valorUnitario);
    printf("Preço total da nota: R$ %.2f", precoTotalNota);
    printf("Valor do desconto: R$ %.2f", desconto);
    printf("Preço final com desconto: R$ %.2f", precoTotalFinal);

    return 0;
}
