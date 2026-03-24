#include <stdio.h>
int main(void) {
    double litros, km, totalLitros = 0.0, totalKm = 0.0;
    printf("Entre com os litros consumidos (-1 para finalizar): ");
    scanf("%lf", &litros);
    while (litros != -1) {
        printf("Entre com os km percorridos: ");
        scanf("%lf", &km);
        printf("A taxa km/litro para esse tanque foi %f\n", km / litros);
        totalKm += km;
        totalLitros += litros;
        printf("Entre com os litros consumidos (-1 para finalizar): ");
        scanf("%lf", &litros);
    }
    printf("A taxa total de km/litro foi %f\n", totalKm / totalLitros);
    return 0;
}
