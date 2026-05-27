#include <stdio.h>

int converte_para_segundos(int h, int m, int s) {
    return (h * 3600) + (m * 60) + s;
}

int main() {
    int horas, minutos, segundos;
    
    printf("Digite as horas, minutos e segundos separados por espaco: ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    int total_segundos = converte_para_segundos(horas, minutos, segundos);
    printf("%dh, %dmin e %ds correspondem a %d segundos.\n", horas, minutos, segundos, total_segundos);

    return 0;
}