#include <stdio.h>

// Sub-rotina que recebe um inteiro e verifica se e positivo ou negativo
// Retorna:  1 se positivo
//           0 se zero
//          -1 se negativo
int verificarSinal(int numero) {
    if (numero > 0) {
        return 1;
    } else if (numero < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int resultado = verificarSinal(numero);

    if (resultado == 1) {
        printf("\nO numero %d e POSITIVO.\n", numero);
    } else if (resultado == -1) {
        printf("\nO numero %d e NEGATIVO.\n", numero);
    } else {
        printf("\nO numero e ZERO.\n");
    }

    return 0;
}
