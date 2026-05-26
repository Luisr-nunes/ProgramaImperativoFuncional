#include <stdio.h>

int soma_ate_n(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("A soma dos numeros de 1 ate %d e: %d\n", n, soma_ate_n(n));
    } else {
        printf("O numero deve ser positivo.\n");
    }

    return 0;
}