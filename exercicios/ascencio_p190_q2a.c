#include <stdio.h>

#define TAM 7

int main() {
    int multiDois[TAM], multiTres[TAM], multiDoisTres[TAM];
    int num, qtdDois = 0, qtdTres = 0, qtdDoisTres = 0;

    for (int i = 0; i < TAM; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d%*c", &num);

        if (num % 2 == 0 && num % 3 == 0) { // num % 6 == 0
            multiDoisTres[qtdDoisTres] = num;
            qtdDoisTres++;
        } else if (num % 2 == 0) {
            multiDois[qtdDois] = num;
            qtdDois++;
        } else
        {
            multiTres[qtdTres] = num;
            qtdTres++;
        }
    }

    printf("Números múltiplos de 2: ");
    for (int i = 0; i < qtdDois; i++) {
        printf("%d\t", multiDois[i]);
    }

    printf("\nNúmeros múltiplos de 3: ");
    for (int i = 0; i < qtdTres; i++) {
        printf("%d\t", multiTres[i]);
    }

    printf("\nNúmeros múltiplos de 2 e 3: ");
    for (int i = 0; i < qtdDoisTres; i++) {
        printf("%d\t", multiDoisTres[i]);
    }
    
    return 0;
}
