#include <stdio.h>
#include <string.h>
#include "nanlib.h"

int main() {
    char frase[50], fraseCriptografada[50];
    printf("Digite uma frase a ser criptografada: ");
    fgets(frase, sizeof(frase), stdin);

    // Converte todas as letras para MAIUSCULO
    // strupr(frase); // DESCOMENTE esta linha para compilar no Windows
    nan_strupr(frase); // COMENTE esta linha para compilar no Windows

    // Copia a frase original
    strcpy(fraseCriptografada, frase);

    // Inverte a frase
    // strrev(fraseCriptografada); // DESCOMENTE esta linha para compilar no Windows
    nan_strrev(fraseCriptografada); // COMENTE esta linha para compilar no Windows

    // Substitui as consoantes por #
    for(int i = 0; i < strlen(fraseCriptografada); i++) {
        if (fraseCriptografada[i] == 'A' || fraseCriptografada[i] == 'E' || 
            fraseCriptografada[i] == 'I' || fraseCriptografada[i] == 'O' ||
            fraseCriptografada[i] == 'U' || fraseCriptografada[i] == ' ')
        {
            continue;
        } else {
            fraseCriptografada[i] = '#';
        }
        
    }
    printf("Frase: %s\n", frase);
    printf("Saída: %s", fraseCriptografada);
    return 0;
}
