#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite número: ");
    scanf("%d%*c", &numero);

    maior = menor = numero;

    while (numero != 0) {
        if (numero > 0) {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        } else {
            printf("Número digitado é negativo!\n");
        }
        printf("Digite número: ");
        scanf("%d%*c", &numero);
    }

    printf("Maior número: %d\nMenor número %d", maior, menor);

    return 0;
}
