#include <stdio.h>
#include <math.h>

double calcula_volume_esfera(double raio) {
    return (4.0 / 3.0) * pow(raio, 3);
}

int main() {
    double raio, volume;
    
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = calcula_volume_esfera(raio);
    printf("O volume da esfera de raio %.2lf e: %.2lf\n", raio, volume);

    return 0;
}
