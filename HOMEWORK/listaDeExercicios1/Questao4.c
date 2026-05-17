#include <stdio.h>
int main(void) {
    int conta;
    double saldoInicial, cobrancas, creditos, limite, novoSaldo;
    printf("Entre com o numero da conta (-1 para finalizar): ");
    scanf("%d", &conta);
    while (conta != -1) {
        printf("Entre com o saldo inicial: ");
        scanf("%lf", &saldoInicial);
        printf("Entre com o total de cobrancas: ");
        scanf("%lf", &cobrancas);
        printf("Entre com o total de creditos: ");
        scanf("%lf", &creditos);
        printf("Entre com o limite de credito: ");
        scanf("%lf", &limite);
        novoSaldo = saldoInicial + cobrancas - creditos;
        if (novoSaldo > limite) {
            printf("Conta: %d\n", conta);
            printf("Limite de credito: %.2f\n", limite);
            printf("Saldo: %.2f\n", novoSaldo);
            printf("Limite de Credito Excedido.\n");
        }
        printf("Entre com o numero da conta (-1 para finalizar): ");
        scanf("%d", &conta);
    }
    return 0;
}
