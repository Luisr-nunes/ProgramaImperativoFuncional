#include <stdio.h>

int verifica_divisibilidade(int dividendo, int divisor) {
    if (divisor == 0) {
        printf("Erro: divisao por zero.\n");
        return -1;
    }
    
    if (dividendo % divisor == 0) {
        return 0;
    } else {
        if (dividendo > divisor) {
            return dividendo;
        }
        return divisor; 
    }
}

int main() {
    int num1, num2;
    
    printf("Digite o primeiro numero (dividendo): ");
    scanf("%d", &num1);
    printf("Digite o segundo numero (divisor): ");
    scanf("%d", &num2);

    int resultado = verifica_divisibilidade(num1, num2);
    printf("Resultado retornado pela funcao: %d\n", resultado);

    return 0;
}
