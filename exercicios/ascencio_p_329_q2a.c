#include <stdio.h>
#include <string.h>
#include "nanlib.h"

int main() {
    char frase[50];
    printf("Digite uma frase a ser criptografada: ");
    fgets(frase, sizeof(frase), stdin);

    // Converte todas as letras para MAIUSCULO
    // strupr(frase); // DESCOMENTE esta linha para compilar no Windows
    nan_strupr(frase); // COMENTE esta linha para compilar no Windows

    // Substitui os espaços em branco por \n
    for(int i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ')
        {
            frase[i] = '\n';
        }
    }
    printf("Frase: %s\n", frase);
    printf("Saída: %s", frase);
    return 0;
}
