#include <stdio.h>

#define TAM 7

int main() {
    int vet[TAM];
    int num;

    for (int i = 0; i < TAM; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d%*c", &num);
    }

    printf("Números múltiplos de 2: ");
    for (int i = 0; i < TAM; i++) {
        if(vet[i] % 2 == 0) {
            printf("%d\t", vet[i]);
        }
    }

    printf("\nNúmeros múltiplos de 3: ");
    for (int i = 0; i < TAM; i++) {
        if(vet[i] % 3 == 0) {
            printf("%d\t", vet[i]);
        }
    }

    printf("\nNúmeros múltiplos de 2 e 3: ");
    for (int i = 0; i < TAM; i++) {
        if ( num % 6 == 0) {
            printf("%d\t", vet[i]);
        }
    }
    
    return 0;
}
