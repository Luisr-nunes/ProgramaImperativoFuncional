#include <stdio.h>

int main() {
    int codigo, tipo;
    float valor, rendimento;

    // ENTRADA DE DADOS
    printf("Digite o codigo do cliente: ");
    scanf("%d", &codigo);

    printf("Escolha o tipo de investimento:\n");
    printf("1 - Poupanca (0.5%%)\n2 - Renda Fixa (1%%)\n3 - CDB (1.5%%)\n");
    printf("Tipo: ");
    scanf("%d", &tipo);

    printf("Digite o valor investido: R$ ");
    scanf("%f", &valor);

    // RENDIMENETOS 
    switch(tipo) {
        case 1:
            rendimento = valor * 0.005; // 0.5% a.m 
            printf("\nTipo: Poupanca");
            break;
        case 2:
            rendimento = valor * 0.01;  // 1% a.m
            printf("\nTipo: Renda Fixa");
            break;
        case 3:
            rendimento = valor * 0.015; // 1.5% a.m 
            printf("\nTipo: CDB");
            break;
        default:
            printf("\nTipo de investimento invalido!");
            return 1; // ENCERRAR
    }

    // RESULTADOS
    printf("\nCliente: %d", codigo);
    printf("\nRendimento Mensal: R$ %.2f", rendimento);
    printf("\nValor Total com Rendimento: R$ %.2f\n", valor + rendimento);

    return 0;
}