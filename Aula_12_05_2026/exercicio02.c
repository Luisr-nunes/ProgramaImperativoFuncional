#include <stdio.h>

// Sub-rotina que converte horas, minutos e segundos em segundos totais
int converterParaSegundos(int horas, int minutos, int segundos) {
    return (horas * 3600) + (minutos * 60) + segundos;
}

int main() {
    int h, m, s;

    printf("Digite as horas: ");
    scanf("%d", &h);

    printf("Digite os minutos: ");
    scanf("%d", &m);

    printf("Digite os segundos: ");
    scanf("%d", &s);

    int total = converterParaSegundos(h, m, s);

    printf("\n%dh, %dmin e %ds correspondem a %d segundos\n", h, m, s, total);

    return 0;
}
