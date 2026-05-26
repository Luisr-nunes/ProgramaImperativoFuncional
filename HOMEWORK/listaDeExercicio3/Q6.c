#include <stdio.h>
#include <ctype.h>

float calcula_peso_ideal(float alt, char sexo) {
    sexo = toupper(sexo); 

    if (sexo == 'M') {
        return (72.7 * alt) - 58.0;
    } else if (sexo == 'F') {
        return (62.1 * alt) - 44.7;
    } else {
        return 0.0;
    }
}

int main() {
    float altura;
    char sexo;
    
    printf("Digite a altura (ex: 1.75): ");
    scanf("%f", &altura);
    
    // O espaço antes do %c limpa o buffer do teclado (evita pular a leitura)
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    float peso_ideal = calcula_peso_ideal(altura, sexo);
    
    if (peso_ideal > 0) {
        printf("O peso ideal e: %.2f kg\n", peso_ideal);
    } else {
        printf("Sexo invalido inserido. Use M ou F.\n");
    }

    return 0;
}
