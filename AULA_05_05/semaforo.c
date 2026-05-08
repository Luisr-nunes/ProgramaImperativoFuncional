#include <stdio.h>

enum EstadoSemaforo { VERMELHO, AMARELO, VERDE };

int main() {

    enum EstadoSemaforo semaforo = VERMELHO;
    printf("Simulacao de Semaforo (6 transicoes):\n\n");

    for (int i = 0; i < 6; i++) {
        switch (semaforo) {
            case VERMELHO:
                printf("%d: VERMELHO - Pare\n", i + 1);
                semaforo = VERDE; 
                break;
            case VERDE:
                printf("%d: VERDE - Siga\n", i + 1);
                semaforo = AMARELO; 
                break;
            case AMARELO:
                printf("%d: AMARELO - Atencao\n", i + 1);
                semaforo = VERMELHO; 
                break;
        }
    }
    return 0;
}