/*
 * Ascêncio, Fernanda. Exercício Proposto 25 - Página 150
 * Programa para calcular os juros de investimentos
 * Author: Renan Costa Alencar
 * Date: 2026-03-08
 * Version: 1.0
 */

#include <stdio.h>

int main()
{
    int codigoCliente, tipoInvestimento;
    float valorInvestido, juros;

    printf("Código do cliente: ");
    scanf("%d%*c", &codigoCliente);

    while (codigoCliente > 0)
    {
        printf("Tipo de investimento (1 - Poupança, 2 - Poupança Plus, 3 - Fundos de Renda Fixa): ");
        scanf("%d%*c", &tipoInvestimento);
        printf("Valor investido: ");
        scanf("%f%*c", &valorInvestido);

        switch (tipoInvestimento)
        {
        case 1:
            juros = valorInvestido * 0.015;
            break;
        case 2:
            juros = valorInvestido * 0.02;
            break;
        case 3:
            juros = valorInvestido * 0.04;
            break;
        default:
            printf("Tipo de investimento inválido.\n");
        }

        printf("Código do cliente: %d\n", codigoCliente);
        printf("Valor investido: R$ %.2f\n", valorInvestido);
        printf("Valor dos juros: R$ %.2f\n", juros);

        printf("Código do cliente: ");
        scanf("%d%*c", &codigoCliente);
    }

    printf("Programa encerrado.\n");
    printf("Pressione Enter para sair...");
    getchar();
    return 0;
}