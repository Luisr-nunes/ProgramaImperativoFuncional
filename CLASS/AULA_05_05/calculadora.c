#include <stdio.h>

enum Operacao { SOMAR = 1, SUBTRAIR, MULTIPLICAR, DIVIDIR, SAIR };

int main() {
    int opcao_int;
    enum Operacao opcao;
    float num1, num2, resultado;

    do {
        printf("\n--- CALCULADORA ---\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao_int);

        opcao = (enum Operacao)opcao_int;

        if (opcao >= SOMAR && opcao <= DIVIDIR) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
            case SOMAR:
                resultado = num1 + num2;
                printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case SUBTRAIR:
                resultado = num1 - num2;
                printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case MULTIPLICAR:
                resultado = num1 * num2;
                printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
                break;
            case DIVIDIR:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
                } else {
                    printf("Erro: Divisao por zero nao permitida!\n");
                }
                break;
            case SAIR:
                printf("Saindo da calculadora...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != SAIR);

    return 0;
}
