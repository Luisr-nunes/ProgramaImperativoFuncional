#include <stdio.h>

// Sub-rotina que verifica divisibilidade e retorna 0 se divisivel,
// ou o proximo divisor de 'a' maior que 'b' caso contrario
int verificarDivisor(int a, int b) {
    if (a % b == 0) {
        return 0;
    }

    // Busca o proximo divisor de 'a' apos 'b'
    int proximo = b + 1;
    while (proximo <= a) {
        if (a % proximo == 0) {
            return proximo;
        }
        proximo++;
    }

    return a; // o proprio 'a' sempre e divisivel por si mesmo
}

int main() {
    int a, b;

    printf("Digite o primeiro numero (dividendo): ");
    scanf("%d", &a);

    printf("Digite o segundo numero (divisor): ");
    scanf("%d", &b);

    int resultado = verificarDivisor(a, b);

    if (resultado == 0) {
        printf("\n%d e divisivel por %d -> retorno: 0\n", a, b);
    } else {
        printf("\n%d NAO e divisivel por %d -> proximo divisor: %d\n", a, b, resultado);
    }

    return 0;
}
