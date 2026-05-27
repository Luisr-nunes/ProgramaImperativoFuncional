#include <stdio.h>

int verifica_sinal(int valor) {
    if (valor >= 0) {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    int valor;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    int sinal = verifica_sinal(valor);
    if (sinal == 1) {
        printf("O valor %d e POSITIVO.\n", valor);
    } else {
        printf("O valor %d e NEGATIVO.\n", valor);
    }

    return 0;
}
