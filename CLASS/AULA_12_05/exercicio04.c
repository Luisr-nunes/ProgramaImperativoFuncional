#include <stdio.h>

#define PI 3.14159265358979323846

// Sub-rotina que calcula o volume de uma esfera dado o raio
// Formula: V = (4/3) * PI * R^3
double calcularVolume(double raio) {
  return (4.0 / 3.0) * PI * raio * raio * raio;
}

int main() {
  double raio;

  printf("Digite o raio da esfera: ");
  scanf("%lf", &raio);

  if (raio < 0) {
    printf("Erro: o raio nao pode ser negativo.\n");
    return 1;
  }

  double volume = calcularVolume(raio);

  printf("\nRaio   : %.2lf\n", raio);
  printf("Volume : %.4lf\n", volume);

  return 0;
}
