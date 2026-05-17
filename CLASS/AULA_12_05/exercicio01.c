#include <stdio.h>

// Sub-rotina que recebe um inteiro positivo N e retorna a soma de 1 até N
int somatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 1;
    }

    int resultado = somatorio(n);
    printf("A soma dos inteiros de 1 a %d = %d\n", n, resultado);

    return 0;
}
