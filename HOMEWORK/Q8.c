#include <stdio.h>

unsigned long long calcula_fatorial(int n) {
    unsigned long long fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int valor;
    
    printf("Digite um valor inteiro e positivo para calcular o fatorial: ");
    scanf("%d", &valor);

    if (valor >= 0) {
        printf("O fatorial de %d e: %llu\n", valor, calcula_fatorial(valor));
    } else {
        printf("Nao existe fatorial de numero negativo.\n");
    }

    return 0;
}
