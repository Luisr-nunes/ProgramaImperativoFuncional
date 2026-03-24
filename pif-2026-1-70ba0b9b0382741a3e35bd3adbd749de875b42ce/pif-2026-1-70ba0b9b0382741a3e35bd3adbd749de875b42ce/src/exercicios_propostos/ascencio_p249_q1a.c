#include <stdio.h>

#define LINHA 3
#define COLUNA 5

int main() {
    int matriz[LINHA][COLUNA];
    int qtdElementos = 0;
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j< COLUNA; j++) {
            printf("Digite número: ");
            scanf("%d%*c", &matriz[i][j]);
            if (matriz[i][j] >= 15 && matriz[i][j] <= 20) {
                qtdElementos++;
            }
        }
    }

    printf("Números digitados:\n");
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Quantidade de elementos entre 15 e 20: %d", qtdElementos);

    return 0;
}