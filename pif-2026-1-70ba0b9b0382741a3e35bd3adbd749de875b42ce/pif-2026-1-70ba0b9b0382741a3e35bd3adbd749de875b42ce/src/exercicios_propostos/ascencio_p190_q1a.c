#include <stdio.h>

#define TAM 6

int main() {
    int pares[TAM], impares[TAM];
    int num, qtdPares = 0, qtdImpares = 0;

    for (int i = 0; i < 6; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d%*c", &num);

        if (num % 2 == 0) {
            pares[qtdPares] = num;
            qtdPares++;
        } else {
            impares[qtdImpares] = num;
            qtdImpares++;
        }
    }
    printf("Números pares: ");
    for (int i = 0; i < qtdPares; i++) {
        printf("%d\t", pares[i]);
    }
    printf("\nQuantidade de números pares: %d", qtdPares);

    printf("\nNúmeros impares: ");
    for (int i = 0; i < qtdImpares; i++) {
        printf("%d\t", impares[i]);
    }
    printf("\nQuantidade de números impares: %d", qtdImpares);

    return 0;
}