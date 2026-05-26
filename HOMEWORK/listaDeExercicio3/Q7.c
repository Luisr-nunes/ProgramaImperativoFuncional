#include <stdio.h>

float media_valores_positivos() {
    float valor, soma = 0;
    int contador = 0;
    
    while (1) {
        printf("Valor (Digite 0 para encerrar): ");
        scanf("%f", &valor);
        
        if (valor == 0) {
            break;
        } else if (valor > 0) {
            soma += valor;
            contador++;
        } else {
            printf("Apenas valores positivos sao aceitos.\n");
        }
    }
    
    if (contador == 0) return 0.0;
    
    return soma / contador;
}

int main() {
    printf("--- Calculo de Media ---\n");
    
    float media = media_valores_positivos();
    
    if (media > 0) {
        printf("A media aritmetica dos valores e: %.2f\n", media);
    } else {
        printf("Nenhum valor valido foi inserido.\n");
    }

    return 0;
}
