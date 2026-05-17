#include <stdio.h>

// Sub-rotina que calcula o peso ideal com base na altura e no sexo
// Homem:   peso ideal = 72.7 * alt - 58
// Mulher:  peso ideal = 62.1 * alt - 44.7
double pesoIdeal(double altura, char sexo) {
    if (sexo == 'M' || sexo == 'm') {
        return 72.7 * altura - 58.0;
    } else {
        return 62.1 * altura - 44.7;
    }
}

int main() {
    double altura;
    char sexo;

    printf("Digite a altura (ex: 1.75): ");
    scanf("%lf", &altura);

    printf("Digite o sexo (M para masculino / F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
        printf("Erro: sexo invalido. Use M ou F.\n");
        return 1;
    }

    double peso = pesoIdeal(altura, sexo);

    printf("\nAltura : %.2lf m\n", altura);
    printf("Sexo   : %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : "Feminino");
    printf("Peso ideal: %.2lf kg\n", peso);

    return 0;
}
